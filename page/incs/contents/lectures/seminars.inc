<?php
	if (isset($lecture->seminars)) {
		$menu['seminars'] = $settings->translation->classes['seminars'];
?>
  <section id="seminars" class="anchor-offset">
    <h3><?= $menu['seminars'] ?></h3>
	<div class="seminars-container table-responsive">
      <table class="table table-condensed">
	    <thead>
	      <tr>
	        <th class="sem"><?= $settings->translation->seminars['sem'] ?></th>
	        <th class="date"><?= $settings->translation->seminars['date'] ?></th>
	        <th class="description"><?= $settings->translation->seminars['description'] ?></th>
	      </tr>
	    </thead>
	    <tbody>
<?php
		foreach (explode(PHP_EOL, $lecture->seminars) as $seminars) {
			list($sem, $date, $description) = explode(';', $seminars);
			$currentPath = $settings->baseDocuments .
							'/lectures/' . $settings->lecture .
							'/c' . $lecture->curriculum .
							'/seminars/' . $lecture->term . '/';
?>
		  <tr>
			<td class="sem">
			    <a href="<?= $currentPath . $sem ?>" target="_blank"><span class="seminars-icon"></span></a>
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
