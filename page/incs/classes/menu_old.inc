<?php

define('MENU_HOME', 'home');
// define('MENU_PROJECTS', 'projects');
// define('MENU_STUDENTS', 'students');
define('MENU_PUBLICATIONS', 'publications');
define('MENU_CLASSES', 'classes');
define('MENU_TOOLS', 'tools');
// define('MENU_BLOG', 'blog');
define('MENU_TUTORIALS', 'tutorials');

class Menu {

	private $current;
	
	const DefaultPage = MENU_HOME;

	private static $Options = array(
		MENU_HOME => '',
		// MENU_PROJECTS => 'projects',
		// MENU_STUDENTS => 'students',
		MENU_PUBLICATIONS => 'publications',
		MENU_CLASSES => 'classes',
		MENU_TOOLS => 'tools',
		// MENU_BLOG => 'blog',
		MENU_TUTORIALS => 'tutorials'
	);
	
	public function __construct() {
		$this->current = self::DefaultPage;
	}

	public function getCurrentPage() {
		return $this->current;
	}

	public function setCurrentPage($page) {
		// Only allow to update the current page
		// if it is one of the defined values.
		foreach (self::$Options as $name => $path) {
			if ($name === $page) {
				$this->current = $page;
				return true;
			}
		}

		return false;
	}

    public function isActive($page) {
		return (self::getCurrentPage() === $page);
    }
    
    public static function options() {
    	return self::$Options;
    }
    
    public static function path($page) {
    	return self::$Options[$page];
    }
}

?>
