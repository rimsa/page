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
TP.pdf;;04/12;;Máquina de Turing de Múltiplas Fitas;Implementar um programa de computador que receba uma especificação de uma Máquina de Turing (MT) determinística de múltiplas fitas e uma palavra de entrada e verifique se essa palavra pertence ou não a linguagem descrita por essa máquina.
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
01/08/2023;holiday;Semana de acolhimento
03/08/2023;theory;Apresentação da disciplina
08/08/2023;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos
10/08/2023;theory;Conceitos preliminares: relações, funções, conjuntos enumeráveis
15/08/2023;holiday;Feriado municipal: Assunção de Nossa Senhora
17/08/2023;theory;Conceitos preliminares: definições recursivas, indução, grafos
22/08/2023;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
24/08/2023;theory;Autômatos finitos determinísticos (AFD)
29/08/2023;theory;Minimização de AFD's
31/08/2023;theory;Propriedades de AFD's
05/09/2023;theory;Autômatos finitos não determinísticos (AFN)
07/09/2023;holiday;Feriado nacional: Independência do Brasil
12/09/2023;theory;Equivalência entre AFD's e AFN's, AFN estendido e AFN λ
14/09/2023;exercise;Resolução de exercícios
19/09/2023;exam;Prova 1
21/09/2023;theory;LR's: Lema do bombeamento e propriedades de fechamento
26/09/2023;theory;Expressões regulares
28/09/2023;theory;Gramáticas regulares
03/10/2023;theory;Autômatos de pilha determinístico (APD)
05/10/2023;theory;Autômatos de pilha não determinístico (APN)
10/10/2023;holiday;Recesso escolar: Nossa Senhora Aparecida
12/10/2023;holiday;Feriado nacional: Nossa Senhora Aparecida
17/10/2023;theory;Gramáticas livres de contexto (GLC)
19/10/2023;theory;Derivação, ambiguidade e manipulação de GLC’s
24/10/2023;theory;Formas normais sobre GLC's
26/10/2023;exercise;Resolução de exercícios
31/10/2023;exam;Prova 2
02/11/2023;holiday;Feriado nacional: Finados
07/11/2023;theory;LLC's: Lema do bombeamento e propriedades de fechamento
09/11/2023;theory;Máquinas de Turing
14/11/2023;theory;Propriedades de Máquinas de Turing
16/11/2023;theory;Variações de máquinas de Turing: cabeçote imóvel, múltiplas trilhas, fita ilimitada em ambas as direções
21/11/2023;theory;Variações de máquinas de Turing: múltiplas fitas, não determinística
23/11/2023;theory;Decidibilidade: tese de Church-Turing, MT's e PD's, MT Universal
28/11/2023;theory;Decidibilidade: problema da parada, redução e teorema de Rice
30/11/2023;exercise;Resolução de exercícios
05/12/2023;exam;Prova 3
07/12/2023;exercise;Resolução de exercícios
12/12/2023;exam;Prova suplementar
14/12/2023;exercise;Resolução de exercícios
19/12/2023;exam;Prova especial
EOF;

?>
