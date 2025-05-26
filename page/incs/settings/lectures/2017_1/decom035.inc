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
Resenha do filme <i>O Jogo da Imitação</i> vale 2pts
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

$lecture->ta = new Settings();
$lecture->ta->name = 'Guilherme Lucas Medeiros de Miranda';
$lecture->ta->photo = 'guilherme.jpg';
$lecture->ta->email = 'g...@gmail.com';
$lecture->ta->key = array('01ph2cIFGsmtzMxOfpJFXTjg==', 'xMgMcNknyplF55n2wEvb4Rdm0-sZNeru6Jq4jDkKmg4=');
$lecture->ta->room = 'Prédio 20, Sala 203';
$lecture->ta->schedule = <<<EOF
mon;10:40-12:20
tue;08:50-10:30,14:50-17:30
thu;10:40-12:20,14:50-17:30
fri;13:00-17:40
EOF;

$lecture->homeworks = <<<EOF
TP.pdf;;18/06;;AF2ER;Implementar um programa que recebe um AFNλ e uma ordem de estados a remover e gera uma expressão regular que o denota.
EOF;

$lecture->calendar = <<<EOF
21/02/2017;theory;Apresentação da disciplina
23/02/2017;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
28/02/2017;holiday;Feriado nacional: Carnaval
02/03/2017;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
07/03/2017;theory;Conceitos preliminares: definições recursivas, indução, grafos
09/03/2017;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
14/03/2017;theory;Autômatos finitos determinísticos (AFDs)
16/03/2017;theory;Minimização de AFDs
21/03/2017;theory;Propriedades de AFDs
23/03/2017;theory;Autômatos finitos não determinísticos (AFNs)
28/03/2017;theory;Equivalência entre AFDs e AFNs
30/03/2017;theory;AFN estendido e AFN λ
04/04/2017;exercise;Correção de exercícios
06/04/2017;exam;Prova 1
11/04/2017;theory;LRs: Lema do bombeamento e propriedades de fechamento
13/04/2017;holiday;Recesso: Quinta-feira santa
18/04/2017;theory;Expressões regulares
20/04/2017;theory;Gramáticas regulares
25/04/2017;theory;Autômatos com pilha determinísticos (APDs)
27/04/2017;theory;Autômatos com pilha não determinísticos (APNs)
02/05/2017;theory;Gramáticas livres de contexto (GLCs)
04/05/2017;theory;Derivação e ambiguidade de GLCs
09/05/2017;theory;Manipulação de GLCs
11/05/2017;theory;Formas normais sobre GLCs
16/05/2017;exercise;Correção de exercícios
18/05/2017;exam;Prova 2
23/05/2017;theory;LLCs: Lema do bombeamento e propriedades de fechamento
25/05/2017;theory;Máquinas de Turing
30/05/2017;theory;Propriedades de Máquinas de Turing
01/06/2017;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas e fita ilimitada em ambas as direções
06/06/2017;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
08/06/2017;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT Universal
13/06/2017;theory;Decidibilidade: problema da parada, redução e teorema de Rice
15/06/2017;holiday;Feriado nacional: Corpus Christi
20/06/2017;exercise;Resolução de exercícios
22/06/2017;exam;Prova 3
27/06/2017;exercise;Resolução de exercícios
29/06/2017;exam;Prova suplementar
04/07/2017;exercise;Resolução de exercícios
06/07/2017;exam;Prova especial
EOF;

?>
