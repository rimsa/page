<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/rem-pcqg-afo" target="_blank">rem-pcqg-afo</a> (ERE: Ensino Remoto Emergencial)',
  'schedules' => <<<EOF
wed;14:50;16:30;
EOF
);
$lecture->meetings->lab = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/pdk-rtpa-aib" target="_blank">pdk-rtpa-aib</a> (ERE: Ensino Remoto Emergencial)',
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
tp1/TP1.pdf;https://youtu.be/8lemN5BHUYk;19/10;tp1/code.zip;miniPHP;O objetivo desse trabalho é desenvolver um interpretador para uma nova linguagem de programação, um subconjunto de PHP.
tp2/TP2.pdf;https://youtu.be/1PLl5cMAPas;09/11;tp2/nineholes.zip;Nine Holes;O objetivo desse trabalho é desenvolver o jogo Nine Holes em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;18/11;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;23/11;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;02/11;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
11/08/2020;laboratory;Apresentação da disciplina (lab)
12/08/2020;theory;Apresentação da disciplina
18/08/2020;laboratory;TP1: Interpretador (1/8)
19/08/2020;theory;Sintaxe e semântica
25/08/2020;laboratory;TP1: Interpretador (2/8)
26/08/2020;theory;Sistemas de linguagens
01/09/2020;laboratory;TP1: Interpretador (3/8)
02/09/2020;theory;Nomes, amarrações e escopo (1/2)
08/09/2020;laboratory;TP1: Interpretador (4/8)
09/09/2020;theory;Nomes, amarrações e escopo (2/2)
15/09/2020;laboratory;TP1: Interpretador (5/8)
16/09/2020;theory;Tipos de dados
22/09/2020;laboratory;TP1: Interpretador (6/8)
23/09/2020;theory;Verificação de tipos
29/09/2020;laboratory;TP1: Interpretador (7/8)
30/09/2020;theory;Subprogramas
06/10/2020;laboratory;TP1: Interpretador (8/8)
07/10/2020;theory;Programação orientada a objetos
13/10/2020;exam;Prova 1 (lab)
14/10/2020;exam;Prova 1
20/10/2020;laboratory;TP2: Programação orientada a eventos (1/3)
21/10/2020;theory;Tratamento de exceções (1/1)
27/10/2020;laboratory;TP2: Programação orientada a eventos (2/3)
28/10/2020;theory;Tratamento de exceções (2/2)
03/11/2020;laboratory;TP2: Programação orientada a eventos (3/3)
04/11/2020;theory;Programação funcional (Haskell)
10/11/2020;laboratory;TP3: Programação funcional (Haskell)
11/11/2020;theory;Programação lógica (Prolog)
17/11/2020;laboratory;TP4: Programação lógica (Prolog)
18/11/2020;theory;Programação concorrente
24/11/2020;exam;Prova 2 (lab)
25/11/2020;exam;Prova 2
01/12/2020;exam;Prova suplementar (lab)
02/12/2020;exam;Prova suplementar
09/12/2020;exam;Prova especial (lab)
09/12/2020;exam;Prova especial
EOF;

?>
