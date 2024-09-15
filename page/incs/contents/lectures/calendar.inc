<?php

	date_default_timezone_set("UTC");
 
	function trType($type) {
		if ($type === LectureType::Presentation)
			return 'class="info"';
		else if ($type === LectureType::Holiday)
			return 'class="success"';
		else if ($type === LectureType::Exercise)
			return 'class="warning"';
		else if ($type === LectureType::Exam)
				return 'class="danger"';
		else
			return "";
	}

	if (isset($lecture->calendar)) {
		$menu['calendar'] = array('name' => $settings->translation->classes['calendar']);

		include_once($settings->basePath . '/incs/classes/calendar.inc');
		$calendar = buildCalendar($lecture->calendar);
?>
	        <section id="calendar" class="anchor-offset">
	          <h3><?= $menu['calendar']['name'] ?></h3>
	          <div class="cal-container">
<?php
		foreach ($calendar->months() as $month) {
			$menu['calendar'][$month->format('F')] = $settings->translation->calendar['month'][$month->format('F')];
?>
	            <section id="<?= $month->format('F') ?>" class="anchor-offset">
	              <h4><?= $menu['calendar'][$month->format('F')] ?>&nbsp;<small><?= $month->format('Y') ?></small></h4>
	              <div class="month-container table-responsive">
	                <table class="table table-condensed table-hover">
	                  <thead>
	                    <tr>
	                      <th class="day"><?= $settings->translation->calendar['day'] ?></th>
	                      <th class="week"><?= $settings->translation->calendar['week'] ?></th>
	                      <th class="type"><?= $settings->translation->calendar['type'] ?></th>
	                      <th class="description"><?= $settings->translation->calendar['description'] ?></th>
	                    </tr>
	                  </thead>
	                  <tbody>
<?php
			foreach ($calendar->lecturesWithinMonth($month) as $entry) {
?>
	                    <tr <?= trType($entry->type()) ?>>
	                      <td><?= $entry->day() ?></td>
	                      <td><?= $settings->translation->calendar['wday'][$entry->week()] ?></td>
	                      <td><div class="<?= $entry->type() ?>"><?= $settings->translation->calendar[$entry->type()] ?></div></td>
	                      <td><?= $entry->description() ?></td>
	                    </tr>
<?php
			}
?>
	                  </tbody>
	                </table>
	              </div>
	            </section>
<?php
		}
?>
              </div>
	        </section>
<?php
	}
?>
