<?php
	function post_settings_init() {
		$GLOBALS['settings']->basePath = 'page';
	}

	include_once('./page/incs/classes/settings.inc');
	header('Location: ' . $settings->basePage);
	die();
?>
