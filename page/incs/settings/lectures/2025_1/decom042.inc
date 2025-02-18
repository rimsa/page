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
Erros nos slides valem 0,25pts (postar na lista de discussão até antes da segunda prova)
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
Projeto.pdf;30/06;Projeto para a criação de um shell script que resolva algum problema do mundo real que seja interessante e útil.
EOF;

$lecture->calendar = <<<EOF
27/03/2025;theory;Apresentação da disciplina
01/04/2025;theory;Comandos básicos
03/04/2025;theory;Processamento de texto (1/2)
08/04/2025;theory;Processamento de texto (2/2)
10/04/2025;theory;Sistemas de arquivos (1/2)
15/04/2025;theory;Sistemas de arquivos (2/2)
17/04/2025;holiday;Recesso escolar: Paixão de Cristo
22/04/2025;theory;Processos (1/2)
24/04/2025;theory;Processos (2/2)
29/04/2025;theory;Entradas, saídas e redirecionamentos (1/2)
01/05/2025;holiday;Feriado nacional: Dia do Trabalhador
06/05/2025;theory;Entradas, saídas e redirecionamentos (2/2)
08/05/2025;theory;Expansões (1/2)
13/05/2025;theory;Expansões (2/2)
15/05/2025;exercise;Resolução de exercícios
20/05/2025;theory;Parâmetros e variáveis (1/2)
22/05/2025;exam;Prova 1
27/05/2025;theory;Parâmetros e variáveis (2/2)
29/05/2025;theory;Estruturas de fluxo condicionais e de repetição (1/2)
03/06/2025;theory;Estruturas de fluxo condicionais e de repetição (2/2)
05/06/2025;theory;Expressões regulares (1/2)
10/06/2025;theory;Expressões regulares (2/2)
12/06/2025;theory;sed
17/06/2025;theory;AWK (1/2)
19/06/2025;holiday;Feriado nacional: Corpus Christi
24/06/2025;theory;AWK (2/2)
26/06/2025;exercise;Resolução de exercícios
01/07/2025;exam;Prova 2
03/07/2025;holiday;Reservado
08/07/2025;presentation;Apresentações (1/3)
10/07/2025;presentation;Apresentações (2/3)
15/07/2025;presentation;Apresentações (3/3)
17/07/2025;exam;Prova suplementar
22/07/2025;holiday;Reservado
24/07/2025;holiday;Reservado
29/07/2025;exam;Prova especial
EOF;

?>
