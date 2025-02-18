<?php

$lecture = new Settings();
$lecture->image = 'images/classes/shell.png';
$lecture->department = 'DECOM';
$lecture->offers = array(
	"2025_1" => 2,
	"2024_2" => 2,
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

switch ($lecture->curriculum) {
	case 1:
		$lecture->name = 'Tópicos Especiais em Programação de Computadores: Programação em Linux';
		$lecture->code = 'DECOM.42';

		$lecture->syllabus = <<<EOF
Introdução à programação no sistema operacional Linux
Comandos e ferramentas de programação do Linux
Programação de scripts em terminal
O comando sed
A linguagem de programação AWK
EOF;

		break;
	case 2:
		$lecture->name = 'Tópicos Especiais em Fundamentos da Computação: Shell Scripting';
		$lecture->code = 'GT00COM001.1';

		$lecture->syllabus = <<<EOF
Comandos básicos
Processamento de texto
Sistema de arquivos
Processos
Entradas, saídas e redirecionamentos
Expansões
Parâmetros e variáveis
Estruturas de fluxo condicionais e de repetição
Expressões regulares
sed
AWK
EOF;

		break;
	default:
		assert(false, "Invalid curriculum.");
		break;
}

$lecture->lessons = <<<EOF
Apresentação da disciplina;Aula00.pdf;https://youtu.be/mvfFNpWsxTI;
Comandos básicos;Aula01.pdf;https://youtu.be/_XToHnD-osE;Lista01.pdf
Processamento de texto;Aula02.pdf;https://youtu.be/wUqIJ8ltDpc;Lista02.pdf
Sistemas de arquivos;Aula03.pdf;https://youtu.be/4n8fHg-fNgg;Lista03.pdf
Processos;Aula04.pdf;https://youtu.be/ICYGoYe32xA;Lista04.pdf
Entradas, saídas e redirecionamentos;Aula05.pdf;https://youtu.be/TC-blLUQyxI;Lista05.pdf
Expansões;Aula06.pdf;https://youtu.be/3A3TBgyMcGM;Lista06.pdf
Parâmetros e variáveis;Aula07.pdf;https://youtu.be/l3O2wI7NoOs;Lista07.pdf
Estruturas de fluxo condicionais e de repetição;Aula08.pdf;https://youtube.com/playlist?list=PLzoHPr9z_QGYCxtwEuK_9661aibCyPcT_;Lista08.pdf
Expressões regulares;Aula09.pdf;https://youtu.be/BDsj5uvxLHg;Lista09.pdf
sed;Aula10.pdf;https://youtu.be/VDEbKGnoNpA;Lista10.pdf
AWK;Aula11.pdf;https://youtu.be/RvwgPSG6LMc;Lista11.pdf
EOF;

$file = $settings->basePath . '/incs/settings/lectures/' . $lecture->term . '/' . $settings->lecture . '.inc';
if (file_exists($file))
	include_once($file);

?>
