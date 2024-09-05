<?php
	if (isset($lecture->lessons)) {
		$menu['lessons'] = $settings->translation->classes['lessons'];
?>
  <section id="lessons" class="anchor-offset">
    <h3><?= $menu['lessons'] ?></h3>
	<div class="lessons-container table-responsive">
      <table class="table table-condensed">
	    <thead>
	      <tr>
	        <th class="lecture"><?= $settings->translation->lessons['lecture'] ?></th>
	        <th class="video"><?= $settings->translation->lessons['video'] ?></th>
	        <th class="exercise"><?= $settings->translation->lessons['exercise'] ?></th>
	        <th class="description"><?= $settings->translation->lessons['description'] ?></th>
	      </tr>
	    </thead>
	    <tbody>
<?php
		foreach (explode(PHP_EOL, $lecture->lessons) as $lesson) {
			list($name, $lesson, $video, $exercise, $description) = explode(';', $lesson);
			$currentPath = $settings->baseDocuments .
						   '/lectures/' . $settings->lecture .
						   '/c' . $lecture->curriculum . '/';
?>
	      <tr>
	        <td class="lecture">
			    <a href="<?= $currentPath . 'lessons/' . $lesson ?>" target="_blank"><span class="lecture-icon"></span></a>
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
	        <td class="exercise">
	        <?php
                if (!empty($exercise)) {
	        ?>
	        	<a href="<?= $currentPath . 'exercises/' . $exercise ?>" target="_blank"><span class="exercise-icon"></span></a>
	        <?php
	            }
	        ?>
	        </td>
	        <td class="description"><b><?= $name ?>: </b><?= $description ?></td>
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
