<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '413, Prédio 20',
  'schedules' => <<<EOF
thu;14:50;16:30;
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
tp1/TP1.pdf;https://youtu.be/8lemN5BHUYk;08/05;tp1/code.zip;miniJS;O objetivo desse trabalho é desenvolver um interpretador para um subconjunto de uma linguagem de programação conhecida. Para isso foi criada miniJS, uma linguagem de programação de brinquedo baseada em JavaScript.
tp2/TP2.pdf;https://youtu.be/1PLl5cMAPas;22/06;tp2/catch.zip;Catch;O objetivo desse trabalho é desenvolver o jogo Catch em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;26/06;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;03/07;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;26/06;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
02/03/2023;theory;Apresentação da disciplina
07/03/2023;laboratory;TP1: Interpretador (1/9)
09/03/2023;theory;Sintaxe e semântica
14/03/2023;laboratory;TP1: Interpretador (2/9)
16/03/2023;theory;Sistemas de linguagens
21/03/2023;laboratory;TP1: Interpretador (3/9)
23/03/2023;theory;Nomes, amarrações e escopo (1/2)
28/03/2023;laboratory;TP1: Interpretador (4/9)
30/03/2023;theory;Nomes, amarrações e escopo (2/2)
04/04/2023;laboratory;TP1: Interpretador (5/9)
06/04/2023;holiday;Recesso: Semana Santa
11/04/2023;laboratory;TP1: Interpretador (6/9)
13/04/2023;theory;Tipos de dados (1/2)
18/04/2023;laboratory;TP1: Interpretador (7/9)
20/04/2023;theory;Tipos de dados (2/2)
25/04/2023;laboratory;TP1: Interpretador (8/9)
27/04/2023;theory;Verificação de tipos
02/05/2023;laboratory;TP1: Interpretador (9/9)
04/05/2023;theory;Subprogramas
09/05/2023;exam;Prova 1 (lab)
11/05/2023;theory;Programação orientada a objetos
16/05/2023;laboratory;TP2: Programação orientada a eventos (1/5)
18/05/2023;exam;Prova 1
23/05/2023;laboratory;TP2: Programação orientada a eventos (2/5)
25/05/2023;theory;Tratamento de exceções
30/05/2023;laboratory;TP2: Programação orientada a eventos (3/5)
01/06/2023;theory;Programação concorrente
06/06/2023;laboratory;TP2: Programação orientada a eventos (4/5)
08/06/2023;holiday;Feriado nacional: Corpus Christi
13/06/2023;laboratory;TP2: Programação orientada a eventos (5/5)
15/06/2023;theory;Programação funcional (Haskell)
20/06/2023;laboratory;TP3: Programação funcional (Haskell)
22/06/2023;theory;Programação lógica (Prolog)
27/06/2023;laboratory;TP4: Programação lógica (Prolog)
29/06/2023;exam;Prova 2
04/07/2023;exam;Prova 2 (lab)
06/07/2023;exam;Prova suplementar
11/07/2023;exam;Prova especial (lab)
13/07/2023;exam;Prova especial
EOF;

?>
