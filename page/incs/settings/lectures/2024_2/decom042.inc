<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => '204, Prédio 12',
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
,   'Testes' => <<<EOF
Individual
Entregar na semana posterior ao conteúdo dado
EOF
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,25pts (postar na lista de discussão)
EOF
);

$lecture->grading = <<<EOF
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
project;project;Projeto;20;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->projects = <<<EOF
Projeto.pdf;07/01;Projeto para a criação de um shell script que resolva algum problema do mundo real que seja interessante e útil.
EOF;

$lecture->calendar = <<<EOF
08/10/2024;theory;Apresentação da disciplina
10/10/2024;theory;Comandos básicos
15/10/2024;theory;Processamento de texto
17/10/2024;theory;Sistemas de arquivos (1/2)
22/10/2024;theory;Sistemas de arquivos (2/2)
24/10/2024;theory;Processos (1/2)
29/10/2024;theory;Processos (2/2)
31/10/2024;theory;Entradas, saídas e redirecionamentos (1/2)
05/11/2024;theory;Entradas, saídas e redirecionamentos (2/2)
07/11/2024;theory;Expansões (1/2)
12/11/2024;theory;Expansões (2/2)
14/11/2024;exercise;Resolução de exercícios
19/11/2024;exam;Prova 1
21/11/2024;theory;Parâmetros e variáveis (1/2)
26/11/2024;theory;Parâmetros e variáveis (2/2)
28/11/2024;theory;Estruturas de fluxo condicionais e de repetição (1/2)
03/12/2024;theory;Estruturas de fluxo condicionais e de repetição (2/2)
05/12/2024;theory;Expressões regulares
10/12/2024;theory;sed
12/12/2024;theory;AWK
17/12/2024;exercise;Resolução de exercícios
19/12/2024;exam;Prova 2
24/12/2024;holiday;Recesso escolar
26/12/2024;holiday;Recesso escolar
31/12/2024;holiday;Recesso escolar
02/01/2025;holiday;Recesso escolar
07/01/2025;exercise;Resolução de exercícios
09/01/2025;exam;Prova suplementar
14/01/2025;presentation;Apresentações (1/10)
16/01/2025;presentation;Apresentações (2/10)
21/01/2025;presentation;Apresentações (3/10)
23/01/2025;presentation;Apresentações (4/10)
28/01/2025;presentation;Apresentações (5/10)
30/01/2025;presentation;Apresentações (6/10)
04/02/2025;presentation;Apresentações (7/10)
06/02/2025;presentation;Apresentações (8/10)
11/02/2025;presentation;Apresentações (9/10)
13/02/2025;presentation;Apresentações (10/10)
18/02/2025;holiday;Reservado
20/02/2025;exercise;Resolução de exercícios
25/02/2025;exam;Prova especial
EOF;

?>
