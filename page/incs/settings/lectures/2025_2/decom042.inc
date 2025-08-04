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
Projeto.pdf;01/12;Projeto para a criação de um shell script que resolva algum problema do mundo real que seja interessante e útil.
EOF;

$lecture->calendar = <<<EOF
26/08/2025;theory;Apresentação da disciplina
28/08/2025;theory;Comandos básicos
02/09/2025;theory;Processamento de texto
04/09/2025;theory;Sistemas de arquivos (1/2)
09/09/2025;theory;Sistemas de arquivos (2/2)
11/09/2025;theory;Processos (1/2)
16/09/2025;theory;Processos (2/2)
18/09/2025;theory;Entradas, saídas e redirecionamentos (1/2)
23/09/2025;theory;Entradas, saídas e redirecionamentos (2/2)
25/09/2025;theory;Expansões (1/2)
30/09/2025;theory;Expansões (1/2)
02/10/2025;exercise;Resolução de exercícios
07/10/2025;exam;Prova 1
09/10/2025;theory;Parâmetros e variáveis (1/2)
14/10/2025;theory;Parâmetros e variáveis (2/2)
16/10/2025;theory;Estruturas de fluxo condicionais (1/2)
21/10/2025;theory;Estruturas de fluxo condicionais (2/2)
23/10/2025;theory;Estruturas de repetição (1/2)
28/10/2025;theory;Estruturas de repetição (2/2)
30/10/2025;theory;Expressões regulares
04/11/2025;theory;sed
06/11/2025;theory;AWK
11/11/2025;exercise;Resolução de exercícios
13/11/2025;exam;Prova 2
18/11/2025;holiday;Reservado
20/11/2025;holiday;Feriado nacional: Dia da Consciência Negra
25/11/2025;exercise;Resolução de exercícios
27/11/2025;exam;Prova suplementar
02/12/2025;presentation;Apresentações (1/5)
04/12/2025;presentation;Apresentações (2/5)
09/12/2025;presentation;Apresentações (3/5)
11/12/2025;presentation;Apresentações (4/5)
16/12/2025;presentation;Apresentações (5/5)
18/12/2025;holiday;Reservado
23/12/2025;holiday;Recesso escolar: Natal e Ano Novo
25/12/2025;holiday;Recesso escolar: Natal e Ano Novo
30/12/2025;holiday;Recesso escolar: Natal e Ano Novo
01/01/2026;holiday;Feriado nacional: Ano Novo
06/01/2026;exercise;Resolução de exercícios
08/01/2026;exam;Prova especial
EOF;

?>
