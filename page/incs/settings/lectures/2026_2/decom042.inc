<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => '204 (Prédio 12)',
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
Fazer de forma individual, manuscrita e digitalizada para PDF
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
Projeto.pdf;10/11;Projeto para a criação de um shell script que resolva algum problema do mundo real que seja interessante e útil.
EOF;

$lecture->calendar = <<<EOF
06/08/2026;theory;Apresentação da disciplina
11/08/2026;theory;Comandos básicos
13/08/2026;theory;Processamento de texto (1/2)
18/08/2026;theory;Processamento de texto (2/2)
20/08/2026;theory;Sistemas de arquivos (1/2)
25/08/2026;theory;Sistemas de arquivos (2/2)
27/08/2026;theory;Processos (1/2)
01/09/2026;theory;Processos (2/2)
03/09/2026;theory;Entradas, saídas e redirecionamentos (1/2)
08/09/2026;theory;Entradas, saídas e redirecionamentos (2/2)
10/09/2026;theory;Expansões (1/2)
15/09/2026;theory;Expansões (2/2)
17/09/2026;exercise;Resolução de exercícios
22/09/2026;exam;Prova 1
24/09/2026;theory;Parâmetros e variáveis (1/2)
29/09/2026;theory;Parâmetros e variáveis (2/2)
01/10/2026;theory;Estruturas de fluxo condicionais (1/2)
06/10/2026;theory;Estruturas de fluxo condicionais (2/2)
08/10/2026;theory;Estruturas de repetição
13/10/2026;theory;Expressões regulares (1/2)
15/10/2026;theory;Expressões regulares (2/2)
20/10/2026;theory;sed (1/2)
22/10/2026;theory;sed (2/2)
27/10/2026;theory;AWK (1/2)
29/10/2026;theory;AWK (2/2)
03/11/2026;exercise;Resolução de exercícios
05/11/2026;exam;Prova 2
10/11/2026;exercise;Resolução de exercícios
12/11/2026;exam;Prova suplementar
17/11/2026;presentation;Apresentações (1/6)
19/11/2026;presentation;Apresentações (2/6)
24/11/2026;presentation;Apresentações (3/6)
26/11/2026;presentation;Apresentações (4/6)
01/12/2026;presentation;Apresentações (5/6)
03/12/2026;presentation;Apresentações (6/6)
08/12/2026;holiday;Feriado regional: Nossa Senhora da Conceição
10/12/2026;exam;Prova especial
EOF;

?>
