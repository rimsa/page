<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '120, Prédio 1 (Principal)',
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
Erros nos slides valem 0,25pts (postar na lista de discussão até antes da terceira prova)
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
27/03/2025;theory;Apresentação da disciplina
01/04/2025;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
03/04/2025;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
08/04/2025;theory;Conceitos preliminares: definições recursivas, indução, grafos
10/04/2025;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
15/04/2025;theory;Autômatos finitos determinísticos (AFDs)
17/04/2025;holiday;Recesso escolar: Paixão de Cristo
22/04/2025;theory;Minimização de AFDs
24/04/2025;theory;Propriedades de AFDs
29/04/2025;theory;Autômatos finitos não determinísticos (AFNs)
01/05/2025;holiday;Feriado nacional: Dia do Trabalhador
06/05/2025;theory;Equivalência entre AFDs e AFNs e AFN estendido
08/05/2025;exercise;Resolução de exercícios
13/05/2025;exam;Prova 1
15/05/2025;theory;LRs: lema do bombeamento e propriedades de fechamento
20/05/2025;theory;Expressões regulares (ERs)
22/05/2025;theory;Gramáticas regulares (GRs)
27/05/2025;theory;Autômatos com pilha determinísticos (APDs)
29/05/2025;theory;Autômatos com pilha não determinísticos (APNs)
03/06/2025;theory;Gramáticas livres de contexto (GLCs), derivações, ambiguidade e manipulações
05/06/2025;exercise;Resolução de exercícios
10/06/2025;exam;Prova 2
12/06/2025;theory;Forma normal de Chomsky e Greibach
17/06/2025;theory;LLCs: lema do bombeamento e propriedades de fechamento
19/06/2025;holiday;Feriado nacional: Corpus Christi
24/06/2025;theory;Máquinas de Turing e propriedades de máquinas de Turing
26/06/2025;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
01/07/2025;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
03/07/2025;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT universal
08/07/2025;theory;Decidibilidade: problema da parada, redução de um problema a outro e teorema de Rice
10/07/2025;exercise;Resolução de exercícios
15/07/2025;exam;Prova 3
17/07/2025;exercise;Resolução de exercícios
22/07/2025;exam;Prova suplementar
24/07/2025;exercise;Resolução de exercícios
29/07/2025;exam;Prova especial
EOF;

?>
