<?php
	if (isset($lecture->projects)) {
		$menu['projects'] = $settings->translation->classes['projects'];
?>
  <section id="projects" class="anchor-offset">
    <h3><?= $menu['projects'] ?></h3>
	<div class="projects-container table-responsive">
      <table class="table table-condensed">
	    <thead>
	      <tr>
	        <th class="pro"><?= $settings->translation->projects['pro'] ?></th>
	        <th class="date"><?= $settings->translation->projects['date'] ?></th>
	        <th class="description"><?= $settings->translation->projects['description'] ?></th>
	      </tr>
	    </thead>
	    <tbody>
<?php
		foreach (explode(PHP_EOL, $lecture->projects) as $projects) {
			list($pro, $date, $description) = explode(';', $projects);
			$currentPath = $settings->baseDocuments .
							'/lectures/' . $settings->lecture .
							'/c' . $lecture->curriculum .
							'/projects/' . $lecture->term . '/';
?>
		  <tr>
			<td class="pro">
			    <a href="<?= $currentPath . $pro ?>" target="_blank"><span class="projects-icon"></span></a>
			</td>
			<td class="date"><?= $date ?></td>
			<td class="description"><?= $description ?></td>
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
