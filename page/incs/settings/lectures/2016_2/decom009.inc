<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Prédio principal, Sala 206',
  'schedules' => <<<EOF
wed;16:40;18:20;
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
tp1/TP1.pdf;;03/10;tp1/code.zip;MiniLab;O objetivo desse trabalho é desenvolver um interpretador para uma linguagem de programação fictícia chamada MiniLab. Essa linguagem é capaz de realizar operações com matrizes de forma fácil e prática.
tp2/TP2.pdf;;07/11;tp2/RestaUm.zip;Resta um;O objetivo desse trabalho é desenvolver um jogo de Resta um em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;15/11;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;21/11;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;15/11;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

// Options: laboratory, theory, exercise, exam, holiday.
$lecture->calendar = <<<EOF
02/08/2016;laboratory;Apresentação da disciplina (lab)
03/08/2016;theory;Apresentação da disciplina
09/08/2016;laboratory;TP1: Interpretador (1/6)
10/08/2016;theory;Sintaxe e semântica
16/08/2016;laboratory;TP1: Interpretador (2/6)
17/08/2016;theory;Sistemas de computação
23/08/2016;laboratory;TP1: Interpretador (3/6)
24/08/2016;theory;Nomes, amarrações e escopo
30/08/2016;laboratory;TP1: Interpretador (4/6)
31/08/2016;theory;Tipos de dados
06/09/2016;laboratory;TP1: Interpretador (5/6)
07/09/2016;holiday;Feriado nacional: Independência do Brasil
13/09/2016;laboratory;TP1: Interpretador (6/6)
14/09/2016;theory;Subprogramas
20/09/2016;laboratory;Seminários (1/2)
21/09/2016;exercise;Resolução de exercícios
27/09/2016;exam;Primeira prova (lab)
28/09/2016;exam;Primeira prova
04/10/2016;laboratory;TP2: Programação orientada a eventos (1/2)
05/10/2016;theory;Programação orientada a objetos
11/10/2016;holiday;Recesso escolar
12/10/2016;holiday;Feriado nacional: Nossa Senhora da Aparecida
18/10/2016;laboratory;TP2: Programação orientada a eventos (2/2)
19/10/2016;theory;Tratamento de exceções
25/10/2016;laboratory;TP3: Programação funcional (Haskell)
26/10/2016;theory;Programação funcional (Haskell)
01/11/2016;laboratory;TP4: Programação lógica (Prolog)
02/11/2016;holiday;Feriado nacional: Finados
08/11/2016;laboratory;Seminários (2/2)
09/11/2016;theory;Programação lógica (Prolog)
15/11/2016;holiday;Feriado nacional: Proclamação da república
16/11/2016;theory;Programação concorrente
22/11/2016;exam;Segunda prova (lab)
25/01/2017;exam;Segunda prova
01/02/2017;exam;Prova suplementar
07/02/2017;exam;Prova especial (lab)
08/02/2017;exam;Prova especial
EOF;

?>
