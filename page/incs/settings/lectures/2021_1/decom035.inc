<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '<a href="https://bit.ly/3rH3cD5" target="_blank">Microsoft Teams</a> (ERE: Ensino Remoto Emergencial)',
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
TP.pdf;;23/08;;GLC;Implementar um programa que recebe uma gramática livre de contexto (GLC) G e um tamanho N, e gerar todas as palavras w ∈ G, tal que |w| ≤ N.
EOF;

$lecture->calendar = <<<EOF
18/05/2021;theory;Apresentação da disciplina
20/05/2021;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
25/05/2021;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
27/05/2021;theory;Conceitos preliminares: definições recursivas, indução, grafos
01/06/2021;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
03/06/2021;holiday;Feriado nacional: Corpus Christi
08/06/2021;theory;Autômatos finitos determinísticos (AFD)
10/06/2021;theory;Minimização de AFD's
15/06/2021;theory;Propriedades de AFD's
17/06/2021;theory;Autômatos finitos não determinísticos (AFN)
22/06/2021;theory;Equivalência entre AFD's e AFN's, AFN estendido e AFN λ
24/06/2021;exercise;Resolução de exercícios
29/06/2021;exam;Prova 1
01/07/2021;theory;LR's: Lema do bombeamento e propriedades de fechamento
06/07/2021;theory;Expressões regulares
08/07/2021;theory;Gramáticas regulares
13/07/2021;theory;Autômatos de pilha determinístico (APD) e não determinístico (APN)
15/07/2021;theory;Gramáticas livres de contexto (GLC)
20/07/2021;theory;Derivação, ambiguidade e manipulação de GLC’s
22/07/2021;theory;Formas normais sobre GLC's
27/07/2021;theory;LLC's: Lema do bombeamento e propriedades de fechamento
29/07/2021;exercise;Resolução de exercícios
03/08/2021;exam;Prova 2
05/08/2021;theory;Máquinas de Turing e propriedades
10/08/2021;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas e fita ilimitada em ambas as direções
12/08/2021;theory;Variações de máquinas de Turing: múltiplas fitas e não determinística
17/08/2021;holiday;Semana de estudos autônomos
19/08/2021;holiday;Semana de estudos autônomos
24/08/2021;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT Universal
26/08/2021;theory;Decidibilidade: problema da parada, redução e teorema de Rice
31/08/2021;exercise;Resolução de exercícios
02/09/2021;exam;Prova 3
07/09/2021;holiday;Feriado nacional: Independência do Brasil
09/09/2021;exam;Prova suplementar
14/09/2021;exam;Prova especial
EOF;

?>
