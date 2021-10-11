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
exercise;assignment06;Lista 06;2;assignments
exercise;assignment07;Lista 07;2;assignments
exercise;assignment08;Lista 08;2;assignments
exercise;assignment09;Lista 09;2;assignments
exercise;assignment10;Lista 10;2;assignments
exercise;assignment11;Lista 11;2;assignments
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
total;labtotal;Total;100;
special;labexamsp;Prova especial;100;
last;lablast;Total;100;
EOF
);

$lecture->homeworks = <<<EOF
tp1/TP1.pdf;;05/10;tp1/support.zip;DTS;O objetivo desse trabalho é desenvolver um interpretador para uma linguagem de programação fictícia chamada DTS. Essa linguagem é capaz de tocar notas musicais no autofalante de beeps do computador com diversas durações.
tp2/TP2.pdf;;09/11;tp2/support.zip;Connect4;O objetivo desse trabalho é desenvolver o jogo Liga 4 em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;23/11;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;30/11;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;03/11;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
10/08/2015;theory;Apresentação da disciplina
11/08/2015;laboratory;Apresentação da disciplina (lab)
17/08/2015;theory;Sintaxe e semântica
18/08/2015;laboratory;TP1: Interpretador (1/6)
24/08/2015;theory;Sistemas de computação
25/08/2015;laboratory;TP1: Interpretador (2/6)
31/08/2015;theory;Nomes, amarrações e escopo
01/09/2015;laboratory;TP1: Interpretador (3/6)
07/09/2015;holiday;Feriado nacional: Independência do Brasil
08/09/2015;laboratory;TP1: Interpretador (4/6)
14/09/2015;theory;Tipos de dados
15/09/2015;laboratory;TP1: Interpretador (5/6)
21/09/2015;theory;Subprogramas
22/09/2015;laboratory;TP1: Interpretador (6/6)
28/09/2015;exam;Primeira prova
29/09/2015;laboratory;Seminários (1/2)
05/10/2015;theory;Programação orientada a objetos
06/10/2015;exam;Primeira prova (lab)
12/10/2015;holiday;Feriado nacional: Nossa Senhora Aparecida
13/10/2015;holiday;Recesso escolar: Funcionário público
19/10/2015;theory;Tratamento de exceções
20/10/2015;laboratory;TP2: Programação orientada a eventos (1/2)
26/10/2015;theory;Programação concorrente
27/10/2015;laboratory;TP2: Programação orientada a eventos (2/2)
02/11/2015;holiday;Feriado nacional: Finados
03/11/2015;laboratory;Seminários (2/2)
09/11/2015;theory;Programação funcional (Haskell)
10/11/2015;laboratory;TP3: Programação funcional (Haskell)
16/11/2015;theory;Programação lógica (Prolog)
17/11/2015;laboratory;TP4: Programação lógica (Prolog)
23/11/2015;exam;Segunda prova
24/11/2015;exercise;Resolução de exercícios (lab)
30/11/2015;exercise;Resolução de exercícios
01/12/2015;exam;Segunda prova (lab)
07/12/2015;exam;Prova suplementar
08/12/2015;holiday;Feriado regional: Nossa Senhora da Conceição
14/12/2015;exam;Prova especial
15/12/2015;exam;Prova suplementar/especial (lab)
EOF;

?>
