<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '407, Prédio 20',
  'schedules' => <<<EOF
tue;10:40;12:20;
thu;10:40;12:20;
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
,	'Provas' => <<<EOF
Individual
Sem consulta
Esperar pelo menos 30 minutos antes de entregar a prova
EOF
,   'Listas' => <<<EOF
Individual
Entregar na semana posterior ao conteúdo dado
EOF
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,25pts (postar na lista de discussão)
EOF
);

$lecture->grading = <<<EOF
exam;exams;Provas;75;+
exam;exam01;Prova 01;25;exams
exam;exam02;Prova 02;25;exams
exam;exam03;Prova 03;25;exams
exam;examsup;Prova suplementar;25;exams
exercise;assignments;Listas;24;+
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
exercise;assignment12;Lista 12;2;assignments
exercise;assignment13;Lista 13;2;assignments
project;review;Resenha;1;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->calendar = <<<EOF
08/10/2024;theory;Apresentação da disciplina
10/10/2024;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
15/10/2024;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
17/10/2024;theory;Conceitos preliminares: definições recursivas, indução, grafos
22/10/2024;theory;Conceitos preliminares: linguagens formais
24/10/2024;theory;Conceitos preliminares: gramáticas, problemas de decisão
29/10/2024;theory;Autômatos finitos determinísticos (AFDs)
31/10/2024;theory;Minimização de AFDs
05/11/2024;theory;Propriedades de AFDs
07/11/2024;theory;Autômatos finitos não determinísticos (AFNs)
12/11/2024;theory;Equivalência entre AFDs e AFNs e AFN estendido
14/11/2024;exercise;Resolução de exercícios
19/11/2024;exam;Prova 1
21/11/2024;theory;LRs: lema do bombeamento e propriedades de fechamento
26/11/2024;theory;Expressões regulares (ERs)
28/11/2024;theory;Gramáticas regulares (GRs)
03/12/2024;theory;Autômatos com pilha determinísticos (APDs)
05/12/2024;theory;Autômatos com pilha determinísticos (APNs)
10/12/2024;theory;Gramáticas livres de contexto (GLCs), derivações, ambiguidade e manipulações
12/12/2024;theory;Forma normal de Chomsky
17/12/2024;exercise;Resolução de exercícios
19/12/2024;exam;Prova 2
24/12/2024;holiday;Recesso escolar
26/12/2024;holiday;Recesso escolar
31/12/2024;holiday;Recesso escolar
02/01/2025;holiday;Recesso escolar
07/01/2025;theory;Forma normal de Greibach
09/01/2025;theory;LLCs: lema do bombeamento e propriedades de fechamento
14/01/2025;theory;Máquinas de Turing
16/01/2025;theory;Propriedades de máquinas de Turing
21/01/2025;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas
23/01/2025;theory;Variações de máquinas de Turing: fita ilimitada em ambas as direções, múltiplas fitas
28/01/2025;theory;Variações de máquinas de Turing: não determinísticas
30/01/2025;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT universal
04/02/2025;theory;Decidibilidade: problema da parada, redução de um problema a outro e teorema de Rice
06/02/2025;exercise;Resolução de exercícios
11/02/2025;exam;Prova 3
13/02/2025;exercise;Resolução de exercícios
18/02/2025;exam;Prova suplementar
20/02/2025;exercise;Resolução de exercícios
25/02/2025;exam;Prova especial
EOF;

?>
