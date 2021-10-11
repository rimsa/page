<?php

// version prior to 5.6 do not allow const arrays.
if (version_compare(phpversion(), '5.6', '<')) {
	include_once('menu_old.inc');
	include_once('language_old.inc');
} else {
	include_once('menu.inc');
	include_once('language.inc');
}

// Class definition
class Settings {

	private $protected;
	private $public;

	public function __construct() {
		$this->protected = array();
		$this->public = array();
	}

	public function getProtectedFields() {
		return array_keys($this->protected);
	}

	public function getProtected($key) {
		return (isset($this->protected[$key]) ? $this->protected[$key] : false);
	}

	public function setProtected($key, $value) {
		$this->protected[$key] = $value;
	}

	public function getPublicFields() {
		return array_keys($this->public);
	}

	public function getPublic($key) {
		return (isset($this->public[$key]) ? $this->public[$key] : false);
	}

	public function setPublic($key, $value) {
		$this->public[$key] = $value;
	}

	public function __set($key, $value) {
		$this->setPublic($key, $value);
	}

	public function __get($key) {
		return $this->getPublic($key);
	}

	public function __isset($key) {
		return isset($this->public[$key]);
	}
}

$settings = new Settings();

$settings->root = '/';

// This defs should be used within the HTML code.
$settings->basePage = $settings->root . 'page';
$settings->baseDocuments = $settings->root . 'documents';
$settings->baseServices = $settings->root . 'services';

// This def should only be used in includes. This is because includes rely
// on relative paths since we can't know for sure the full path in the server fs.
$settings->basePath = '.';

$settings->lectures = array('decom009', 'decom035', 'decom042');

$settings->menu = new Menu();

$settings->breadcrumbs = null;

$settings->defaultPage = MENU_HOME;

$settings->name = 'Andrei Rimsa &Aacute;lvares';

$settings->address1 = 'Av. Amazonas, 7675, Nova Gameleira';
$settings->address2 = 'Belo Horizonte, Minas Gerais - 30510-000';
$settings->addrUrl = 'https://goo.gl/maps/gDpn339poEL2';

$settings->ddd = '31';
$settings->phone = '33196870';

$settings->email = 'a...@cefetmg.br';
$settings->pageUrl = 'rimsa.com.br';

if (function_exists('post_settings_init'))
	post_settings_init();

$settings->language = Language::load();
$settings->translation = new Translation();
	
?>
