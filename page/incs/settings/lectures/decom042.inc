<?php

$lecture = new Settings();
$lecture->name = 'Tópicos Especiais em PC: Programação em Linux';
$lecture->code = 'DECOM.42';
$lecture->image = 'images/classes/shell.png';
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
$lecture->dlist = 'decom042';

$lecture->syllabus = <<<EOF
Introdução à programação no sistema operacional Linux
Comandos e ferramentas de programação do Linux
Programação de scripts em terminal
O comando sed
A linguagem de programação AWK
EOF;

$lecture->lessons = <<<EOF
Apresentação da disciplina;Aula00.pdf;https://youtu.be/mvfFNpWsxTI;;...
Comandos básicos;Aula01.pdf;https://youtu.be/_XToHnD-osE;Teste01.pdf;...
Processamento de texto;Aula02.pdf;https://youtu.be/wUqIJ8ltDpc;Teste02.pdf;...
Sistemas de arquivos;Aula03.pdf;https://youtu.be/4n8fHg-fNgg;Teste03.pdf;...
Processos;Aula04.pdf;https://youtu.be/ICYGoYe32xA;Teste04.pdf;...
Entradas, saídas e redirecionamentos;Aula05.pdf;https://youtu.be/TC-blLUQyxI;Teste05.pdf;...
Expansões;Aula06.pdf;https://youtu.be/3A3TBgyMcGM;Teste06.pdf;...
Parâmetros e variáveis;Aula07.pdf;https://youtu.be/l3O2wI7NoOs;Teste07.pdf;...
Estruturas de fluxo condicionais;Aula08.pdf;https://youtu.be/i9-A5ncj4Sc;Teste08.pdf;...
Estruturas de repetição;Aula09.pdf;https://youtu.be/1iun6uCfMoE;Teste09.pdf;...
Expressões regulares;Aula10.pdf;https://youtu.be/BDsj5uvxLHg;Teste10.pdf;...
sed;Aula11.pdf;https://youtu.be/VDEbKGnoNpA;Teste11.pdf;...
awk;Aula12.pdf;https://youtu.be/RvwgPSG6LMc;Teste12.pdf;...
EOF;

$file = $settings->basePath . '/incs/settings/lectures/' . $lecture->term . '/' . $settings->lecture . '.inc';
if (file_exists($file))
	include_once($file);

?>
