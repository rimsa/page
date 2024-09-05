<?php
	$menu['info'] = $settings->translation->classes['info']
?>
  <section id="info" class="anchor-offset">
    <h3><?= $menu['info'] ?></h3>
	<ul>
      <li><b><?= $settings->translation->classes['course'] ?>: </b><?= $lecture->name ?></li>
      <li><b><?= $settings->translation->classes['code'] ?>: </b><?= $lecture->code ?></li>
      <li><b><?= $settings->translation->classes['departament'] ?>: </b><?= $lecture->departament ?></li>
      <li><b><?= $settings->translation->classes['dlist'] ?>: </b><a href="https://groups.google.com/d/forum/<?= $lecture->dlist ?>" target="_blank"><?= $lecture->dlist ?>@googlegroups.com</a></li>
      <li><b><?= $settings->translation->classes['term'] ?>: </b>
        <select id="termsel">
<?php
	foreach ($lecture->offers as $offer => $curriculum) {
?>
          <option value="<?= $offer ?>" <?= ($lecture->term == $offer ? 'selected' : '') ?>><?= $offer ?></option>
<?php
	}
?>
        </select>
      </li>
      <li><b><?= $settings->translation->classes['meetings'] ?>: </b>
        <ul>
<?php
	foreach ($lecture->meetings->getPublicFields() as $field) {
?>
          <li>
            <div><b><?= $settings->translation->classes['room'] ?>: </b><?= $lecture->meetings->getPublic($field)['room'] ?> (<b><?= $settings->translation->grading[$field] ?></b>)</div>
            <div><b><?= $settings->translation->classes['schedules'] ?>: </b></div>
            <div class="schedules">
<?php
		unset($daysched);

		// Build the days of the week.
		foreach(explode(PHP_EOL, $lecture->meetings->getPublic($field)['schedules']) as $sched) {
			list($day, $start, $end, $name) = explode(';', $sched);
			if (!isset($daysched[$day]))
				$daysched[$day] = array();

			array_push($daysched[$day],
				($start . ' ' . $settings->translation->util['to'] . ' ' . $end .
                               (empty($name) ? '' : ' (' . $name . ')')));
		}

		foreach ($daysched as $day => $schedules) {
			foreach ($schedules as $sched) {
?>
              <div class="schedrow">
                <div class="schedcol">
<?php
				if (isset($day)) {
?>
                  <b><?= $settings->translation->calendar['dayw'][$day] ?>:&nbsp;</b>
<?php
				}
?>
                </div>
                <div class="schedcol"><?= $sched ?></div>
              </div>
<?php
				unset($day);
			}
		}
?>
            </div>
          </li>
<?php
	}
?>
        </ul>
      </li>
    </ul>
  </section>
