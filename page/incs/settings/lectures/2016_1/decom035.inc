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
$lecture->ta->room = 'Prédio CCC, Sala A ou C';
$lecture->ta->schedule = <<<EOF
mon;10:00-12:20,14:50-18:20
tue;16:40-18:20
wed;14:50-18:20
thu;14:50-18:20
EOF;

$lecture->homeworks = <<<EOF
TP.pdf;;29/05;entrada.zip;Gerador;Implementar um programa que recebe dois Autômatos Finito Determinístico (AFD's), que podem ser incompletos, e gerar dois outros AFD's que representem a interseção e a união deles.
EOF;

$lecture->calendar = <<<EOF
23/02/2016;theory;Apresentação da disciplina
25/02/2016;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações
01/03/2016;theory;Conceitos preliminares: funções, conjuntos enumeráveis, definições recursivas, indução
03/03/2016;theory;Conceitos preliminares: grafos, linguagens formais, gramáticas, problemas de decisão
08/03/2016;theory;Autômatos finitos determinísticos (AFD)
10/03/2016;theory;Minimização de AFD's
15/03/2016;theory;Propriedades de AFD's
17/03/2016;theory;Autômatos finitos não determinísticos (AFN)
22/03/2016;theory;Equivalência entre AFD's e AFN's
24/03/2016;holiday;Recesso escolar: Paixão de Cristo
29/03/2016;theory;AFN estendido e AFN λ
31/03/2016;exercise;Resolução de exercícios
05/04/2016;exam;Primeira prova
07/04/2016;exercise;Correção da prova
12/04/2016;theory;LR's: Lema do bombeamento e propriedades de fechamento
14/04/2016;theory;Expressões regulares
19/04/2016;theory;Gramáticas regulares
21/04/2016;holiday;Feriado nacional: Tiradentes
26/04/2016;theory;Autômatos de pilha determinístico (APD)
28/04/2016;theory;Autômatos de pilha não determinístico (APN)
03/05/2016;theory;Gramáticas livres de contexto (GLC)
05/05/2016;theory;Manipulação de GLC's
10/05/2016;theory;Formas normais sobre GLC's
12/05/2016;exercise;Resolução de exercícios
17/05/2016;exam;Segunda prova
19/05/2016;exercise;Correção da prova
24/05/2016;theory;LLC's: Lema do bombeamento e propriedades de fechamento
26/05/2016;holiday;Feriado nacional: Corpus Christi
31/05/2016;theory;Máquinas de Turing
02/06/2016;theory;Variações de máquinas de Turing
07/06/2016;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT Universal 
09/06/2016;theory;Decidibilidade: problema da parada, redução e teorema de Rice
14/06/2016;exercise;Resolução de exercícios
16/06/2016;exam;Terceira prova
21/06/2016;exercise;Correção da prova
23/06/2016;exercise;Resolução de exercícios
28/06/2016;exam;Prova suplementar
30/06/2016;exercise;Correção da prova
05/07/2016;exam;Prova especial
EOF;

?>
