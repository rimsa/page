<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '412, Prédio 20',
  'schedules' => <<<EOF
wed;14:50;16:30;
EOF
);
$lecture->meetings->lab = array(
  'room' => '204, Prédio 12',
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
Teórica: individual e sem consulta
Laboratório: individual ou em dupla com consulta
Esperar pelo menos 30 minutos antes de entregar a prova
EOF
,   'Listas' => <<<EOF
Individual
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
tp1/TP1.pdf;https://youtu.be/8lemN5BHUYk;30/05;tp1/code.zip;miniGroovy;O objetivo desse trabalho é desenvolver um interpretador para um subconjunto de uma linguagem de programação conhecida. Para isso foi criada miniGroovy, uma linguagem de programação de brinquedo baseada em Groovy.
tp2/TP2.pdf;https://youtu.be/1PLl5cMAPas;01/07;tp2/alquerque.zip;Alquerque;O objetivo desse trabalho é desenvolver o jogo Alquerque em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;04/07;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;11/07;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;27/06;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
22/03/2022;holiday;Semana de acolhimento
23/03/2022;holiday;Semana de acolhimento
29/03/2022;laboratory;TP1: Interpretador (1/8)
30/03/2022;theory;Sintaxe e semântica
05/04/2022;laboratory;TP1: Interpretador (2/8)
06/04/2022;theory;Sistemas de linguagens
12/04/2022;laboratory;TP1: Interpretador (3/8)
13/04/2022;theory;Nomes, amarrações e escopo (1/2)
19/04/2022;laboratory;TP1: Interpretador (4/8)
20/04/2022;theory;Nomes, amarrações e escopo (2/2)
26/04/2022;laboratory;TP1: Interpretador (5/8)
27/04/2022;theory;Tipos de dados
03/05/2022;laboratory;TP1: Interpretador (6/8)
04/05/2022;theory;Verificação de tipos
10/05/2022;laboratory;TP1: Interpretador (7/8)
11/05/2022;theory;Subprogramas (1/2)
17/05/2022;laboratory;TP1: Interpretador (8/8)
18/05/2022;theory;Subprogramas (2/2)
24/05/2022;exam;Prova 1 (lab)
25/05/2022;exam;Prova 1
31/05/2022;laboratory;TP2: Programação orientada a eventos (1/4)
01/06/2022;theory;Programação orientada a objetos
07/06/2022;laboratory;TP2: Programação orientada a eventos (2/4)
08/06/2022;theory;Tratamento de exceções
14/06/2022;laboratory;TP2: Programação orientada a eventos (3/4)
15/06/2022;theory;Programação concorrente
21/06/2022;laboratory;TP2: Programação orientada a eventos (4/4)
22/06/2022;theory;Programação funcional (Haskell)
28/06/2022;laboratory;TP3: Programação funcional (Haskell)
29/06/2022;theory;Programação lógica (Prolog)
05/07/2022;laboratory;TP4: Programação lógica (Prolog)
06/07/2022;exam;Prova 2
12/07/2022;exam;Prova 2 (lab)
13/07/2022;exam;Prova suplementar
19/07/2022;exam;Prova especial (lab)
20/07/2022;exam;Prova especial
EOF;

?>
