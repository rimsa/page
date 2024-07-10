<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '414, Prédio 20',
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
TP.pdf;;02/09;;Máquina de Turing Não-Determinística;Implementar um programa de computador que receba uma especificação de uma Máquina de Turing (MT) não-determinística e uma palavra de entrada e verifique se essa palavra pertence ou não a linguagem descrita por essa máquina.
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
05/03/2024;theory;Apresentação da disciplina
07/03/2024;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
12/03/2024;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
14/03/2024;theory;Conceitos preliminares: definições recursivas, indução, grafos
19/03/2024;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
21/03/2024;theory;Autômatos finitos determinísticos (AFD)
26/03/2024;theory;Minimização de AFD's
28/03/2024;holiday;Recesso escolar: Paixão de Cristo
02/04/2024;theory;Propriedades de AFD's
04/04/2024;theory;Autômatos finitos não determinísticos (AFN), equivalência entre AFD's e AFN's, AFN estendido e AFN λ.
09/04/2024;exercise;Resolução de exercícios
11/04/2024;exam;Prova 1
04/07/2024;exercise;Revisão
09/07/2024;theory;LR's: Lema do bombeamento e propriedades de fechamento
11/07/2024;theory;Gramáticas regulares
16/07/2024;theory;Expressões regulares
18/07/2024;theory;Autômatos de pilha determinístico (APD) e não determinístico (APN)
23/07/2024;theory;Gramáticas livres de contexto (GLC)
25/07/2024;theory;Derivação, ambiguidade e manipulação de GLC’s
30/07/2024;theory;Forma normal de Chomsky e Greibach
01/08/2024;theory;Máquinas de Turing e propriedades
06/08/2024;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções, múltiplas fitas, não determinística
08/08/2024;exercise;Resolução de exercícios
13/08/2024;exam;Prova 2
15/08/2024;holiday;Feriado municipal: Assunção de Nossa Senhora
20/08/2024;theory;LLC's: Lema do bombeamento e propriedades de fechamento
22/08/2024;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT universal
27/08/2024;theory;Decidibilidade: Problema da parada, redução e teorema de Rice
29/08/2024;exercise;Resolução de exercícios
03/09/2024;exam;Prova 3
05/09/2024;exercise;Resolução de exercícios
10/09/2024;exam;Prova suplementar
12/09/2024;exercise;Resolução de exercícios
17/09/2024;exam;Prova especial
EOF;

?>
