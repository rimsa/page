<?php

	if (isset($lecture->homeworks)) {
		$menu['homeworks'] = $settings->translation->classes['homeworks'];

?>
  <section id="homeworks" class="anchor-offset">
    <h3><?= $menu['homeworks'] ?></h3>
	<div class="homeworks-container table-responsive">
      <table class="table table-condensed">
	    <thead>
	      <tr>
	        <th class="work"><?= $settings->translation->homeworks['work'] ?></th>
			<th class="video"><?= $settings->translation->homeworks['video'] ?></th>
			<th class="date"><?= $settings->translation->homeworks['date'] ?></th>
	        <th class="description"><?= $settings->translation->homeworks['description'] ?></th>
	      </tr>
	    </thead>
	    <tbody>
<?php
		foreach (explode(PHP_EOL, $lecture->homeworks) as $homework) {
			list($homework, $video, $date, $support, $title, $description) = explode(';', $homework);
			$currentPath = $settings->baseDocuments . '/lectures/' . $settings->lecture .
			               '/homeworks/' . $lecture->term . '/';
?>
		<tr>
			<td class="work">
			    <a href="<?= $currentPath . $homework ?>" target="_blank"><span class="homework-icon"></span></a>
			</td>
			<td class="video">
	        <?php
                if (!empty($video)) {
	        ?>
	        	<a href="<?= $video ?>" target="_blank"><span class="video-icon"></span></a>
	        <?php
	            }
	        ?>
			</td>
			<td class="date"><?= $date ?></td>
			<td class="description">
				<b>
<?php
	if (!empty($support)) {
?>
				<a href="<?= $currentPath . $support ?>"><?= $title ?></a>:&nbsp;
<?php
	} else {
?>
				<?= $title ?>:&nbsp;
<?php
	}
?>
				</b>
				<?= $description ?>
			</td>
		</tr>
<?php
		}
?>
       </tbody>
     </table>
   </div>
 </section>
<?php
	}
?>
