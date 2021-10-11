<?php

	include_once('./incs/classes/settings.inc');
	include_once($settings->basePath . '/incs/contents/nocache.inc');

	$settings->slideshow = true;

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

      <div id="profile" class="row">
        <img src="<?= $settings->basePage ?>/images/profile/andrei.jpg" class="img-rounded img-responsive" alt="Andrei Rimsa" width="200" height="150" />
        <div class="description">
          <h3><?= $settings->translation->profile['title'] ?></h3>
          <div>
            <?= $settings->translation->profile['description'] ?>
          </div>
          <br />
          <div>
            <b><?= $settings->translation->profile['interests']['label'] ?>: </b><?= $settings->translation->profile['interests']['topics'] ?>
          </div>
        </div>
      </div>
    </div>

    <?php include_once($settings->basePath . '/incs/contents/footer.inc'); ?>
    <?php include_once($settings->basePath . '/incs/contents/scripts.inc'); ?>

  </body>
</html>
