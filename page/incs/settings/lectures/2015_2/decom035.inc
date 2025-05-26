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
TP.pdf;;25/10;case.zip;Transformador;Implementar um programa para transformar um autômato finito não determinístico (AFN) em um autômato finito determinístico (AFD) completo.
EOF;

$lecture->calendar = <<<EOF
11/08/2015;theory;Apresentação da disciplina
13/08/2015;holiday;Recesso escolar: Workshop da graduação
18/08/2015;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções, conjuntos enumeráveis
20/08/2015;theory;Conceitos preliminares: definições recursivas, indução, grafos, linguagens formais, gramáticas, problemas de decisão
25/08/2015;theory;Autômatos finitos determinísticos (AFDs)
27/08/2015;theory;Minimização e propriedades de AFDs
01/09/2015;theory;Autômatos finitos não determinísticos (AFNs)
03/09/2015;theory;Equivalência entre AFDs e AFNs
08/09/2015;theory;LRs: Lema do bombeamento e propriedades de fechamento
10/09/2015;theory;Expressões regulares
15/09/2015;exercise;Resolução de exercícios
17/09/2015;exam;Primeira prova
22/09/2015;exercise;Correção da prova
24/09/2015;theory;Gramáticas regulares
29/09/2015;theory;Autômatos com pilha determinísticos (APDs)
01/10/2015;theory;Autômatos com pilha não determinísticos (APNs)
06/10/2015;theory;Gramáticas livres de contexto (GLCs)
08/10/2015;theory;Manipulação de GLCs
13/10/2015;holiday;Recesso escolar: funcionário público
15/10/2015;theory;Formas normais sobre GLCs (1/2)
20/10/2015;theory;Formas normais sobre GLCs (2/2)
22/10/2015;theory;LLCs: Lema do bombeamento
27/10/2015;exercise;Resolução de exercícios
29/10/2015;exam;Segunda prova
03/11/2015;exercise;Correção da prova
05/11/2015;theory;LLCs: Propriedades de fechamento
10/11/2015;theory;Máquinas de Turing
12/11/2015;theory;Variações de máquinas de Turing
17/11/2015;theory;Gramáticas e máquinas de Turing
19/11/2015;theory;Decidibilidade
24/11/2015;exercise;Resolução de exercícios
26/11/2015;exam;Terceira prova
01/12/2015;exercise;Correção da prova
03/12/2015;exam;Prova suplementar
08/12/2015;holiday;Feriado regional: Nossa Senhora da Conceição
10/12/2015;exercise;Correção da prova
15/12/2015;exam;Prova especial
EOF;

?>
