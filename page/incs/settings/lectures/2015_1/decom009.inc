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
extra;labextras;Extras;5;
total;labtotal;Total;100;
special;labexamsp;Prova especial;100;
last;lablast;Total;100;
EOF
);

$lecture->homeworks = <<<EOF
tp1/TP1.pdf;;18/05;;AFF;O objetivo desse trabalho é desenvolver um interpretador para uma linguagem de programação fictícia chamada AFF que possui um conjunto de seis variáveis fixas insensíveis a caixa (A até F). Essa linguagem possui construções simples com instruções condicionais e laços de repetição.
tp2/TP2.pdf;;08/06;tp2/puzzle15.zip;Puzzle15;O objetivo desse trabalho é desenvolver o quebra cabeça de quinze (15) peças em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;22/06;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;29/06;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;14/06;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
09/03/2015;theory;Apresentação da disciplina
10/03/2015;laboratory;Apresentação da disciplina (lab)
16/03/2015;theory;Sintaxe e semântica
17/03/2015;laboratory;TP1: Interpretador (1/7)
23/03/2015;theory;Sistemas de computação
24/03/2015;laboratory;TP1: Interpretador (2/7)
30/03/2015;theory;Nomes, amarrações e escopo
31/03/2015;laboratory;TP1: Interpretador (3/7)
06/04/2015;theory;Tipos de dados
07/04/2015;laboratory;TP1: Interpretador (4/7)
13/04/2015;theory;Verificação de tipos
14/04/2015;laboratory;TP1: Interpretador (5/7)
20/04/2015;holiday;Recesso escolar
21/04/2015;holiday;Feriado nacional: Tiradentes
27/04/2015;theory;Subprogramas
28/04/2015;laboratory;TP1: Interpretador (6/7)
04/05/2015;exercise;Resolução de exercícios
05/05/2015;laboratory;TP1: Interpretador (7/7)
11/05/2015;exam;Primeira prova
12/05/2015;laboratory;Seminários (1/2)
18/05/2015;theory;Programação orientada a objetos
19/05/2015;exam;Primeira prova (lab)
25/05/2015;theory;Tratamento de exceções
26/05/2015;laboratory;TP2: Programação orientada a eventos (1/2)
01/06/2015;theory;Programação concorrente
02/06/2015;laboratory;TP2: Programação orientada a eventos (2/2)
08/06/2015;theory;Programação funcional (Haskell)
09/06/2015;laboratory;TP3: Programação funcional (Haskell)
15/06/2015;theory;Programação lógica (Prolog)
16/06/2015;laboratory;TP4: Programação lógica (Prolog)
22/06/2015;exercise;Resolução de exercícios
23/06/2015;laboratory;Seminários (2/2)
29/06/2015;exam;Segunda prova
30/06/2015;exam;Segunda prova (lab)
06/07/2015;exam;Prova suplementar
07/07/2015;exam;Prova suplementar (lab)
13/07/2015;exam;Prova especial
14/07/2015;exam;Prova especial (lab)
EOF;

?>