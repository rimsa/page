<?php
	if (isset($settings->breadcrumbs) && is_array($settings->breadcrumbs)) {
?>
        <div id="breadcrumbs">
          <a href="<?= $settings->basePage ?>">
            <span class="home"></span>
          </a>
<?php
		foreach ($settings->breadcrumbs as $name => $link) {
?>
          <img src="<?= $settings->basePage ?>/images/breadcrumbs/sep.png" width="10" height="15" alt="separation">
          <a href="<?= $settings->basePage . '/' . $link ?>"><?= $settings->translation->menu[$name] ?></a>
<?php
		}
?>
        </div>
<?php
	}
?>
