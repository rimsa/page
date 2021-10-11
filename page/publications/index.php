<?php

	function post_settings_init() {
		$page = MENU_PUBLICATIONS;

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

      <div id="publications" class="row">
        <?php include_once($settings->basePath . '/incs/settings/publications/publications.inc'); ?>
        <?php include_once($settings->basePath . '/incs/contents/publications/publications.inc'); ?>
      </div>
    </div>

    <?php include_once($settings->basePath . '/incs/contents/footer.inc'); ?>
    <?php include_once($settings->basePath . '/incs/contents/scripts.inc'); ?>

  </body>
</html>
