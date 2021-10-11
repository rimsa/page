<?php
	if (isset($lecture->ta)) {
		$menu['ta'] = $settings->translation->classes['ta'];
?>
  <section id="ta" class="anchor-offset">
    <h3><?= $menu['ta'] ?></h3>
    <div class="ta-container">
<?php
		if (isset($lecture->ta->photo)) {
?>
      <img src="<?= $settings->basePage ?>/images/TAs/<?= $lecture->ta->photo ?>" class="img-rounded img-responsive" alt="<?= $lecture->ta->name ?>" width="120" height="120" />
<?php
		}
?>
      <ul class="description">
        <li><b><?= $settings->translation->ta['name'] ?>: </b><?= $lecture->ta->name ?></li>
        <li><b><?= $settings->translation->ta['email'] ?>: </b><a href="http://www.google.com/recaptcha/mailhide/d?k=<?= $lecture->ta->key[0] ?>&c=<?= $lecture->ta->key[1] ?>" onclick="window.open('http://www.google.com/recaptcha/mailhide/d?k=<?= urlencode($lecture->ta->key[0]) ?>&c=<?= urlencode($lecture->ta->key[1]) ?>', '', 'toolbar=0,scrollbars=0,location=0,statusbar=0,menubar=0,resizable=0,width=500,height=300'); return false;" title="Reveal this e-mail address"><?= $lecture->ta->email ?></a></li>
        <li><b><?= $settings->translation->ta['room'] ?>: </b><?= $lecture->ta->room ?></li>
        <li><b><?= $settings->translation->ta['schedule'] ?>: </b>
          <ul>
<?php
		foreach(explode(PHP_EOL, $lecture->ta->schedule) as $sched) {
			list($day, $time) = explode(';', $sched);

?>
            <li><b><?= $settings->translation->calendar['dayw'][$day] ?>: </b>
<?php
			$timetables = explode(',', $time);
            foreach($timetables as $tt) {
				list($start, $end) = explode('-', $tt);
				echo $start . ' ' . $settings->translation->util['to'] . ' ' . $end;
				if ($tt != end($timetables))
			        echo ',&nbsp;';
			}
?>
            </li>
<?php
		}
?>
          </ul>
        </li>
      </ul>
      <div style="clear: both;"></div>
    </div>
  </section>
<?php
	}
?>
