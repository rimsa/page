<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '408, Prédio 20',
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
Todas as entregas são feitas no SIGAA em formato PDF
Cópias, de qualquer natureza, são penalizadas com nota zero
Entregas atrasadas não são consideradas
Toda a comunicação é feita exclusivamente via twitter (avisos) e lista de discussão (conteúdo)
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
Erros nos slides valem 0,5pts (postar na lista de discussão)
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
tp1/TP1.pdf;https://youtu.be/8lemN5BHUYk;24/10;tp1/code.zip;miniDart;O objetivo desse trabalho é desenvolver um interpretador para um subconjunto de uma linguagem de programação conhecida. Para isso foi criada miniDart, uma linguagem de programação de brinquedo baseada em Dart.
tp2/TP2.pdf;https://youtu.be/1PLl5cMAPas;01/12;tp2/squadro.zip;Squadro;O objetivo desse trabalho é desenvolver o jogo Squadro em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;05/12;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;12/12;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;01/12;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
09/08/2022;holiday;Semana de acolhimento
10/08/2022;holiday;Semana de acolhimento
16/08/2022;laboratory;TP1: Interpretador (1/9)
17/08/2022;theory;Sintaxe e semântica
23/08/2022;laboratory;TP1: Interpretador (2/9)
24/08/2022;theory;Sistemas de linguagens
30/08/2022;laboratory;TP1: Interpretador (3/9)
31/08/2022;theory;Nomes, amarrações e escopo (1/2)
06/09/2022;laboratory;TP1: Interpretador (4/9)
07/09/2022;holiday;Feriado nacional: Independência do Brasil
13/09/2022;laboratory;TP1: Interpretador (5/9)
14/09/2022;theory;Nomes, amarrações e escopo (2/2)
20/09/2022;laboratory;TP1: Interpretador (6/9)
21/09/2022;theory;Tipos de dados
27/09/2022;laboratory;TP1: Interpretador (7/9)
28/09/2022;theory;Verificação de tipos
04/10/2022;laboratory;TP1: Interpretador (8/9)
05/10/2022;theory;Subprogramas
11/10/2022;laboratory;TP1: Interpretador (9/9)
12/10/2022;holiday;Feriado nacional: Nossa Senhora Aparecida
18/10/2022;exam;Prova 1 (lab)
19/10/2022;exam;Prova 1
25/10/2022;laboratory;TP2: Programação orientada a eventos (1/4)
26/10/2022;theory;Programação orientada a objetos
01/11/2022;laboratory;TP2: Programação orientada a eventos (2/4)
02/11/2022;holiday;Feriado nacional: Finados
08/11/2022;laboratory;TP2: Programação orientada a eventos (3/4)
09/11/2022;theory;Tratamento de exceções
15/11/2022;holiday;Feriado nacional: Proclamação da República
16/11/2022;theory;Programação concorrente
22/11/2022;laboratory;TP2: Programação orientada a eventos (4/4)
23/11/2022;theory;Programação funcional (Haskell)
29/11/2022;laboratory;TP3: Programação funcional (Haskell)
30/11/2022;theory;Programação lógica (Prolog)
06/12/2022;laboratory;TP4: Programação lógica (Prolog)
07/12/2022;exam;Prova 2
13/12/2022;exam;Prova 2 (lab)
14/12/2022;exam;Prova suplementar
20/12/2022;exam;Prova especial (lab)
21/12/2022;exam;Prova especial
EOF;

?>
