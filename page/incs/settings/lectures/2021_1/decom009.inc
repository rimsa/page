<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '<a href="https://bit.ly/3BKiVG5" target="_blank">Microsoft Teams</a> (ERE: Ensino Remoto Emergencial)',
  'schedules' => <<<EOF
wed;14:50;16:30;
EOF
);
$lecture->meetings->lab = array(
  'room' => '<a href="https://bit.ly/3BKiVG5" target="_blank">Microsoft Teams</a> (ERE: Ensino Remoto Emergencial)',
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
exam;exams;Provas;60;+
exam;exam01;Prova 01;30;exams
exam;exam02;Prova 02;30;exams
exam;examsup;Prova suplementar;30;exams
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
seminar;seminar;Seminários;20;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF
	, 'lab' => <<<EOF
exam;labexams;Provas;30;+
exam;labexam01;Prova 01;15;labexams
exam;labexam02;Prova 02;15;labexams
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
tp1/TP1.pdf;https://youtu.be/8lemN5BHUYk;19/07;tp1/code.zip;miniRuby;O objetivo desse trabalho é desenvolver um interpretador para um subconjunto de uma linguagem de programação conhecida. Para isso foi criada miniRuby, uma linguagem de programação de brinquedo baseada em Ruby.
tp2/TP2.pdf;https://youtu.be/1PLl5cMAPas;09/08;tp2/picaria.zip;Picaria;O objetivo desse trabalho é desenvolver o jogo Picaria em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;23/08;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;30/08;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;23/08;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
18/05/2021;laboratory;Apresentação da disciplina (lab)
19/05/2021;theory;Apresentação da disciplina
25/05/2021;laboratory;TP1: Interpretador (1/7)
26/05/2021;theory;Sintaxe e semântica
01/06/2021;laboratory;TP1: Interpretador (2/7)
02/06/2021;theory;Sistemas de linguagens
08/06/2021;laboratory;TP1: Interpretador (3/7)
09/06/2021;theory;Nomes, amarrações e escopo
15/06/2021;laboratory;TP1: Interpretador (4/7)
16/06/2021;theory;Tipos de dados (1/2)
22/06/2021;laboratory;TP1: Interpretador (5/7)
23/06/2021;theory;Tipos de dados (2/2)
29/06/2021;laboratory;TP1: Interpretador (6/7)
30/06/2021;theory;Verificação de tipos
06/07/2021;laboratory;TP1: Interpretador (7/7)
07/07/2021;theory;Subprogramas
13/07/2021;exam;Prova 1 (lab)
14/07/2021;exam;Prova 1
20/07/2021;laboratory;TP2: Programação orientada a eventos (1/3)
21/07/2021;theory;Programação orientada a objetos
27/07/2021;laboratory;TP2: Programação orientada a eventos (2/3)
28/07/2021;theory;Tratamento de exceções
03/08/2021;laboratory;TP2: Programação orientada a eventos (3/3)
04/08/2021;theory;Programação funcional (Haskell)
10/08/2021;laboratory;TP3: Programação funcional (Haskell)
11/08/2021;theory;Programação lógica (Prolog)
17/08/2021;holiday;Semana de estudos autônomos
18/08/2021;holiday;Semana de estudos autônomos
24/08/2021;laboratory;TP4: Programação lógica (Prolog)
25/08/2021;theory;Programação concorrente
31/08/2021;exam;Prova 2 (lab)
01/09/2021;exam;Prova 2
07/09/2021;holiday;Feriado nacional: Independência do Brasil
08/09/2021;exam;Prova suplementar
14/09/2021;exam;Prova especial (lab)
15/09/2021;exam;Prova especial
EOF;

?>
