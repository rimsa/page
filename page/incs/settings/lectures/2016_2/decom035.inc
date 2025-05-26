<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => 'Prédio principal, Sala 205',
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
$lecture->ta->name = 'Daniel Craviée';
$lecture->ta->photo = 'daniel.jpg';
$lecture->ta->email = 'd...@gmail.com';
$lecture->ta->key = array('01TrahJNQRMTpaUl8QFHh-hw==', 'L--xEihiiCvENqLWGQXOlt6V_t93yEh3zYp5pnuA3Vw=');
$lecture->ta->room = 'Prédio principal, Sala 223';
$lecture->ta->schedule = <<<EOF
mon;10:40-12:20,13:30-18:20
tue;14:50-18:20
wed;13:00-16:30
EOF;

$lecture->homeworks = <<<EOF
TP.pdf;;01/11;;Verificador;Implementar um programa que recebe uma linguagem descrita através de uma Gramática Regular (GR) e verificar se palavras pertencem a essa linguagem ou não.
EOF;

$lecture->calendar = <<<EOF
02/08/2016;theory;Apresentação da disciplina
04/08/2016;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações
09/08/2016;theory;Conceitos preliminares: funções, conjuntos enumeráveis, definições recursivas, indução
11/08/2016;theory;Conceitos preliminares: grafos, linguagens formais, gramáticas, problemas de decisão
16/08/2016;theory;Autômatos finitos determinísticos (AFDs)
18/08/2016;theory;Minimização de AFDs
23/08/2016;theory;Propriedades de AFDs
25/08/2016;theory;Autômatos finitos não determinísticos (AFNs)
30/08/2016;theory;Equivalência entre AFDs e AFNs
01/09/2016;theory;AFN estendido e AFN λ
06/09/2016;exercise;Resolução de exercícios
08/09/2016;exam;Primeira prova
13/09/2016;exercise;Correção da prova
15/09/2016;theory;LRs: Lema do bombeamento e propriedades de fechamento
20/09/2016;theory;Expressões regulares
22/09/2016;theory;Gramáticas regulares
27/09/2016;theory;Autômatos com pilha determinísticos (APDs)
29/09/2016;theory;Autômatos com pilha não determinísticos (APNs)
04/10/2016;theory;Gramáticas livres de contexto (GLCs)
06/10/2016;theory;Manipulação de GLCs
11/10/2016;holiday;Recesso escolar: Nossa Senhora Aparecida
13/10/2016;theory;Formas normais sobre GLCs
18/10/2016;exercise;Resolução de exercícios
20/10/2016;exam;Segunda prova
25/10/2016;exercise;Correção da prova
27/10/2016;theory;LLCs: Lema do bombeamento e propriedades de fechamento
01/11/2016;theory;Máquinas de Turing
03/11/2016;theory;Variações de máquinas de Turing
08/11/2016;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT Universal
10/11/2016;theory;Decidibilidade: problema da parada, redução e teorema de Rice
15/11/2016;holiday;Feriado nacional: Proclamação da República
17/11/2016;exercise;Resolução de exercícios
22/11/2016;exam;Terceira prova
24/11/2016;exercise;Correção da prova
02/02/2017;exam;Prova suplementar
09/02/2017;exam;Prova especial
EOF;

?>
