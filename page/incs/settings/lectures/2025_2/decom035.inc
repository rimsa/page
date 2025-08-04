<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '412 (Prédio 20) e 120 (Prédio principal)',
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
26/08/2025;theory;Apresentação da disciplina
28/08/2025;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções
02/09/2025;theory;Conceitos preliminares: conjuntos enumeráveis
04/09/2025;theory;Conceitos preliminares: definições recursivas, indução, grafos
09/09/2025;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
11/09/2025;theory;Autômatos finitos determinísticos (AFDs)
16/09/2025;theory;Minimização de AFDs
18/09/2025;theory;Propriedades de AFDs
23/09/2025;theory;Autômatos finitos não determinísticos (AFNs)
25/09/2025;theory;Equivalência entre AFDs e AFNs
30/09/2025;theory;AFN estendido
02/10/2025;exercise;Resolução de exercícios
07/10/2025;exam;Prova 1
09/10/2025;theory;LRs: lema do bombeamento e propriedades de fechamento
14/10/2025;theory;Gramáticas regulares (GRs)
16/10/2025;theory;Expressões regulares (ERs)
21/10/2025;theory;Autômatos com pilha determinísticos (APDs)
23/10/2025;theory;Autômatos com pilha não determinísticos (APNs)
28/10/2025;theory;Gramáticas livres de contexto (GLCs)
30/10/2025;theory;Derivações e ambiguidade em GLCs
04/11/2025;theory;Manipulações de GLCs
06/11/2025;exercise;Resolução de exercícios
11/11/2025;exam;Prova 2
13/11/2025;theory;Forma normal de Chomsky e Greibach
18/11/2025;theory;LLCs: lema do bombeamento e propriedades de fechamento
20/11/2025;holiday;Feriado nacional: Dia da Consciência Negra
25/11/2025;theory;Máquinas de Turing
27/11/2025;theory;Propriedades de máquinas de Turing
02/12/2025;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
04/12/2025;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
09/12/2025;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT universal
11/12/2025;theory;Decidibilidade: problema da parada, redução de um problema a outro e teorema de Rice
16/12/2025;exercise;Resolução de exercícios
18/12/2025;exam;Prova 3
23/12/2025;holiday;Recesso escolar: Natal e Ano Novo
25/12/2025;holiday;Recesso escolar: Natal e Ano Novo
30/12/2025;holiday;Recesso escolar: Natal e Ano Novo
01/01/2026;holiday;Feriado nacional: Ano Novo
06/01/2026;exam;Prova suplementar
08/01/2026;exam;Prova especial
EOF;

?>
