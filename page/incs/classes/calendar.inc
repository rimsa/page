<?php

abstract class LectureType {

	const Theory       = 'theory';
	const Laboratory   = 'laboratory';
	const Presentation = 'presentation';
	const Exercise     = 'exercise';
	const Exam         = 'exam';
	const Holiday      = 'holiday';
	const Unknown      = '';

	public static function types() {
		return array(self::Theory, self::Laboratory,
						self::Presentation, self::Exercise,
						self::Exam, self::Holiday);
	}

	public static function isValid($type) {
		foreach (self::types() as $t) {
			if ($t === $type)
				return true;
		}

		return false;
	}
}

class LectureEntry {

	private $date = null;
	private $type = null;
	private $desc = null;

	public function __construct($date, $type, $desc) {
		$this->date = DateTime::createFromFormat("d/m/Y", $date);
		$this->type = LectureType::isValid($type) ? $type : LectureType::Unknown;
		$this->desc = $desc;
	}
	
	public function date() {
		return $this->date;
	}
	
	public function day() {
		return $this->date->format('d');
	}

	public function week() {
		return $this->date->format('l');
	}
	
	public function month() {
		return $this->date->format('F');
	}
	
	public function year() {
		return $this->date->format('Y');
	}
	
	public function type() {
		return $this->type;
	}
	
	public function description() {
		return $this->desc;
	}
}

class Lectures {

	private $lectures = array();

	public function __construct() {
	}

	public function add($date, $type, $desc) {
		array_push($this->lectures, new LectureEntry($date, $type, $desc));
	}

	public function all() {
		return $lectures;
	}

	public function months() {
		$months = array();
		foreach ($this->lectures as $lecture) {
			$date = $lecture->date();
			
			$m = $date->format('m/Y');
			if (!in_array($m, $months))
				$months[$m] = $date;
		}

		sort($months);
		return $months;
	}
	
	public function lecturesWithinMonth($month) {		
		$filtered = array_filter($this->lectures, function($entry) use ($month) {
			return ($month->format('m/Y') === $entry->date()->format('m/Y'));
		});
		
		usort($filtered, function($a, $b) {
			if ($a->date() == $b->date())
				return 0;
			else
				return $a->date() <= $b->date() ? -1 : 1;
		});
		
		return $filtered;
	}
}

function buildCalendar($calendar) {
	$lecture = new Lectures();

	foreach (explode(PHP_EOL, $calendar) as $line) {
		list($date, $type, $description) = explode(';', $line);
		$lecture->add($date, $type, trim($description));
	}

	return $lecture;
}

?>