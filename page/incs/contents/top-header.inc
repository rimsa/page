        <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="offcanvas" data-target=".navbar-offcanvas" data-canvas="body">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
          <div class="navbar-language">
<?php
    $get = $_GET;
	foreach (Language::values() as $l) {
		$get['lang'] = $l;
?>
            <a href="<?= $_SERVER['PHP_SELF']; ?>?<?= http_build_query($get) ?>">
              <img src="<?= $settings->basePage . '/images/flags/' . $l . '.svg' ?>" alt="<?= Language::name($l) ?>" <?= ($settings->language === $l ? 'class="selected"' : '') ?>>
            </a>
<?php
	}
?>
          </div>
          <a class="navbar-brand" href="<?= $settings->basePage ?>"><?= $settings->name ?></a>
        </div>