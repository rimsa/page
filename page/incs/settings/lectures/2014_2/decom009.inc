<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Prédio principal, Sala 116',
  'schedules' => <<<EOF
mon;16:40;18:20;
EOF
);
$lecture->meetings->lab = array(
  'room' => 'Prédio 12, Sala 11',
  'schedules' => <<<EOF
tue;14:50;16:30;Lab G1
tue;16:40;18:20;Lab G2
EOF
);

$lecture->rules = array(
		'Gerais' => <<<EOF
Cópias, de qualquer natureza, serão penalizadas com nota zero
Entregas atrasadas não serão consideradas
Toda a comunicação será feita exclusivamente via twitter (avisos) e lista de discussão (conteúdo)
Dúvidas da matéria somente pela lista de discussão (ignorados em outros e-mails)
EOF
,	'Provas' => <<<EOF
Individual
Sem consulta
Esperar pelo menos 30 minutos antes de entregar a prova
EOF
,   'Listas' => <<<EOF
Individual
Manuscrito (impressos não serão considerados)
Entregar na semana posterior ao conteúdo dado
EOF
,   'Trabalhos e Seminários' => <<<EOF
Individual ou em dupla (de dois, ok?)
EOF
);

$lecture->grading = array(
	'theory' => <<<EOF
exam;exams;Provas;80;+
exam;exam01;Prova 01;40;exams
exam;exam02;Prova 02;40;exams
exam;examsup;Prova suplementar;40;exams
exercise;assignments;Listas;20;+
exercise;assignment01;Lista 01;2;assignments
exercise;assignment02;Lista 02;2;assignments
exercise;assignment03;Lista 03;2;assignments
exercise;assignment04;Lista 04;2;assignments
exercise;assignment05;Lista 05;2;assignments
exercise;assignment06;Lista 06;2;assignments
exercise;assignment07;Lista 07;2;assignments
exercise;assignment08;Lista 08;2;assignments
exercise;assignment09;Lista 09;2;assignments
exercise;assignment10;Lista 10;2;assignments
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF
	, 'lab' => <<<EOF
homework;labhomeworks;Trabalhos;90;+
homework;labhomework01;Trabalho prático 01;15;labhomeworks
homework;labhomework02;Trabalho prático 02;15;labhomeworks
homework;labhomework03;Trabalho prático 03;15;labhomeworks
homework;labhomework04;Trabalho prático 04;15;labhomeworks
homework;labhomework05;Trabalho prático 05;15;labhomeworks
homework;labhomework06;Trabalho prático 06;15;labhomeworks
seminar;labseminar;Seminários;10;
total;labtotal;Total;100;
special;labexamsp;Prova especial;100;
last;lablast;Total;100;
EOF
);

$lecture->homeworks = <<<EOF
tp1/TP1.pdf;;02/11;tp1/code.zip;Blockly;O objetivo desse trabalho é desenvolver um interpretador para uma linguagem de programação fictícia chamada Blockly, baseado no sistema de aprendizado <a href="http://code.org">http://code.org</a>. O programa é formado por blocos que são utilizados para movimentar um personagem em um labirinto.
tp2/TP2.pdf;;01/12;;Batalha;O objetivo desse trabalho é desenvolver um jogo de batalha em um ambiente orientado a objetos.
tp3/TP3.pdf;;15/12;tp3/calc.zip;Calculadora;O objetivo desse trabalho é desenvolver uma calculadora em um ambiente orientado a eventos usando Qt com C++.
tp4/TP4.pdf;;26/01;tp4/poems.zip;Poemas;O objetivo desse trabalho é resolver o problema de organização das frases de um poema usando programação concorrente.
tp5/TP5.pdf;;27/01;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp6/TP6.pdf;;02/02;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;30/06;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
22/09/2014;theory;Apresentação da disciplina
23/09/2014;laboratory;Apresentação da disciplina (lab)
29/09/2014;theory;Sintaxe e semântica
30/09/2014;laboratory;TP1: Interpretador (1/4)
06/10/2014;theory;Nomes, amarrações e escopo
07/10/2014;laboratory;TP1: Interpretador (2/4)
13/10/2014;theory;Tipos de dados
14/10/2014;laboratory;TP1: Interpretador (3/4)
20/10/2014;theory;Verificação de tipos
21/10/2014;laboratory;TP1: Interpretador (4/4)
27/10/2014;holiday;Recesso escolar: Funcionário público
28/10/2014;laboratory;Seminários (1/2)
03/11/2014;theory;Subprogramas
04/11/2014;laboratory;Seminários (2/2)
10/11/2014;exam;Primeira prova
11/11/2014;laboratory;TP2: Programação orientada a objetos (1/3)
17/11/2014;theory;Tipos abstratos de dados
18/11/2014;laboratory;TP2: Programação orientada a objetos (2/3)
24/11/2014;theory;Programação orientada a objetos
25/11/2014;laboratory;TP2: Programação orientada a objetos (3/3)
01/12/2014;theory;Tratamento de exceções
02/12/2014;laboratory;TP3: Programação orientada a eventos (1/2)
08/12/2014;holiday;Feriado regional: Nossa Senhora da Conceição
09/12/2014;laboratory;TP3: Programação orientada a eventos (2/2)
15/12/2014;theory;Programação concorrente
16/12/2014;laboratory;TP4: Programação concorrente
22/12/2014;holiday;Recesso escolar: Natal e Ano Novo
23/12/2014;holiday;Recesso escolar: Natal e Ano Novo
29/12/2014;holiday;Recesso escolar: Natal e Ano Novo
30/12/2014;holiday;Recesso escolar: Natal e Ano Novo
05/01/2015;holiday;Férias escolares
06/01/2015;holiday;Férias escolares
12/01/2015;theory;Programação funcional (Haskell)
13/01/2015;laboratory;TP5: Programação funcional (Haskell)
19/01/2015;theory;Programação lógica (Prolog)
20/01/2015;laboratory;TP6: Programação lógica (Prolog)
26/01/2015;exam;Segunda prova
27/01/2015;laboratory;Revisão
02/02/2015;exam;Prova suplementar
03/02/2015;exam;Prova suplementar (lab)
09/02/2015;exam;Prova especial
10/02/2015;exam;Prova especial (lab)
EOF;

?>
