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

$lecture->ta = new Settings();
$lecture->ta->name = 'Guilherme Lucas Medeiros de Miranda';
$lecture->ta->photo = 'guilherme.jpg';
$lecture->ta->email = 'g...@gmail.com';
$lecture->ta->key = array('01ph2cIFGsmtzMxOfpJFXTjg==', 'xMgMcNknyplF55n2wEvb4Rdm0-sZNeru6Jq4jDkKmg4=');
$lecture->ta->room = 'Prédio CCC, Sala A ou C';
$lecture->ta->schedule = <<<EOF
mon;10:40-12:30,14:50-16:30,16:40-19:20
tue;10:40-12:30,14:50-16:30,16:40-18:20
wed;14:50-16:30,16:40-19:20
EOF;

$lecture->homeworks = <<<EOF
TP.pdf;;22/10;cases.pdf;Verificador;Implementar um programa que recebe um AFNλ e um conjunto de palavras e para cada uma delas indicar se é reconhecida ou não.
EOF;

$lecture->calendar = <<<EOF
01/08/2017;theory;Apresentação da disciplina
03/08/2017;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
08/08/2017;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
10/08/2017;theory;Conceitos preliminares: definições recursivas, indução, grafos
15/08/2017;holiday;Feriado municipal: Assunção de Nossa Senhora
17/08/2017;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
22/08/2017;theory;Autômatos finitos determinísticos (AFDs)
24/08/2017;theory;Minimização de AFDs
29/08/2017;theory;Propriedades de AFDs
31/08/2017;theory;Autômatos finitos não determinísticos (AFNs)
05/09/2017;theory;Equivalência entre AFDs e AFNs, AFN estendido e AFN λ
07/09/2017;holiday;Feriado nacional: Independência do Brasil
12/09/2017;exercise;Correção de exercícios
14/09/2017;exam;Prova 1
19/09/2017;theory;LRs: Lema do bombeamento e propriedades de fechamento
21/09/2017;theory;Expressões regulares
26/09/2017;theory;Gramáticas regulares
28/09/2017;theory;Autômatos com pilha determinísticos (APDs)
03/10/2017;theory;Autômatos com pilha não determinísticos (APNs)
05/10/2017;theory;Gramáticas livres de contexto (GLCs)
10/10/2017;theory;Derivação, ambiguidade e manipulação de GLCs
12/10/2017;holiday;Feriado nacional: Nossa Senhora Aparecida
17/10/2017;theory;Formas normais sobre GLCs
19/10/2017;theory;LLCs: Lema do bombeamento e propriedades de fechamento
24/10/2017;theory;Máquinas de Turing
26/10/2017;exercise;Correção de exercícios
31/10/2017;exam;Prova 2
02/11/2017;holiday;Feriado nacional: Finados
07/11/2017;theory;Propriedades de Máquinas de Turing
09/11/2017;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas e fita ilimitada em ambas as direções
14/11/2017;theory;Variações de máquinas de Turing: múltiplas fitas e não determinísticas
16/11/2017;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT Universal
21/11/2017;theory;Decidibilidade: problema da parada, redução e teorema de Rice
23/11/2017;exercise;Resolução de exercícios
28/11/2017;exercise;Resolução de exercícios
30/11/2017;exam;Prova 3
05/12/2017;exercise;Resolução de exercícios
07/12/2017;exam;Prova suplementar
12/12/2017;exam;Prova especial
EOF;

?>
