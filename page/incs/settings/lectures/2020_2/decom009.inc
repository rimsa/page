<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/nwy-rrvo-ngu" target="_blank">nwy-rrvo-ngu</a> (ERE: Ensino Remoto Emergencial)',
  'schedules' => <<<EOF
wed;14:50;16:30;
EOF
);
$lecture->meetings->lab = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/nwy-rrvo-ngu" target="_blank">nwy-rrvo-ngu</a> (ERE: Ensino Remoto Emergencial)',
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
tp1/TP1.pdf;https://youtu.be/8lemN5BHUYk;01/03;tp1/code.zip;miniPascal;O objetivo desse trabalho é desenvolver um interpretador para um subconjunto de uma linguagem de programação conhecida. Para isso foi criada miniPascal, uma linguagem de programação de brinquedo baseada em Pascal.
tp2/TP2.pdf;https://youtu.be/1PLl5cMAPas;22/03;tp2/achi.zip;Achi;O objetivo desse trabalho é desenvolver o jogo Achi em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;31/03;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;05/04;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;15/03;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
06/01/2021;theory;Apresentação da disciplina
12/01/2021;laboratory;TP1: Interpretador (1/5)
13/01/2021;theory;Sintaxe e semântica
19/01/2021;laboratory;TP1: Interpretador (2/5)
20/01/2021;theory;Sistemas de linguagens
26/01/2021;laboratory;TP1: Interpretador (3/5)
27/01/2021;theory;Nomes, amarrações e escopo
02/02/2021;laboratory;TP1: Interpretador (4/5)
03/02/2021;theory;Tipos de dados
09/02/2021;laboratory;TP1: Interpretador (5/5)
10/02/2021;theory;Subprogramas
16/02/2021;holiday;Feriado nacional: Carnaval
17/02/2021;holiday;Recesso escolar: Quarta-feira de cinzas
23/02/2021;exam;Prova 1 (lab)
24/02/2021;exam;Prova 1
02/03/2021;laboratory;TP2: Programação orientada a eventos (1/2)
03/03/2021;theory;Programação orientada a objetos
09/03/2021;holiday;Semana de estudos autônomos
10/03/2021;holiday;Semana de estudos autônomos
16/03/2021;laboratory;TP2: Programação orientada a eventos (2/2)
17/03/2021;theory;Tratamento de exceções
23/03/2021;laboratory;TP3: Programação funcional (Haskell)
24/03/2021;theory;Programação funcional
30/03/2021;laboratory;TP4: Programação lógica (Prolog)
31/03/2021;theory;Programação lógica
06/04/2021;exam;Prova 2 (lab)
07/04/2021;exam;Prova 2
13/04/2021;exam;Prova suplementar (lab)
14/04/2021;exam;Prova suplementar
20/04/2021;exam;Prova especial (lab)
20/04/2021;exam;Prova especial
EOF;

?>
