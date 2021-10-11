<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Prédio 20, Sala 411',
  'schedules' => <<<EOF
wed;16:40;18:20;
EOF
);
$lecture->meetings->lab = array(
  'room' => 'Prédio principal, Sala 221',
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
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0.5pts (postar na lista de discussão)
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
exercise;assignment11;Lista 11;2;assignments
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF
	, 'lab' => <<<EOF
exam;labexams;Provas;30;+
exam;labexam01;Prova 01;15;labexams
exam;labexam02;Prova 02;15;labexams
exam;labexamsup;Prova suplementar;15;labexams
homework;labhomeworks;Trabalhos;60;+
homework;labhomework01;Trabalho prático 01;15;labhomeworks
homework;labhomework02;Trabalho prático 02;15;labhomeworks
homework;labhomework03;Trabalho prático 03;15;labhomeworks
homework;labhomework04;Trabalho prático 04;15;labhomeworks
seminar;labseminar;Seminários;10;
extra;labextras;Extras;5;
total;labtotal;Total;100;
special;labexamsp;Prova especial;100;
last;lablast;Total;100;
EOF
);

$lecture->homeworks = <<<EOF
tp1/TP1.pdf;;14/05;tp1/code.zip;SmallOO;O objetivo desse trabalho é desenvolver um interpretador para uma nova linguagem de programação que embute ideias de programação orientada a objetos: SmallOO.
tp2/TP2.pdf;;11/06;tp2/reversi.zip;Reversi;O objetivo desse trabalho é desenvolver o jogo Reversi em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;18/06;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;25/06;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;05/06;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
27/02/2018;laboratory;Apresentação da disciplina (lab)
28/02/2018;theory;Apresentação da disciplina
06/03/2018;laboratory;TP1: Interpretador (1/6)
07/03/2018;theory;Sintaxe e semântica
13/03/2018;laboratory;TP1: Interpretador (2/6)
14/03/2018;theory;Sistemas de linguagens
20/03/2018;laboratory;TP1: Interpretador (3/6)
21/03/2018;theory;Nomes, amarrações e escopo (1/2)
27/03/2018;laboratory;TP1: Interpretador (4/6)
28/03/2018;theory;Nomes, amarrações e escopo (2/2)
03/04/2018;laboratory;TP1: Interpretador (5/6)
04/04/2018;theory;Tipos de dados
10/04/2018;laboratory;TP1: Interpretador (6/6)
11/04/2018;theory;Verificação de tipos
17/04/2018;laboratory;Seminários (1/2)
18/04/2018;theory;Subprogramas (1/2)
24/04/2018;exam;Prova 1 (lab)
25/04/2018;theory;Subprogramas (2/2)
01/05/2018;holiday;Feriado nacional: Dia do Trabalhador
02/05/2018;exam;Prova 1
08/05/2018;laboratory;TP2: Programação orientada a eventos (1/3)
09/05/2018;theory;Programação orientada a objetos (1/2)
15/05/2018;laboratory;TP2: Programação orientada a eventos (2/3)
16/05/2018;theory;Programação orientada a objetos (2/2)
22/05/2018;laboratory;TP2: Programação orientada a eventos (3/3)
23/05/2018;theory;Tratamento de exceções
29/05/2018;holiday;Recesso: greve dos caminhoneiros
30/05/2018;holiday;Recesso: greve dos caminhoneiros
05/06/2018;laboratory;Seminários (2/2)
06/06/2018;theory;Programação funcional (Haskell)
12/06/2018;laboratory;TP3: Programação funcional (Haskell)
13/06/2018;theory;Programação lógica (Prolog)
19/06/2018;laboratory;TP4: Programação lógica (Prolog)
20/06/2018;exam;Prova 2
26/06/2018;exam;Prova 2 (lab)
27/06/2018;holiday;Recesso: jogo do Brasil
03/07/2018;exam;Prova suplementar (lab)
04/07/2018;exam;Prova suplementar
10/07/2018;exam;Prova especial (lab)
11/07/2018;exam;Prova especial
EOF;

?>
