<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '409, Prédio 20',
  'schedules' => <<<EOF
tue;13:00;14:50;
thu;13:00;14:50;
EOF
);

$lecture->rules = array(
	'Gerais' => <<<EOF
Todas as entregas são feitas no SIGAA em formato PDF
Cópias, de qualquer natureza, são penalizadas com nota zero
Entregas atrasadas não são consideradas
Toda a comunicação é feita exclusivamente via twitter (avisos) e lista de discussão (conteúdo)
Dúvidas da matéria somente pela lista de discussão (ignorados em outros e-mails)
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
,   'Trabalhos' => <<<EOF
Individual ou em dupla (de dois, ok?)
EOF
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,5pts (postar na lista de discussão)
Resenha manuscrita do filme <i>O Jogo da Imitação</i> vale 2pts
EOF
);

$lecture->homeworks = <<<EOF
TP.pdf;;08/12;;Máquina de Turing;Implementar um programa de computador que receba uma especificação de uma Máquina de Turing (MT) e uma palavra de entrada e verifique se essa palavra pertence ou não a linguagem descrita por essa máquina.
EOF;

$lecture->grading = <<<EOF
exam;exams;Provas;75;+
exam;exam01;Prova 01;25;exams
exam;exam02;Prova 02;25;exams
exam;exam03;Prova 03;25;exams
exam;examsup;Prova suplementar;25;exams
exercise;assignments;Listas;15;+
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
exercise;assignment13;Lista 13;1;assignments
exercise;assignment14;Lista 14;1;assignments
exercise;assignment15;Lista 15;1;assignments
homework;homework;Trabalho;10;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->calendar = <<<EOF
09/08/2022;holiday;Semana de acolhimento
11/08/2022;holiday;Semana de acolhimento
16/08/2022;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções
18/08/2022;theory;Conceitos preliminares: conjuntos enumeráveis, definições recursivas, indução, grafos
23/08/2022;theory;Conceitos preliminares: linguagens formais
25/08/2022;theory;Conceitos preliminares: gramáticas, problemas de decisão
30/08/2022;theory;Autômatos finitos determinísticos (AFD)
01/09/2022;theory;Minimização de AFD's
06/09/2022;theory;Propriedades de AFD's
08/09/2022;theory;Autômatos finitos não determinísticos (AFN)
13/09/2022;theory;Equivalência entre AFD's e AFN's, AFN estendido e AFN λ
15/09/2022;exercise;Resolução de exercícios
20/09/2022;exam;Prova 1
22/09/2022;theory;LR's: Lema do bombeamento e propriedades de fechamento
27/09/2022;theory;Expressões regulares
29/09/2022;theory;Gramáticas regulares
04/10/2022;theory;Autômatos de pilha determinístico (APD)
06/10/2022;theory;Autômatos de pilha não determinístico (APN)
11/10/2022;theory;Gramáticas livres de contexto (GLC)
13/10/2022;theory;Derivação, ambiguidade e manipulação de GLC’s
18/10/2022;theory;Formas normais sobre GLC's
20/10/2022;exercise;Resolução de exercícios
25/10/2022;theory;LLC's: Lema do bombeamento e propriedades de fechamento
27/10/2022;exam;Prova 2
01/11/2022;theory;Máquinas de Turing
03/11/2022;theory;Propriedades de Máquinas de Turing
08/11/2022;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas
10/11/2022;theory;Variações de máquinas de Turing: fita ilimitada em ambas as direções
15/11/2022;holiday;Feriado nacional: Proclamação da República
17/11/2022;theory;Variações de máquinas de Turing: múltiplas fitas
22/11/2022;theory;Variações de máquinas de Turing: não determinística
24/11/2022;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT Universal
29/11/2022;theory;Decidibilidade: problema da parada, redução e teorema de Rice
01/12/2022;exercise;Resolução de exercícios
06/12/2022;exam;Prova 3
08/12/2022;holiday;Feriado regional: Nossa Senhora da Conceição
13/12/2022;exercise;Resolução de exercícios
15/12/2022;exam;Prova suplementar
20/12/2022;exam;Prova especial
EOF;

?>
