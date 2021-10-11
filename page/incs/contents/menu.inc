        <div class="navbar-offcanvas navmenu-fixed-left offcanvas">
          <a class="navmenu-brand" href="#"></a>
          <ul class="nav navbar-nav navbar-nav-<?= $settings->language ?>">
<?php
	foreach ($settings->menu->options() as $name => $path) {
?>
	<li class="<?= $name ?> <?= ($settings->menu->isActive($name) ? 'active' : '') ?>">
		<a href="<?= $settings->basePage . '/' . $path ?>"><?= $settings->translation->menu[$name] ?></a>
	</li>
<?php
	}
?>
          </ul>
        </div>
