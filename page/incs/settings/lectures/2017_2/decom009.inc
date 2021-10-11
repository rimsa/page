<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Prédio Principal, Sala 118',
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
tp1/TP1.pdf;;16/10;tp1/code.zip;MiniPerl;O objetivo desse trabalho é desenvolver um interpretador para uma linguagem de programação fictícia baseada em Perl: MiniPerl. Ela possui tipos explícitos para os três tipos de variáveis: escalares, listas e dicionário.
tp2/TP2.pdf;;24/11;tp2/support.zip;Ludo;O objetivo desse trabalho é desenvolver o jogo Ludo em um ambiente orientado a eventos usando Qt com C++.
tp3/TP3.pdf;;27/11;;Haskell;O objetivo desse trabalho é desenvolver 15 programas em Haskell.
tp4/TP4.pdf;;04/12;;Prolog;O objetivo desse trabalho é desenvolver 15 programas em Prolog.
EOF;

$lecture->seminars = <<<EOF
seminars.pdf;14/11;Seminários sobre linguagens de programação para que os alunos tenham contato com informações, motivações, características de diversas linguagens.
EOF;

$lecture->calendar = <<<EOF
01/08/2017;laboratory;Apresentação da disciplina (lab)
02/08/2017;theory;Apresentação da disciplina
08/08/2017;laboratory;TP1: Interpretador (1/6)
09/08/2017;theory;Sintaxe e semântica
15/08/2017;holiday;Feriado municipal: Assunção de Nossa Senhora
16/08/2017;theory;Sistemas de linguagens
22/08/2017;laboratory;TP1: Interpretador (2/6)
23/08/2017;theory;Nomes, amarrações e escopo
29/08/2017;laboratory;TP1: Interpretador (3/6)
30/08/2017;theory;Tipos de dados (1/2)
05/09/2017;laboratory;TP1: Interpretador (4/6)
06/09/2017;theory;Tipos de dados (2/2)
12/09/2017;laboratory;TP1: Interpretador (5/6)
13/09/2017;theory;Verificação de tipos
19/09/2017;laboratory;TP1: Interpretador (6/6)
20/09/2017;theory;Subprogramas
26/09/2017;laboratory;Seminários (1/2)
27/09/2017;exercise;Resolução de exercícios
03/10/2017;exam;Prova 1 (lab)
04/10/2017;exam;Prova 1
10/10/2017;laboratory;TP2: Programação orientada a eventos (1/5)
11/10/2017;theory;Programação orientada a objetos
17/10/2017;laboratory;TP2: Programação orientada a eventos (2/5)
18/10/2017;theory;Tratamento de exceções
24/10/2017;laboratory;TP2: Programação orientada a eventos (3/5)
25/10/2017;theory;Programação concorrente
31/10/2017;laboratory;TP2: Programação orientada a eventos (4/5)
01/11/2017;theory;Programação funcional (Haskell)
07/11/2017;laboratory;TP2: Programação orientada a eventos (5/5)
08/11/2017;theory;Programação lógica (Prolog)
14/11/2017;laboratory;Seminários (2/2)
15/11/2017;holiday;Feriado nacional: Proclamação da República
21/11/2017;laboratory;TP3 e TP4: Programação funcional e lógica (Haskell e Prolog)
22/11/2017;exercise;Resolução de exercícios
28/11/2017;exam;Prova 2 (lab)
29/11/2017;exam;Prova 2
05/12/2017;exam;Prova suplementar (lab)
06/12/2017;exam;Prova suplementar
12/12/2017;exam;Prova especial (lab)
13/12/2017;exam;Prova especial
EOF;

?>
