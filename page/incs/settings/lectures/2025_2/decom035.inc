<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '???, Prédio ???',
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
exam;exams;Provas;90;+
exam;exam01;Prova 01;30;exams
exam;exam02;Prova 02;30;exams
exam;exam03;Prova 03;30;exams
exam;examsup;Prova suplementar;30;exams
exercise;assignments;Listas;10;+
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
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->calendar = <<<EOF
26/08/2025;theory;Apresentação da disciplina
28/08/2025;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
02/09/2025;theory;Conceitos preliminares: relações, funções
04/09/2025;theory;Conceitos preliminares: conjuntos enumeráveis
09/09/2025;theory;Conceitos preliminares: definições recursivas, indução, grafos
11/09/2025;theory;Conceitos preliminares: linguagens formais
16/09/2025;theory;Conceitos preliminares: gramáticas, problemas de decisão
18/09/2025;theory;Autômatos finitos determinísticos (AFDs)
23/09/2025;theory;Minimização de AFDs
25/09/2025;theory;Propriedades de AFDs
30/09/2025;theory;Autômatos finitos não determinísticos (AFNs)
02/10/2025;theory;Equivalência entre AFDs e AFNs
07/10/2025;theory;AFN estendido
09/10/2025;exercise;Resolução de exercícios
14/10/2025;exam;Prova 1
16/10/2025;theory;LRs: lema do bombeamento e propriedades de fechamento
21/10/2025;theory;Gramáticas regulares (GRs)
23/10/2025;theory;Expressões regulares (ERs)
28/10/2025;holiday;Recesso escolar: Dia do Servidor Público
30/10/2025;theory;Autômatos com pilha determinísticos (APDs)
04/11/2025;theory;Autômatos com pilha não determinísticos (APNs)
06/11/2025;theory;Gramáticas livres de contexto (GLCs), derivações
11/11/2025;theory;Ambiguidade e manipulações de GLCs
13/11/2025;exercise;Resolução de exercícios
18/11/2025;exam;Prova 2
20/11/2025;holiday;Feriado nacional: Dia da Consciência Negra
25/11/2025;theory;Forma normal de Chomsky e Greibach
27/11/2025;theory;LLCs: lema do bombeamento e propriedades de fechamento
02/12/2025;theory;Máquinas de Turing e propriedades de máquinas de Turing
04/12/2025;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
09/12/2025;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
11/12/2025;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT universal
16/12/2025;theory;Decidibilidade: problema da parada, redução de um problema a outro e teorema de Rice
18/12/2025;exercise;Resolução de exercícios
23/12/2025;exam;Prova 3
25/12/2025;holiday;Recesso escolar: Natal e Ano Novo
30/12/2025;holiday;Recesso escolar: Natal e Ano Novo
01/01/2026;holiday;Feriado nacional: Ano Novo
06/01/2026;exercise;Resolução de exercícios
08/01/2026;exam;Prova suplementar
13/01/2026;exam;Prova especial
EOF;

?>
