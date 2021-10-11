<?php
	if (isset($lecture->syllabus)) {
		$menu['syllabus'] = $settings->translation->classes['syllabus'];
?>
  <section id="syllabus" class="anchor-offset">
    <h3><?= $menu['syllabus'] ?></h3>
    <ul>
<?php
		foreach (explode(PHP_EOL, $lecture->syllabus) as $topic) {
?>
      <li><?= $topic ?></li>
<?php
		}
?>
    </ul>
  </section>
<?php
	}
?>
