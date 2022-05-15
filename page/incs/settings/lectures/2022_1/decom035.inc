<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '413, Prédio 20',
  'schedules' => <<<EOF
tue;13:00;14:50;
thu;13:00;14:50;
EOF
);

$lecture->rules = array(
	'Gerais' => <<<EOF
Cópias, de qualquer natureza, serão penalizadas com nota zero
Entregas atrasadas não serão consideradas
Toda a comunicação será feita exclusivamente via twitter (avisos) e lista de discussão (conteúdo)
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
Erros nos slides valem 0.5pts (postar na lista de discussão)
Resenha manuscrita do filme <i>O Jogo da Imitação</i> vale 2pts
EOF
);

$lecture->homeworks = <<<EOF
TP.pdf;;11/07;;Greibach;Implementar um programa que recebe uma gramática livre de contexto (GLC) G e a transforme em uma GLC G' equivalente na forma normal de Greibach.
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
22/03/2022;holiday;Semana de acolhimento
24/03/2022;holiday;Semana de acolhimento
29/03/2022;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções, conjuntos enumeráveis
31/03/2022;theory;Conceitos preliminares: definições recursivas, indução, grafos, linguagens formais, gramáticas, problemas de decisão
05/04/2022;theory;Autômatos finitos determinísticos (AFD)
07/04/2022;theory;Minimização de AFD's
12/04/2022;theory;Propriedades de AFD's
14/04/2022;holiday;Recesso escolar: Paixão de Cristo
19/04/2022;theory;Autômatos finitos não determinísticos (AFN)
21/04/2022;holiday;Feriado nacional: Tiradentes
26/04/2022;theory;Equivalência entre AFD's e AFN's, AFN estendido e AFN λ
28/04/2022;exercise;Resolução de exercícios
03/05/2022;exam;Prova 1
05/05/2022;theory;LR's: Lema do bombeamento e propriedades de fechamento
10/05/2022;theory;Expressões regulares
12/05/2022;theory;Gramáticas regulares
17/05/2022;theory;Autômatos de pilha determinístico (APD)
19/05/2022;theory;Autômatos de pilha não determinístico (APN)
24/05/2022;theory;Gramáticas livres de contexto (GLC)
26/05/2022;theory;Derivação, ambiguidade e manipulação de GLC’s
31/05/2022;theory;Formas normais sobre GLC's
02/06/2022;exercise;Resolução de exercícios
07/06/2022;exam;Prova 2
09/06/2022;theory;LLC's: Lema do bombeamento e propriedades de fechamento
14/06/2022;theory;Máquinas de Turing e propriedades
16/06/2022;holiday;Feriado nacional: Corpus Christi
21/06/2022;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas e fita ilimitada em ambas as direções
23/06/2022;theory;Variações de máquinas de Turing: múltiplas fitas e não determinística
28/06/2022;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT Universal
30/06/2022;theory;Decidibilidade: problema da parada, redução e teorema de Rice
05/07/2022;exercise;Resolução de exercícios
07/07/2022;exam;Prova 3
12/07/2022;exercise;Resolução de exercícios
14/07/2022;exam;Prova suplementar
19/07/2022;exam;Prova especial
EOF;

?>
