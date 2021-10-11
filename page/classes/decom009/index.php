<?php

	function post_settings_init() {
		$page = MENU_CLASSES;

		$GLOBALS['settings']->lecture = 'decom009';
		$GLOBALS['settings']->basePath = '../..';
		$GLOBALS['settings']->menu->setCurrentPage($page);
		$GLOBALS['settings']->breadcrumbs = array(
				$page => Menu::options()[$page],
				$GLOBALS['settings']->lecture => ($GLOBALS['settings']->menu->path(MENU_CLASSES) . '/' . $GLOBALS['settings']->lecture)
		);
	}

	include_once('../../incs/classes/settings.inc');
	include_once($settings->basePath . '/incs/contents/nocache.inc');

?>
<!DOCTYPE html>
<html lang="<?= $settings->language ?>">
  <?php include_once($settings->basePath . '/incs/contents/head.inc'); ?>
  <body data-target=".scrollspy" data-spy="scroll">
    <div class="container">
      <div class="navbar navbar-fixed-top navbar-default">
        <?php include_once($settings->basePath . '/incs/contents/top-header.inc'); ?>
        <?php include_once($settings->basePath . '/incs/contents/slideshow.inc'); ?>
        <?php include_once($settings->basePath . '/incs/contents/menu.inc'); ?>
        <?php include_once($settings->basePath . '/incs/contents/breadcrumbs.inc'); ?>
      </div>

      <div class="row">
        <?php
        	include($settings->basePath . '/incs/settings/lectures/' . $settings->lecture . '.inc');
        	include($settings->basePath . '/incs/contents/lectures/lecture.inc');
        ?>
      </div>
    </div>

    <?php include_once($settings->basePath . '/incs/contents/footer.inc'); ?>
    <?php include_once($settings->basePath . '/incs/contents/scripts.inc'); ?>

  </body>
</html>
