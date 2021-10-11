<?php
	if (isset($lecture->rules)) {
		$menu['rules'] = $settings->translation->classes['rules'];
?>
  <section id="rules" class="anchor-offset">
    <h3><?= $menu['rules'] ?></h3>
    <ul>
<?php
		foreach ($lecture->rules as $type => $values) {
?>
      <li>
        <b><?= $type ?></b>
        <ul>
        <?php
        	foreach (explode(PHP_EOL, $values) as $value) {
		?>
		  <li><?= $value ?></li>
		<?php
			}
		?>
		</ul>
      </li>
<?php
		}
?>
    </ul>
  </section>
<?php
	}
?>