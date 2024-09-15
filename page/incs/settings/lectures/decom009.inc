<?php

$lecture = new Settings();
$lecture->name = 'Linguagens de Programação';
$lecture->code = '2ECOM.009';
$lecture->image = 'images/classes/lp.png';
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
$lecture->dlist = 'decom009';

$lecture->syllabus = <<<EOF
Evolução das principais linguagens
Noções de sintaxe e semântica
Nomes, vinculações
Verificação de tipos e tipos de dados
Expressões e atribuição
Estruturas de controle
Subprogramas: ambientes de referenciamento, passagem de parâmetros
Tipos abstratos de dados
Orientação a objetos
Tratamento de exceções
Linguagens funcionais e lógicas
EOF;

$lecture->lessons = <<<EOF
Apresentação da disciplina;Aula00.pdf;https://youtu.be/G6P7d0S4OTU;
Sintaxe e semântica;Aula01.pdf;https://youtu.be/bptWCmZD7uM;Lista01.pdf
Sistemas de linguagens;Aula02.pdf;https://youtu.be/TlhemqTYAY8;Lista02.pdf
Nomes, amarrações e escopo;Aula03.pdf;https://youtu.be/PCOlkw6U7pI;Lista03.pdf
Tipos de dados;Aula04.pdf;https://youtu.be/-9ylCYC_RIA;Lista04.pdf
Verificação de tipos;Aula05.pdf;https://youtu.be/OEqVO6BZMuE;Lista05.pdf
Subprogramas;Aula06.pdf;https://youtu.be/6qEkSTTALjg;Lista06.pdf
Programação orientada a objetos;Aula07.pdf;https://youtu.be/PVE5ZV9g3iE;Lista07.pdf
Tratamento de exceções;Aula08.pdf;https://youtu.be/RhLfggLIrKU;Lista08.pdf
Programação concorrente;Aula09.pdf;https://youtu.be/vvReFLnLN3E;Lista09.pdf
Programação funcional;Aula10.pdf;https://youtu.be/fP4ARSturKw;Lista10.pdf
Programação lógica;Aula11.pdf;https://youtu.be/USYQ7A4qR8o;Lista11.pdf
EOF;

$file = $settings->basePath . '/incs/settings/lectures/' . $lecture->term . '/' . $settings->lecture . '.inc';
if (file_exists($file))
	include_once($file);

?>
