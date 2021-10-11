<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Prédio 20, Sala 301',
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
tp1/TP1.pdf;;01/05;tp1/code.zip;MiniLambda;O objetivo desse trabalho é desenvolver um interpretador para uma linguagem de programação fictícia chamada MiniLambda. Essa linguagem é capaz de realizar operações com vetores de forma fácil e prática.
tp2/TP2.pdf;;12/06;tp2/support.zip;Timbiriche;O objetivo desse trabalho é desenvolver o jogo de Timbiriche um em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;19/06;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;26/06;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;20/06;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

// Options: laboratory, theory, exercise, exam, holiday.
$lecture->calendar = <<<EOF
21/02/2017;laboratory;Apresentação da disciplina (lab)
22/02/2017;theory;Apresentação da disciplina
28/02/2017;holiday;Feriado nacional: Carnaval
01/03/2017;holiday;Recesso: Quarta-feira de cinzas
07/03/2017;laboratory;TP1: Interpretador (1/7)
08/03/2017;theory;Sintaxe e semântica
14/03/2017;laboratory;TP1: Interpretador (2/7)
15/03/2017;theory;Sistemas de linguagens
21/03/2017;laboratory;TP1: Interpretador (3/7)
22/03/2017;theory;Nomes, amarrações e escopo
28/03/2017;laboratory;TP1: Interpretador (4/7)
29/03/2017;theory;Tipos de dados (1/2)
04/04/2017;laboratory;TP1: Interpretador (5/7)
05/04/2017;theory;Tipos de dados (2/2)
11/04/2017;laboratory;TP1: Interpretador (6/7)
12/04/2017;theory;Verificação de tipos
18/04/2017;laboratory;TP1: Interpretador (7/7)
19/04/2017;theory;Subprogramas
25/04/2017;laboratory;Seminários (1/2)
26/04/2017;exercise;Resolução de exercícios
02/05/2017;exam;Prova 1 (lab)
03/05/2017;exam;Prova 1
09/05/2017;laboratory;TP2: Programação orientada a eventos (1/4)
10/05/2017;theory;Programação orientada a objetos
16/05/2017;laboratory;TP2: Programação orientada a eventos (2/4)
17/05/2017;theory;Tratamento de exceções
23/05/2017;laboratory;TP2: Programação orientada a eventos (3/4)
24/05/2017;theory;Programação concorrente
30/05/2017;laboratory;TP2: Programação orientada a eventos (4/4)
31/05/2017;theory;Programação funcional (Haskell)
06/06/2017;laboratory;TP3: Programação funcional (Haskell)
07/06/2017;theory;Programação lógica (Prolog)
13/06/2017;laboratory;TP4: Programação lógica (Prolog)
14/06/2017;exercise;Resolução de exercícios
20/06/2017;laboratory;Seminários (2/2)
21/06/2017;exam;Prova 2
27/06/2017;exam;Prova 2 (lab)
28/06/2017;exam;Prova suplementar
04/07/2017;exam;Prova especial (lab)
05/07/2017;exam;Prova especial
EOF;

?>
