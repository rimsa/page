<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => '??? (Prédio ??)',
  'schedules' => <<<EOF
tue;08:50;10:30;
thu;08:50;10:30;
EOF
);

$lecture->rules = array(
	'Gerais' => <<<EOF
Todas as entregas são feitas no SIGAA em formato PDF
Cópias, de qualquer natureza, são penalizadas com nota zero
Entregas atrasadas não são consideradas
A comunicação é feita via SIGAA (avisos) e lista de discussão (conteúdo)
Dúvidas da matéria somente pela lista de discussão (ignoradas em outros e-mails)
EOF
,	'Projeto' => <<<EOF
Individual
Apresentação
Presença
EOF
,   'Listas' => <<<EOF
Individual
Fazer mais que 50% para ser considerada
Entregar na semana posterior ao conteúdo dado
EOF
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,25pts (postar na lista de discussão até antes da segunda prova)
EOF
);

$lecture->grading = <<<EOF
exam;exams;Provas;60;+
exam;exam01;Prova 01;30;exams
exam;exam02;Prova 02;30;exams
exam;examsup;Prova suplementar;30;exams
exercise;assignments;Listas;10;+
exercise;assignment01;Lista 01;1;assignments
exercise;assignment02;Lista 02;1;assignments
exercise;assignment03;Lista 03;1;assignments
exercise;assignment04;Lista 04;1;assignments
exercise;assignment05;Lista 05;1;assignments
exercise;assignment06;Lista 06;1;assignments
exercise;assignment07;Lista 07;1;assignments
exercise;assignment08;Lista 08;1;assignments
exercise;assignment09;Lista 09;1;assignments
exercise;assignment10;Lista 10;1;assignments
exercise;assignment11;Lista 11;1;assignments
exercise;assignment12;Lista 12;1;assignments
project;project;Projeto;30;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->projects = <<<EOF
Projeto.pdf;24/06;Projeto para a criação de um shell script que resolva algum problema do mundo real que seja interessante e útil.
EOF;

$lecture->calendar = <<<EOF
24/02/2026;theory;Apresentação da disciplina
26/02/2026;theory;Comandos básicos
03/03/2026;theory;Processamento de texto
05/03/2026;theory;Sistemas de arquivos (1/2)
10/03/2026;theory;Sistemas de arquivos (2/2)
12/03/2026;theory;Processos (1/2)
17/03/2026;theory;Processos (2/2)
19/03/2026;theory;Entradas, saídas e redirecionamentos (1/2)
24/03/2026;theory;Entradas, saídas e redirecionamentos (2/2)
26/03/2026;theory;Expansões (1/2)
31/03/2026;theory;Expansões (2/2)
02/04/2026;exercise;Resolução de exercícios
07/04/2026;exam;Prova 1
09/04/2026;theory;Parâmetros e variáveis (1/2)
14/04/2026;theory;Parâmetros e variáveis (2/2)
16/04/2026;theory;Estruturas de fluxo condicionais (1/2)
21/04/2026;holiday;Feriado nacional: Tiradentes
23/04/2026;theory;Estruturas de fluxo condicionais (2/2)
28/04/2026;theory;Estruturas de repetição
30/04/2026;theory;Expressões regulares (1/2)
05/05/2026;theory;Expressões regulares (2/2)
07/05/2026;theory;sed (1/2)
12/05/2026;theory;sed (2/2)
14/05/2026;theory;AWK (1/2)
19/05/2026;theory;AWK (2/2)
21/05/2026;exercise;Resolução de exercícios
26/05/2026;exam;Prova 2
28/05/2026;exercise;Resolução de exercícios
02/06/2026;exam;Prova suplementar
04/06/2026;holiday;Feriado nacional: Corpus Christi
09/06/2026;presentation;Apresentações (1/7)
11/06/2026;presentation;Apresentações (2/7)
16/06/2026;presentation;Apresentações (3/7)
18/06/2026;presentation;Apresentações (4/7)
23/06/2026;presentation;Apresentações (5/7)
25/06/2026;presentation;Apresentações (6/7)
30/06/2026;presentation;Apresentações (7/7)
02/07/2026;exercise;Resolução de exercícios
09/07/2026;exam;Prova especial
EOF;

?>
