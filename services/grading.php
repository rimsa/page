<?php

function abortService() {
	http_response_code(500);
	exit;
}

function post_settings_init() {
	$GLOBALS['settings']->lecture = preg_replace('/[^a-z0-9]/', '', strtolower($_REQUEST['lecture']));
	$GLOBALS['settings']->basePath = '../page';
}

function loadGrades($grades) {
	$g = $GLOBALS['grading']->grades;
	if (is_array($g)) {
		foreach ($g as $tmp)
			loadGrade($grades, $tmp);
	} else {
		loadGrade($grades, $g);
	}
}

function loadGrade($grades, $g) {
	foreach (explode(PHP_EOL, $g) as $line) {
		list($id, $value) = explode(';', $line);

		if (is_numeric($value)) {
			$tmp = $grades->getGradeById($id);
			if (isset($tmp))
				$tmp->setGrade($value);
		}
	}
}

function showGrades($grades) {
	foreach ($grades->all() as $g) {
		if (isset($g)) {
			showGrade($g);
			foreach ($g->entries() as $e)
				showGrade($e);
		}
	}
}

function showGrade($grade) {
	if (!is_null($grade->grade())) {
		if ($grade->type() == GradeType::Extra) {
?>
    <grade id="<?= $grade->id() ?>"><?= sprintf('%0.2f', $grade->grade()) ?></grade>
<?php
		} else {
			$avg = ($grade->grade() / $grade->max()) < 0.6 ? "below" : "above";
		?>
    <grade id="<?= $grade->id() ?>" avg="<?= $avg ?>"><?= sprintf('%0.2f', $grade->grade()) ?></grade>
<?php
		}
	}
}

(@include_once('../page/incs/classes/settings.inc')) or abortService();

$args = new Settings();
$args->term = preg_replace('/[^0-9_]/', '', strtolower($_REQUEST['term']));
$args->registry = preg_replace('/[^0-9]/', '', strtolower($_REQUEST['registry']));

in_array($settings->lecture, $settings->lectures) or abortService();
(@include_once($settings->basePath . '/incs/settings/lectures/' . $settings->lecture . '.inc')) or abortService();
array_key_exists($args->term, $lecture->offers) or abortService();
isset($lecture->grading) or abortService();
(@include_once($settings->basePath . '/incs/classes/grading.inc')) or abortService();
(@include_once($settings->basePath . '/incs/grades/' . $args->term . '/' . $settings->lecture . '/' . $args->registry . '.inc')) or abortService();
isset($grading) or abortService();

// Send the headers
header('Content-type: application/xml');
header('Pragma: public');
header('Cache-control: private');
header('Expires: -1');

echo "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\"?>\n";
?>
<!DOCTYPE grading [
  <!ELEMENT grading (name|link|mode*)>
  <!ELEMENT name (#PCDATA)>
  <!ELEMENT link (#PCDATA)>
  <!ELEMENT mode (grade*)>
  <!ATTLIST mode
    type (theory | lab)        "theory">
  <!ELEMENT grade (#PCDATA)>
  <!ATTLIST grade
    id   ID                    #REQUIRED
    avg (below | above)        #IMPLIED>
]>
<grading>
  <name><?= $grading->name ?></name>
<?php
    if ($args->term == array_key_first($lecture->offers)) {
?>
  <link><?= htmlentities($grading->link) ?></link>
<?php
	} else {
?>
  <link />
<?php
	}
?>
<?php
if (is_array($lecture->grading)) {
	foreach ($lecture->grading as $lectType => $tempGrading) {
?>
  <mode type="<?= $lectType ?>">
<?php
		$grades = buildGrades($tempGrading);
		loadGrades($grades);
		showGrades($grades);
?>
  </mode>
<?php
	}
} else {
?>
  <mode>
<?php
	$grades = buildGrades($lecture->grading);
	loadGrades($grades);
	showGrades($grades);
?>
  </mode>
<?php
}
?>
</grading>
