<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/nwy-rrvo-ngu" target="_blank">nwy-rrvo-ngu</a> (ERE: Ensino Remoto Emergencial)',
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
TP.pdf;;29/03;;APN;Implementar um programa que recebe um APN e uma palavra de entrada e indicar se essa palavra é reconhecida ou não.
EOF;

$lecture->calendar = <<<EOF
07/01/2021;theory;Apresentação da disciplina
12/01/2021;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções
14/01/2021;theory;Conceitos preliminares: conjuntos enumeráveis, definições recursivas, indução, grafos
19/01/2021;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
21/01/2021;theory;Autômatos finitos determinísticos (AFD)
26/01/2021;theory;Minimização de AFD's e propriedades de AFD's
28/01/2021;theory;Propriedades de AFD's
02/02/2021;theory;Autômatos finitos não determinísticos (AFN)
04/02/2021;theory;Equivalência entre AFD's e AFN's, AFN estendido e AFN λ
09/02/2021;exercise;Resolução de exercícios
11/02/2021;exam;Prova 1
16/02/2021;holiday;Feriado nacional: Carnaval
18/02/2021;theory;LR's: Lema do bombeamento e propriedades de fechamento
23/02/2021;theory;Expressões regulares e Gramáticas regulares
25/02/2021;theory;Autômatos de pilha determinístico (APD) e não determinístico (APN)
02/03/2021;theory;Gramáticas livres de contexto (GLC), derivação, ambiguidade e manipulação
04/03/2021;theory;Formas normais sobre GLC's
09/03/2021;holiday;Semana de estudos autônomos
11/03/2021;holiday;Semana de estudos autônomos
16/03/2021;exercise;Resolução de exercícios
18/03/2021;exam;Prova 2
23/03/2021;theory;LLC's: Lema do bombeamento e propriedades de fechamento
25/03/2021;theory;Máquinas de Turing e Propriedades de MTs
30/03/2021;theory;Variações de máquinas de Turing
01/04/2021;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT Universal, problema da parada, redução e teorema de Rice
06/04/2021;exercise;Resolução de exercícios
08/04/2021;exam;Prova 3
13/04/2021;exam;Prova suplementar
20/04/2021;exam;Prova especial
EOF;

?>
