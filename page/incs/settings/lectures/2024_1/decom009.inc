<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '107, Prédio 12',
  'schedules' => <<<EOF
thu;10:40;12:20;
EOF
);
$lecture->meetings->lab = array(
  'room' => '204, Prédio 12',
  'schedules' => <<<EOF
tue;08:50;10:30;Lab G1
tue;10:40;12:20;Lab G2
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
tp1/TP1.pdf;https://youtu.be/8lemN5BHUYk;05/08;tp1/code.zip;miniElixir;O objetivo desse trabalho é desenvolver um interpretador para um subconjunto de uma linguagem de programação conhecida. Para isso foi criada miniElixir, uma linguagem de programação de brinquedo baseada em Elixir.
tp2/TP2.pdf;https://youtu.be/1PLl5cMAPas;26/08;tp2/pursuit.zip;Pursuit;O objetivo desse trabalho é desenvolver o jogo Pursuit em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;02/09;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;09/09;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;02/09;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
05/03/2024;laboratory;Apresentação da disciplina (lab)
07/03/2024;theory;Apresentação da disciplina
12/03/2024;laboratory;TP1: Interpretador (1/8)
14/03/2024;theory;Sintaxe e semântica
19/03/2024;laboratory;TP1: Interpretador (2/8)
21/03/2024;theory;Sistemas de linguagens
26/03/2024;laboratory;TP1: Interpretador (3/8)
28/03/2024;holiday;Recesso escolar: Paixão de Cristo
02/04/2024;laboratory;TP1: Interpretador (4/8)
04/04/2024;theory;Nomes, amarrações e escopo (1/2)
09/04/2024;laboratory;TP1: Interpretador (5/8)
11/04/2024;theory;Nomes, amarrações e escopo (2/2)
04/07/2024;exercise;Revisão
09/07/2024;laboratory;TP1: Interpretador (6/8)
11/07/2024;theory;Verificação de tipos
16/07/2024;laboratory;TP1: Interpretador (7/8)
18/07/2024;theory;Subprogramas
23/07/2024;laboratory;TP1: Interpretador (8/8)
25/07/2024;exam;Prova 1
30/07/2024;exam;Prova 1 (lab)
01/08/2024;theory;Programação orientada a objetos
06/08/2024;laboratory;TP2: Programação orientada a eventos (1/3)
08/08/2024;theory;Tratamento de exceções
13/08/2024;laboratory;TP2: Programação orientada a eventos (2/3)
15/08/2024;holiday;Feriado municipal: Assunção de Nossa Senhora
20/08/2024;laboratory;TP2: Programação orientada a eventos (3/3)
22/08/2024;theory;Programação funcional (Haskell)
27/08/2024;laboratory;TP3: Programação funcional (Haskell)
29/08/2024;theory;Programação lógica (Prolog)
03/09/2024;laboratory;TP4: Programação lógica (Prolog)
05/09/2024;exam;Prova 2
10/09/2024;exam;Prova 2 (lab)
12/09/2024;exam;Prova suplementar
17/09/2024;exam;Prova especial (lab)
19/09/2024;exam;Prova especial
EOF;

?>
