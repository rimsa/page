<?php

  $sections = array('books', 'journals', 'conferences');

  $menu = array();
  foreach ($sections as $s)
    $menu[$s] = $settings->translation->publications[$s];

?>
<div class="col-sm-3 col-md-2 scrollspy">
  <ul id="smnav" class="nav hidden-xs" data-spy="affix">
<?php
  foreach ($menu as $id => $value) {
?>
    <li>
      <a href="#<?= $id ?>" class="text-lowercase"><?= $value ?></a>
    </li>
<?php
  }
?>
  </ul>
</div>
<div class="col-sm-9 col-md-10">
<?php
  foreach ($menu as $id => $value) {
?>
  <section id="<?= $id ?>" class="anchor-offset">
    <h3><?= $menu[$id] ?></h3>
    <ul>
<?php
    foreach (explode(PHP_EOL, $publications->getPublic($id)) as $line) {
      list($lang, $authors, $title, $venue, $year, $link) = explode(';', $line);
?>
      <li><?= $authors ?>. <a href="<?= $settings->baseDocuments . '/publications/' . $link ?>" target="_blank" class="<?= $lang ?>"><?= $title ?></a>. <?= $venue ?>, <?= $year ?>.</li>
<?php
    }
?>
    </ul>
  </section>
<?php
  }
?>
</div>
