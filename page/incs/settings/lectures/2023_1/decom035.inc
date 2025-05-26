<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '102, Prédio 20',
  'schedules' => <<<EOF
tue;13:00;14:50;
thu;13:00;14:50;
EOF
);

$lecture->rules = array(
	'Gerais' => <<<EOF
Todas as entregas são feitas no SIGAA em formato PDF
Cópias, de qualquer natureza, são penalizadas com nota zero
Entregas atrasadas não são consideradas
Toda a comunicação é feita exclusivamente via twitter (avisos) e lista de discussão (conteúdo)
Dúvidas da matéria somente pela lista de discussão (ignorados em outros e-mails)
EOF
,	'Provas' => <<<EOF
Individual
Sem consulta
Esperar pelo menos 30 minutos antes de entregar a prova
EOF
,   'Listas' => <<<EOF
Individual
Entregar na semana posterior ao conteúdo dado
EOF
,   'Trabalhos' => <<<EOF
Individual ou em dupla (de dois, ok?)
EOF
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,5pts (postar na lista de discussão)
Resenha do filme <i>O Jogo da Imitação</i> vale 2pts
EOF
);

$lecture->homeworks = <<<EOF
TP.pdf;;27/06;;Máquina de Turing de Múltiplas Trilhas;Implementar um programa de computador que receba uma especificação de uma Máquina de Turing (MT) determinística de múltiplas trilhas e uma palavra de entrada e verifique se essa palavra pertence ou não a linguagem descrita por essa máquina.
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
02/03/2023;theory;Apresentação da disciplina
07/03/2023;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
09/03/2023;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
14/03/2023;theory;Conceitos preliminares: definições recursivas, indução, grafos
16/03/2023;theory;Conceitos preliminares: linguagens formais
21/03/2023;theory;Conceitos preliminares: gramáticas, problemas de decisão
23/03/2023;theory;Autômatos finitos determinísticos (AFDs)
28/03/2023;theory;Minimização de AFDs
30/03/2023;theory;Propriedades de AFDs
04/04/2023;theory;Autômatos finitos não determinísticos (AFNs)
06/04/2023;holiday;Recesso: Semana Santa
11/04/2023;theory;Equivalência entre AFDs e AFNs, AFN estendido e AFN λ
13/04/2023;exercise;Resolução de exercícios
18/04/2023;exam;Prova 1
20/04/2023;theory;LRs: Lema do bombeamento e propriedades de fechamento
25/04/2023;theory;Expressões regulares
27/04/2023;theory;Gramáticas regulares
02/05/2023;theory;Autômatos com pilha determinísticos (APDs)
04/05/2023;theory;Autômatos com pilha não determinísticos (APNs)
09/05/2023;theory;Gramáticas livres de contexto (GLCs)
11/05/2023;theory;Derivação, ambiguidade e manipulação de GLCs
16/05/2023;theory;Formas normais sobre GLCs
18/05/2023;exercise;Resolução de exercícios
23/05/2023;exam;Prova 2
25/05/2023;theory;LLCs: Lema do bombeamento e propriedades de fechamento
30/05/2023;theory;Máquinas de Turing
01/06/2023;theory;Propriedades de Máquinas de Turing
06/06/2023;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
08/06/2023;holiday;Feriado nacional: Corpus Christi
13/06/2023;theory;Variações de máquinas de Turing: múltiplas fitas, não determinísticas
15/06/2023;theory;Decidibilidade: tese de Church-Turing, MTs e PDs, MT Universal
20/06/2023;theory;Decidibilidade: problema da parada, redução e teorema de Rice
22/06/2023;exercise;Resolução de exercícios
27/06/2023;exam;Prova 3
29/06/2023;exercise;Resolução de exercícios
04/07/2023;exam;Prova suplementar
06/07/2023;exercise;Resolução de exercícios
11/07/2023;exam;Prova especial
EOF;

?>
