<?php
	// Hold the menu information.
    $menu = array();

    // Initialize the page buffer.
	ob_start();

    include_once('info.inc');
    include_once('rules.inc');
	include_once('grading.inc');
    include_once('syllabus.inc');
	include_once('lessons.inc');
	include_once('homeworks.inc');
	include_once('seminars.inc');
	include_once('ta.inc');
	include_once('calendar.inc');

    // Get the page.
    $page = ob_get_contents();

    // Clear the buffer.
    ob_end_clean();

?>
<div class="col-sm-3 col-md-2 scrollspy">
  <ul id="smnav" class="nav hidden-xs" data-spy="affix">
<?php
    foreach ($menu as $id => $value) {
?>
    <li>
<?php
		if (is_array($value)) {
?>
      <a href="#<?= $id ?>" class="text-lowercase"><?= $value['name'] ?><span class="caret pull-right"></span></a>
      <ul class="nav">
<?php
			foreach ($value as $subid => $subvalue) {
				if ($subid != 'name') {
?>
        <li>
          <a href="#<?= $subid ?>" class="text-lowercase"><?= $subvalue ?></a>
        </li>
<?php
				}
			}
?>
	  </ul>
<?php
		} else {
?>
      <a href="#<?= $id ?>" class="text-lowercase"><?= $value ?></a>
<?php
		}
?>
    </li>
<?php
	}
?>
  </ul>
</div>
<div class="col-sm-9 col-md-10">
<?= $page ?>
</div>