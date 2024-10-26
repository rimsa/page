<?php

abstract class GradeType {

	const Exam     = 'exam';
	const Exercise = 'exercise';
	const Homework = 'homework';
	const Project  = 'project';
	const Seminar  = 'seminar';
	const Extra    = 'extra';
	const Total    = 'total';
	const Special  = 'special';
	const Last     = 'last';

	public static function types() {
		return array(self::Exam, self::Exercise, self::Homework,
						self::Project, self::Seminar, self::Extra,
						self::Total, self::Special, self::Last);
	}

	public static function isValid($type) {
		foreach (self::types() as $t) {
			if ($t === $type)
				return true;
		}

		return false;
	}
}

abstract class GradeEntry {

	private $type;
	private $id;
	private $name;
	private $max;
	protected $entries;

	public function __construct($type, $id, $name, $max) {
		assert(GradeType::isValid($type), "Invalid grade type");
		foreach (array(GradeType::Total, GradeType::Special, GradeType::Last) as $t) {
			if ($type == $t)
				assert($max == 100, "Grade $t must be 100 points." . $max);
		}

		$this->type = $type;
		$this->id   = $id;
		$this->name = $name;
		$this->max  = $max;
		$this->entries = array();
	}

	public function type() {
		return $this->type;
	}

	public function id() {
		return $this->id;
	}

	public function name() {
		return $this->name;
	}

	public function max() {
		return $this->max;
	}

	public function entries() {
		return $this->entries;
	}

	abstract public function grade();
	abstract public function extra();
}

class SingleGradeEntry extends GradeEntry {

	private $value;

	public function __construct($type, $id, $name, $max) {
		parent::__construct($type, $id, $name, $max);
		$this->value = null;
	}

	public function setGrade($value) {
		assert($value >= 0);
		$this->value = $value;
	}

	public function grade() {
		return min($this->value, $this->max());
	}

	public function extra() {
		return max(($this->value - $this->max()), 0);
	}
}

class ComposedGradeEntry extends GradeEntry {

	private $excludeLowest;

	public function __construct($type, $id, $name, $max) {
		parent::__construct($type, $id, $name, $max);
		$this->excludeLowest = false;
		$this->entries = array();
	}

	public function addEntry($entry) {
		assert($entry instanceof SingleGradeEntry, "Invalid grade entry");
		assert($entry->type() == $this->type(), "Invalid grade type");

		array_push($this->entries, $entry);
		if ($entry->type() == GradeType::Exam && $entry->max() >= 20)
			$this->excludeLowest = true;

		return $this;
	}

	public function grade() {
		return min($this->internalGrade(), $this->max());
	}

	public function extra() {
		$extra = max($this->internalGrade() - $this->max(), 0);
		foreach ($this->entries as $e) {
			if (!is_null($e->extra()))
				$extra += $e->extra();
		}

		return $extra;
	}

	private function internalGrade() {
		$values = array();
		$exclude = $this->excludeLowest;
		foreach ($this->entries as $e) {
			if (!is_null($e->grade()))
				array_push($values, $e->grade());
			else
				$exclude = false;
		}

		return empty($values) ? null :
			(array_sum($values) - ($exclude ? min($values) : 0));
	}

}

class Grades {

	private $grades = array(
		GradeType::Exam     => null,
		GradeType::Exercise => null,
		GradeType::Homework => null,
		GradeType::Project  => null,
		GradeType::Seminar  => null,
		GradeType::Extra    => null,
		GradeType::Total    => null,
		GradeType::Special  => null,
		GradeType::Last     => null
	);

	public function addGrade($grade) {
		assert(is_null($this->grades[$grade->type()]), "Grade type already set");
		$this->grades[$grade->type()] = $grade;
	}

	public function getGradeByType($type) {
		assert(GradeType::isValid($type));

		$grade = $this->grades[$type];
		switch ($type) {
			case GradeType::Exam:
			case GradeType::Exercise:
			case GradeType::Homework:
			case GradeType::Project:
			case GradeType::Seminar:
				break;
			case GradeType::Extra:
				if (isset($grade)) {
					$extras = $grade->grade();
					foreach (array(GradeType::Exam, GradeType::Exercise,
									GradeType::Homework, GradeType::Project,
									GradeType::Seminar) as $t) {
						$g = $this->getGradeByType($t);
						if (isset($g))
							$extras += $g->extra();
					}

					$grade = new SingleGradeEntry($type, $grade->id(),
							$grade->name(), $grade->max());
					if ($extras > 0)
						$grade->setGrade($extras);
				}

				break;
			case GradeType::Total:
				assert(isset($grade), "Total grade is not set");

				$max = 0;
				$total = null;
				foreach (array(GradeType::Exam, GradeType::Exercise,
								GradeType::Homework, GradeType::Project,
								GradeType::Seminar, GradeType::Extra) as $t) {
					$g = $this->getGradeByType($t);
					if (isset($g)) {
						$v = $g->grade();
						if (isset($v))
							$total += $g->grade();

						// Extra does not should be included in the max.
						if ($t != GradeType::Extra)
							$max += $g->max();
					}
				}

				assert($max == $grade->max(), "The sum of max's does not match");

				$grade = new SingleGradeEntry($type, $grade->id(),
								$grade->name(), $grade->max());
				if (isset($total))
					$grade->setGrade($total);

				break;
			case GradeType::Special:
				assert(isset($grade), "Special exam is not set");
				break;
			case GradeType::Last:
				assert(isset($grade), "Last grade is not set");

				$special = $this->getGradeByType(GradeType::Special);
				if (!is_null($special->grade())) {
					$grade = new SingleGradeEntry($type, $grade->id(),
									$grade->name(), $grade->max());
					$grade->setGrade(($this->getGradeByType(GradeType::Total)->grade() +
							          $special->grade()) / 2);
				}

				break;
			default:
				assert(false, "Invalid type");
		}

		return $grade;
	}

	public function getGradeById($id) {
		foreach ($this->grades as $grade) {
			if (isset($grade)) {
				if ($grade->id() == $id)
					return $grade;

				foreach ($grade->entries() as $entry) {
					if ($entry->id() == $id)
						return $entry;
				}
			}
		}

		return null;
	}

	public function all() {
		$grades = array();
		foreach (array_keys($this->grades) as $type)
			$grades[$type] = $this->getGradeByType($type);

		return $grades;
	}
}

function buildGrades($grading) {
	$grades = new Grades();
	foreach (explode(PHP_EOL, $grading) as $line) {
		list($type, $id, $name, $max, $parent) = explode(';', $line);
		if ($parent == '+') {
			$grades->addGrade(new ComposedGradeEntry($type, $id, $name, $max));
		} else {
			$grade = new SingleGradeEntry($type, $id, $name, $max);
			if (empty($parent)) {
				$grades->addGrade($grade);
			} else {
				$parentGrade = $grades->getGradeById($parent);
				assert($parentGrade instanceof ComposedGradeEntry, "Invalid parent grade");

				$parentGrade->addEntry($grade);
			}
		}
	}

	return $grades;
}

?>
