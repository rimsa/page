<?php

	function post_settings_init() {
		$page = MENU_CLASSES;

		$GLOBALS['settings']->basePath = '..';
		$GLOBALS['settings']->menu->setCurrentPage($page);
		$GLOBALS['settings']->breadcrumbs = array($page => Menu::options()[$page]);
	}
	
	include_once('../incs/classes/settings.inc');
	include_once($settings->basePath . '/incs/contents/nocache.inc');

?>
<!DOCTYPE html>
<html lang="<?= $settings->language ?>">
  <?php include_once($settings->basePath . '/incs/contents/head.inc'); ?>
  <body>
    <div class="container">
      <div class="navbar navbar-fixed-top navbar-default">
        <?php include_once($settings->basePath . '/incs/contents/top-header.inc'); ?>
        <?php include_once($settings->basePath . '/incs/contents/slideshow.inc'); ?>
        <?php include_once($settings->basePath . '/incs/contents/menu.inc'); ?>
        <?php include_once($settings->basePath . '/incs/contents/breadcrumbs.inc'); ?>
      </div>

<?php
	// split into 2 columns if the number of lectures is even
	// or into 3 columns if it is odd.
	$columns = (count($settings->lectures) % 2 == 0) ? 2 : 3;
	
	$chunks = array_chunk($settings->lectures, $columns);
	foreach ($chunks as $chunk) {
		$size = count($chunk);
?>
      <div id="classes" class="row">
<?php
		foreach ($chunk as $lesson) {
			include($settings->basePath . '/incs/settings/lectures/' . $lesson . '.inc');
?>
        <div class="col-sm-<?= (12 / $size) ?> lecture">
          <a href="<?= $settings->basePage . '/' . $settings->menu->path(MENU_CLASSES) . '/' . $lesson ?>" class="logo"><img src="<?= $settings->basePage . '/' . $lecture->image ?>" width="100" height="100" alt="<?= $lesson ?>" /></a>
          <div>
            <h3><a class="name" href="<?= $settings->basePage . '/' . $settings->menu->path(MENU_CLASSES) . '/' . $lesson ?>"><?= $lecture->name ?></a><small><?= $lecture->code ?></small></h3>
            <p><b><?= $settings->translation->classes['syllabus'] ?>:&nbsp;</b><?= str_replace(PHP_EOL, '; ', $lecture->syllabus) ?></p>
          </div>
        </div>
<?php
		}
?>
      </div>
<?php
	}
?>
    </div>

    <?php include_once($settings->basePath . '/incs/contents/footer.inc'); ?>
    <?php include_once($settings->basePath . '/incs/contents/scripts.inc'); ?>

  </body>
</html>
