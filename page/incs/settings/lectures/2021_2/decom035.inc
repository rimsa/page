<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '<a href="https://bit.ly/3ByBRHl" target="_blank">Microsoft Teams</a> (ERE: Ensino Remoto Emergencial)',
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

$lecture->homeworks = <<<EOF
TP.pdf;;07/02;;Chomsky;Implementar um programa que recebe uma gramática livre de contexto (GLC) G e a transforme em uma GLC G' equivalente na forma normal de Chomsky.
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
14/10/2021;theory;Apresentação da disciplina
19/10/2021;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções
21/10/2021;theory;Conceitos preliminares: conjuntos enumeráveis, definições recursivas, indução, grafos
26/10/2021;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
28/10/2021;theory;Autômatos finitos determinísticos (AFDs)
02/11/2021;holiday;Feriado nacional: Finados
04/11/2021;theory;Minimização de AFDs
09/11/2021;theory;Propriedades de AFDs
11/11/2021;theory;Autômatos finitos não determinísticos (AFNs)
16/11/2021;theory;Equivalência entre AFDs e AFNs, AFN estendido e AFN λ
18/11/2021;exercise;Resolução de exercícios
23/11/2021;exam;Prova 1
25/11/2021;theory;LRs: Lema do bombeamento e propriedades de fechamento
30/11/2021;theory;Expressões regulares
02/12/2021;theory;Gramáticas regulares
07/12/2021;theory;Autômatos com pilha determinísticos (APDs) e não determinísticos (APNs)
09/12/2021;theory;Gramáticas livres de contexto (GLCs), derivação, ambiguidade e manipulação
14/12/2021;theory;Formas normais sobre GLCs
16/12/2021;exercise;Resolução de exercícios
21/12/2021;exam;Prova 2
23/12/2021;holiday;Recesso escolar
28/12/2021;holiday;Recesso escolar
30/12/2021;holiday;Recesso escolar
04/01/2022;holiday;Recesso escolar
06/01/2022;theory;LLCs: Lema do bombeamento e propriedades de fechamento
11/01/2022;theory;Máquinas de Turing e propriedades
13/01/2022;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
18/01/2022;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
20/01/2022;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT Universal
25/01/2022;theory;Decidibilidade: problema da parada, redução e teorema de Rice
27/01/2022;exercise;Resolução de exercícios
01/02/2022;holiday;Semana de estudos autônomos
03/02/2022;holiday;Semana de estudos autônomos
08/02/2022;exam;Prova 3
10/02/2022;exam;Prova suplementar
15/02/2022;exam;Prova especial
EOF;

?>
