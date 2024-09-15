<?php
	include_once($settings->basePath . '/incs/classes/grading.inc');
	
	function typeIcon($type) {
		switch ($type) {
			case GradeType::Exam:
			case GradeType::Exercise:
			case GradeType::Homework:
			case GradeType::Project:
			case GradeType::Seminar:
			case GradeType::Extra:
			case GradeType::Total:
				return $type;
			case GradeType::Special:
				return GradeType::Exam;
			case GradeType::Last:
				return GradeType::Total;
			default:
				assert(false, "Invalid type.");
		}
	}

	function showGrades($grading) {
		foreach (GradeType::types() as $type) {
			$grade = $grading->getGradeByType($type);
			if (isset($grade)) {
				if ($type == GradeType::Special) {
?>
      <div class="graderow">
      	<hr>
      </div>
<?php
				}
?>
      <div class="graderow">
        <div class="gradedesc <?= typeIcon($grade->type()) ?>-icon">
<?php
				if (empty($grade->entries())) {
?>
          <b><?= $grade->name() ?></b>
<?php
				} else {
?>
          <a href="javascript:void(0);" onclick="$('#<?= $grade->id() ?>-submenu').toggleClass('hidden');"><b><?= $grade->name() ?></b>&nbsp;<span class="caret"></span></a>
<?php
				}
?>
        </div>
        <div id="<?= $grade->id() ?>" class="gradevalue"><span>-</span>&nbsp;/</div>
        <div class="gradetotal"><?= $grade->max() ?> <?= $grade->max() == 1 ? 'pt' : 'pts'?></div>
      </div>
<?php
				if (!empty($grade->entries())) {
?>
      <div id="<?= $grade->id() ?>-submenu" class="hidden">
<?php
					foreach ($grade->entries() as $subgrade) {
?>
        <div class="graderow">
          <div class="gradedesc no-icon">
            <b><?= $subgrade->name() ?></b>
          </div>
          <div id="<?= $subgrade->id() ?>" class="gradevalue"><span>-</span>&nbsp;/</div>
          <div class="gradetotal"><?= $subgrade->max() ?> <?= $subgrade->max() == 1 ? 'pt' : 'pts'?></div>
        </div>
<?php
					}
?>
      </div>
<?php
				}
			}
		}
	}

	if (isset($lecture->grading)) {
		$menu['grading'] = $settings->translation->classes['grading'];
?>
  <section id="grading" class="anchor-offset">
    <h3><?= $menu['grading'] ?></h3>
    <div class="score-container">
      <form id="score-form" action="<?= $settings->baseServices ?>/grading.php" method="post" class="form-horizontal">
        <input id="registry-lect" class="form-control" type="hidden" name="lecture" value="<?= $settings->lecture ?>" />
        <input id="registry-term" class="form-control" type="hidden" name="term" value="<?= $lecture->term ?>" />
        <div class="input-group input-group-sm score-search">
          <span class="input-group-addon"><?= $settings->translation->grading['grade'] ?>:&nbsp;</span>
          <input id="registry-id" type="text" class="form-control" name="registry" placeholder="<?= $settings->translation->grading['registry'] ?>">
          <span class="glyphicon form-control-feedback"></span>
          <span class="input-group-btn">
            <button id="registry-btn" class="btn btn-default" type="submit"><?= $settings->translation->grading['go'] ?>!</button>
          </span>
        </div>
      </form>
    </div>
    <div class="grading-container">
      <div class="student"><b><?= $settings->translation->grading['student']; ?>:&nbsp;</b><span></span></div>
<?php
		if (is_array($lecture->grading)) {
			foreach ($lecture->grading as $lectType => $grading) {
?>
      <div class="section">
        <h4><?= $settings->translation->grading[$lectType] ?></h4>
<?php
				showGrades(buildGrades($grading));
?>
      </div>
<?php
			}
?>
      <div style="clear:both;"></div>
<?php
	    } else {
			showGrades(buildGrades($lecture->grading));
		}
?>
    </div>
  </section>
<?php
	}
?>