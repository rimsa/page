<?php

abstract class Language {

	const Portuguese = 'pt';
	const English = 'en';

	const Names = array(
		self::Portuguese => 'Portugues',
		self::English => 'English'
	);

	public static function values() {
		return array(self::Portuguese,
						self::English);
	}

	public static function name($lang) {
		return (self::isValid($lang) ? self::Names[$lang] : '');
	}

	public static function names() {
		return self::$Names;
	}
	
	public static function isValid($lang) {
		foreach (self::values() as $l) {
			if ($l === $lang)
				return true;
		}

		return false;
	}
	
	public static function load() {
		if (isset($_GET['lang']) && Language::isValid($_GET['lang'])) {
			$lang = $_GET['lang'];
		} else if (isset($_POST['lang']) && Language::isValid($_POST['lang'])) {
			$lang = $_POST['lang'];
		} else if (isset($_COOKIE['lang']) && Language::isValid($_COOKIE['lang'])) {
			$lang = $_COOKIE['lang'];
		} else {
			// Default language as portuguese pt.
			$lang = Language::Portuguese;
		}

		// Update the cookie value.
		$expirationDate = time() + (60 * 60 * 24 * 30 * 6); // 6 months
		setcookie('lang', $lang, $expirationDate, '/');

		return $lang;
	}
}

class Translation {

	private $trans = null;

	public function __construct() {
		$this->trans = parse_ini_file(($GLOBALS['settings']->basePath . '/incs/langs/lang_' . $GLOBALS['settings']->language), true);
	}

	public function __get($key) {
		return $this->trans[$key];
	}
}

?>