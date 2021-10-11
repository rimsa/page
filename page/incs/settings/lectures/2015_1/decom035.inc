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
Resenha do filme <i>O Jogo da Imitação</i> vale 2pts
EOF
);

$lecture->grading = <<<EOF
exam;exams;Provas;75;+
exam;exam01;Prova 01;25;exams
exam;exam02;Prova 02;25;exams
exam;exam03;Prova 03;25;exams
exam;examsup;Prova suplementar;25;exams
exercise;assignments;Listas;10;+
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
homework;homework;Trabalho;15;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->homeworks = <<<EOF
TP.pdf;;21/06;;Redutor;Implementar um programa para verificar se um autômato finito determinístico (AFD) é mínimo.
EOF;

$lecture->calendar = <<<EOF
10/03/2015;theory;Apresentação da disciplina
12/03/2015;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções, conjuntos enumeráveis
17/03/2015;theory;Conceitos preliminares: definições recursivas, indução, grafos, linguagens formais, gramáticas, problemas de decisão
19/03/2015;theory;Autômatos finitos determinísticos (AFD)
24/03/2015;theory;Minimização de AFD's
26/03/2015;theory;Propriedades de AFD's
31/03/2015;theory;Autômatos finitos não determinísticos (AFN)
02/04/2015;holiday;Recesso escolar: Paixão de Cristo
07/04/2015;theory;Equivalência entre AFD's e AFN's
09/04/2015;exercise;Resolução de exercícios
14/04/2015;exam;Primeira prova
16/04/2015;exercise;Correção da prova
21/03/2015;holiday;Feriado nacional: Tiradentes
23/04/2015;theory;LR's: Lema do bombeamento e propriedades de fechamento
28/04/2015;theory;Expressões regulares
30/04/2015;theory;Gramáticas regulares
05/05/2015;theory;Autômatos de pilha determinístico (APD)
07/05/2015;theory;Autômatos de pilha não determinístico (APN)
12/05/2015;theory;Gramáticas livres de contexto (GLC)
14/05/2015;theory;Manipulação de GLC's
19/05/2015;theory;Formas normais sobre GLC's
21/05/2015;exercise;Resolução de exercícios
26/05/2015;exam;Segunda prova
28/05/2015;exercise;Correção da prova
02/06/2015;theory;Equivalência entre GLC's e autômatos de pilha
04/06/2015;holiday;Feriado nacional: Corpus Christi
09/06/2015;theory;LLC's: Lema do bombeamento
11/06/2015;theory;LLC's: Propriedades de fechamento
16/06/2015;theory;Máquinas de Turing
18/06/2015;theory;Variações de máquinas de Turing
23/06/2015;theory;Gramáticas e máquinas de Turing
25/06/2015;theory;Decidibilidade
30/06/2015;exercise;Resolução de exercícios
02/07/2015;exam;Terceira prova
07/07/2015;exam;Prova suplementar
09/07/2015;exercise;Correção da prova
14/07/2015;exam;Prova especial
EOF;

?>
