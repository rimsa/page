<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '??? (Prédio ??))',
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
Fazer de forma individual, manuscrita e digitalizada para PDF
Fazer mais que 50% para ser considerada
Entregar na semana posterior ao conteúdo dado
EOF
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,25pts (postar na lista de discussão até antes da terceira prova)
EOF
);

$lecture->grading = <<<EOF
exam;exams;Provas;90;+
exam;exam01;Prova 01;30;exams
exam;exam02;Prova 02;30;exams
exam;exam03;Prova 03;30;exams
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
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->calendar = <<<EOF
24/02/2026;theory;Apresentação da disciplina
26/02/2026;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções
03/03/2026;theory;Conceitos preliminares: conjuntos enumeráveis
05/03/2026;theory;Conceitos preliminares: definições recursivas, indução, grafos
10/03/2026;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
12/03/2026;theory;Autômatos finitos determinísticos (AFDs)
17/03/2026;theory;Minimização de AFDs
19/03/2026;theory;Propriedades de AFDs
24/03/2026;theory;Autômatos finitos não determinísticos (AFNs)
26/03/2026;theory;Equivalência entre AFDs e AFNs
31/03/2026;theory;AFN estendido
02/04/2026;exercise;Resolução de exercícios
07/04/2026;exam;Prova 1
09/04/2026;theory;LRs: lema do bombeamento e propriedades de fechamento
14/04/2026;theory;Gramáticas regulares (GRs)
16/04/2026;theory;Expressões regulares (ERs)
21/04/2026;holiday;Feriado nacional: Tiradentes
23/04/2026;theory;Autômatos com pilha determinísticos (APDs)
28/04/2026;theory;Autômatos com pilha não determinísticos (APNs)
30/04/2026;theory;Gramáticas livres de contexto (GLCs)
05/05/2026;theory;Derivações e ambiguidade em GLCs
07/05/2026;theory;Manipulações de GLCs (1/2)
12/05/2026;theory;Manipulações de GLCs (2/2)
14/05/2026;exercise;Resolução de exercícios
19/05/2026;exam;Prova 2
21/05/2026;theory;Forma normal de Chomsky e Greibach
26/05/2026;theory;LLCs: lema do bombeamento e propriedades de fechamento
28/05/2026;theory;Máquinas de Turing
02/06/2026;theory;Propriedades de máquinas de Turing
04/06/2026;holiday;Feriado nacional: Corpus Christi
09/06/2026;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
11/06/2026;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
16/06/2026;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT universal
18/06/2026;theory;Decidibilidade: problema da parada, redução de um problema a outro e teorema de Rice
23/06/2026;exercise;Resolução de exercícios
25/06/2026;exam;Prova 3
30/06/2026;exercise;Resolução de exercícios
02/07/2026;exam;Prova suplementar
09/07/2026;exam;Prova especial
EOF;

?>
