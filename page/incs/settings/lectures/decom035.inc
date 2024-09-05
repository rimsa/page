<?php

$lecture = new Settings();
$lecture->name = 'Linguagens Formais e Autômatos';
$lecture->code = '2ECOM.035';
$lecture->image = 'images/classes/lfa.png';
$lecture->departament = 'DECOM';
$lecture->offers = array(
	"2024_1" => 1,
	"2023_2" => 1,
	"2023_1" => 1,
	"2022_2" => 1,
	"2022_1" => 1,
	"2021_2" => 1,
	"2021_1" => 1,
	"2020_2" => 1,
	"2020_1" => 1,
	"2018_1" => 1,
	"2017_2" => 1,
	"2017_1" => 1,
	"2016_2" => 1,
	"2016_1" => 1,
	"2015_2" => 1,
	"2015_1" => 1,
	"2014_2" => 1
);
$lecture->term = (array_key_exists('term', $_REQUEST) and array_key_exists($_REQUEST['term'], $lecture->offers)) ? $_REQUEST['term'] : array_key_first($lecture->offers);
$lecture->curriculum = $lecture->offers[$lecture->term];
$lecture->dlist = 'decom035';

$lecture->syllabus = <<<EOF
Conceitos básicos das linguagens formais
Linguagens regulares: livres de contexto, sensíveis ao contexto e irrestritas
Introdução ao parsing
Autômatos finitos e expressões regulares
Autômatos de pilha
Máquinas de Turing
Hierarquia das classes de linguagens
EOF;

$lecture->lessons = <<<EOF
Apresentação da disciplina;Aula00.pdf;https://youtu.be/7R-jWWfpPZA;;...
Conceitos preliminares;Aula01.pdf;https://youtu.be/DHOy_tL4OQs;Lista01.pdf;...
Autômatos finitos determinísticos (AFD);Aula02.pdf;https://youtu.be/IZYtWVa8YgU;Lista02.pdf;...
Minimização de AFD's;Aula03.pdf;https://youtu.be/tKwSPsNimVo;Lista03.pdf;...
Propriedades de AFD's;Aula04.pdf;https://youtu.be/6ghUtVz_aFw;Lista04.pdf;...
Autômatos finitos não determinísticos (AFN);Aula05.pdf;https://youtu.be/F9okx1usyAQ;Lista05.pdf;...
LR's: Lema do bombeamento e propriedades de fechamento;Aula06.pdf;https://youtu.be/g52qVHYX1So;Lista06.pdf;...
Expressões regulares;Aula07.pdf;https://youtu.be/R4mhyqOVGOg;Lista07.pdf;...
Gramáticas regulares;Aula08.pdf;https://youtu.be/dYiWaDpYFZI;Lista08.pdf;...
Autômatos de pilha (AP);Aula09.pdf;https://youtu.be/tlIKigSR95Q;Lista09.pdf;...
Gramática livre de contexto (GLC);Aula10.pdf;https://youtu.be/qZe15JSneeM;Lista10.pdf;...
Formas Normais sobre GLC's;Aula11.pdf;https://youtu.be/nYuExv2HKdI;Lista11.pdf;...
LLC's: Lema do bombeamento e propriedades de fechamento;Aula12.pdf;https://youtu.be/SWQKPT_xRjc;Lista12.pdf;...
Máquinas de Turing (MT);Aula13.pdf;https://youtu.be/epMZRcSGlpQ;Lista13.pdf;...
Variações de máquinas de Turing;Aula14.pdf;https://youtu.be/EWNlQBFVLMw;Lista14.pdf;...
Decidibilidade;Aula15.pdf;https://youtu.be/gKYMBZ9aZIk;Lista15.pdf;...
EOF;

$file = $settings->basePath . '/incs/settings/lectures/' . $lecture->term . '/' . $settings->lecture . '.inc';
if (file_exists($file))
	include_once($file);

?>
