<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '407 (Prédio 20)',
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
06/08/2026;theory;Apresentação da disciplina
11/08/2026;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
13/08/2026;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
18/08/2026;theory;Conceitos preliminares: definições recursivas, indução, grafos
20/08/2026;theory;Conceitos preliminares: linguagens formais
25/08/2026;theory;Conceitos preliminares: gramáticas, problemas de decisão
27/08/2026;theory;Autômatos finitos determinísticos (AFDs)
01/09/2026;theory;Minimização e propriedades de AFDs
03/09/2026;theory;Autômatos finitos não determinísticos (AFNs)
08/09/2026;theory;Equivalência entre AFDs e AFNs e AFN estendido
10/09/2026;exercise;Resolução de exercícios
15/09/2026;exam;Prova 1
17/09/2026;theory;LRs: lema do bombeamento e propriedades de fechamento
22/09/2026;theory;Gramáticas regulares (GRs)
24/09/2026;theory;Expressões regulares (ERs)
29/09/2026;theory;Autômatos com pilha determinísticos (APDs)
01/10/2026;theory;Autômatos com pilha não determinísticos (APNs)
06/10/2026;theory;Gramáticas livres de contexto (GLCs), derivações e ambiguidade
08/10/2026;theory;Manipulações de GLCs
13/10/2026;exercise;Resolução de exercícios
15/10/2026;exam;Prova 2
20/10/2026;theory;Forma normal de Chomsky
22/10/2026;theory;Forma normal de Greibach
27/10/2026;theory;LLCs: lema do bombeamento e propriedades de fechamento
29/10/2026;theory;Máquinas de Turing e propriedades de máquinas de Turing
03/11/2026;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
05/11/2026;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
10/11/2026;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT universal
12/11/2026;theory;Decidibilidade: problema da parada, redução de um problema a outro e teorema de Rice
17/11/2026;exercise;Resolução de exercícios
19/11/2026;exam;Prova 3
24/11/2026;exercise;Resolução de exercícios
26/11/2026;exam;Prova suplementar
01/12/2026;holiday;Reservada
03/12/2026;holiday;Reservada
08/12/2026;holiday;Feriado regional: Nossa Senhora da Conceição
10/12/2026;exam;Prova especial
EOF;

?>
