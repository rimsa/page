        <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="offcanvas" data-target=".navbar-offcanvas" data-canvas="body">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <div class="navbar-language">
<?php
	$get = $_GET;
	$path = $_SERVER['SCRIPT_NAME'];
	foreach (Language::values() as $l) {
		$get['lang'] = $l;
		$url = $path . '?' . http_build_query($get);

?>
            <a href="<?= htmlspecialchars($url, ENT_QUOTES, 'UTF-8') ?>">
              <img src="<?= $settings->basePage . '/images/flags/' . $l . '.svg' ?>" alt="<?= Language::name($l) ?>" <?= ($settings->language === $l ? 'class="selected"' : '') ?>>
            </a>
<?php
	}
?>
          </div>
          <a class="navbar-brand" href="<?= $settings->basePage ?>"><?= $settings->name ?></a>
        </div>