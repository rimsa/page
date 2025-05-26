<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Prédio 20, Sala 409',
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
TP.pdf;;19/06;apoio.zip;er2afd;Implementar um programa que recebe uma expressão regular e transforma ela em um autômato finito determinístico.
EOF;

$lecture->calendar = <<<EOF
27/02/2018;theory;Apresentação da disciplina
01/03/2018;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
06/03/2018;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
08/03/2018;theory;Conceitos preliminares: definições recursivas, indução, grafos
13/03/2018;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
15/03/2018;theory;Autômatos finitos determinísticos (AFDs)
20/03/2018;theory;Minimização de AFDs
22/03/2018;theory;Propriedades de AFDs
27/03/2018;theory;Autômatos finitos não determinísticos (AFNs)
29/03/2018;holiday;Recesso: Semana Santa
03/04/2018;theory;Equivalência entre AFDs e AFNs, AFN estendido e AFN λ
05/04/2018;exercise;Resolução de exercícios
10/04/2018;exam;Prova 1
12/04/2018;theory;LRs: Lema do bombeamento e propriedades de fechamento
17/04/2018;theory;Expressões regulares
19/04/2018;theory;Gramáticas regulares
24/04/2018;theory;Autômatos com pilha determinísticos (APDs)
26/04/2018;theory;Autômatos com pilha não determinísticos (APN)
01/05/2018;holiday;Feriado nacional: Dia do Trabalhador
03/05/2018;theory;Gramáticas livres de contexto (GLCs)
08/05/2018;theory;Derivação, ambiguidade e manipulação de GLCs
10/05/2018;theory;Formas normais sobre GLCs
15/05/2018;exercise;Resolução de exercícios
17/05/2018;exam;Prova 2
22/05/2018;theory;LLCs: Lema do bombeamento e propriedades de fechamento
24/05/2018;theory;Máquinas de Turing
29/05/2018;holiday;Recesso: greve dos caminhoneiros
31/05/2018;holiday;Feriado nacional: Corpus Christi
05/06/2018;theory;Propriedades de Máquinas de Turing
07/06/2018;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas e fita ilimitada em ambas as direções
12/06/2018;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
14/06/2018;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT Universal
19/06/2018;theory;Decidibilidade: problema da parada, redução e teorema de Rice
21/06/2018;exercise;Resolução de exercícios
26/06/2018;exam;Prova 3
28/06/2018;exercise;Resolução de exercícios
03/07/2018;exam;Prova suplementar
05/07/2018;exercise;Resolução de exercícios
10/07/2018;exam;Prova especial
EOF;

?>
