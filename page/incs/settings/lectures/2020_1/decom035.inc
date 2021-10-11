<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/mzc-tvaw-phz" target="_blank">mzc-tvaw-phz</a> (ERE: Ensino Remoto Emergencial)',
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
Manuscrito (impressos não serão considerados)
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

$lecture->homeworks = <<<EOF
TP.pdf;;09/11;;APD;Implementar um programa que recebe um APD e um conjunto de palavras e para cada uma delas indicar se é reconhecida ou não.
EOF;

$lecture->calendar = <<<EOF
11/08/2020;theory;Apresentação da disciplina
13/08/2020;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
18/08/2020;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
20/08/2020;theory;Conceitos preliminares: definições recursivas, indução, grafos
25/08/2020;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
27/08/2020;theory;Autômatos finitos determinísticos (AFD)
01/09/2020;theory;Minimização de AFD's
03/09/2020;theory;Propriedades de AFD's
08/09/2020;theory;Autômatos finitos não determinísticos (AFN)
10/09/2020;theory;Equivalência entre AFD's e AFN's
15/09/2020;theory;AFN estendido e AFN λ
17/09/2020;exercise;Resolução de exercícios
22/09/2020;exam;Prova 1
24/09/2020;theory;LR's: Lema do bombeamento e propriedades de fechamento
29/09/2020;theory;Expressões regulares
01/10/2020;theory;Gramáticas regulares
06/10/2020;theory;Autômatos de pilha determinístico (APD)
08/10/2020;theory;Autômatos de pilha não determinístico (APN)
13/10/2020;theory;Gramáticas livres de contexto (GLC)
15/10/2020;theory;Derivação, ambiguidade e manipulação de GLC’s
20/10/2020;theory;Formas normais sobre GLC's
22/10/2020;exercise;Resolução de exercícios
27/10/2020;exam;Prova 2
29/10/2020;theory;LLC's: Lema do bombeamento e propriedades de fechamento
03/11/2020;theory;Máquinas de Turing
05/11/2020;theory;Propriedades de Máquinas de Turing
10/11/2020;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas e fita ilimitada em ambas as direções
12/11/2020;theory;Variações de máquinas de Turing: múltiplas fitas e não determinística
17/11/2020;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT Universal
19/11/2020;theory;Decidibilidade: problema da parada, redução e teorema de Rice
24/11/2020;exercise;Resolução de exercícios
26/11/2020;exam;Prova 3
01/12/2020;exercise;Resolução de exercícios
03/12/2020;exam;Prova suplementar
08/12/2020;holiday;Feriado regional: Nossa Senhora da Conceição
10/12/2020;exam;Prova especial
EOF;

?>
