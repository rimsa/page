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
TP.pdf;;16/12;;Simulador;Implementar um simulador para autômatos finitos determinísticos que exibe se aceita ou não para cada uma das palavras de uma lista de entrada.
EOF;

$lecture->calendar = <<<EOF
18/09/2014;theory;Apresentação da disciplina
23/09/2014;theory;Conceitos preliminares: representações, provas de teoremas, conjuntos, relações, funções
25/09/2014;theory;Conceitos preliminares:conjuntos enumeráveis, definições recursivas, indução, grafos
30/09/2014;theory;Conceitos preliminares: linguagens formais, gramáticas, problemas de decisão
02/10/2014;theory;Autômatos finitos determinísticos (AFDs)
07/10/2014;theory;Minimização de AFDs
09/10/2014;theory;Propriedades de AFDs
14/10/2014;theory;Autômatos finitos não determinísticos (AFNs)
16/10/2014;theory;Equivalência entre AFDs e AFNs
21/10/2014;exercise;Resolução de exercícios
23/10/2014;exam;Primeira prova
28/10/2014;exercise;Correção da prova
30/10/2014;theory;LRs: Lema do bombeamento
04/11/2014;theory;LRs: Propriedades de fechamento
06/11/2014;theory;Expressões regulares
11/11/2014;theory;Gramáticas regulares
13/11/2014;theory;Autômatos com pilha determinísticos (APDs)
18/11/2014;theory;Autômatos com pilha não determinísticos (APNs)
20/11/2014;theory;Gramáticas livres de contexto (GLCs)
25/11/2014;theory;Manipulação de GLCs
27/11/2014;theory;Formas normais sobre GLCs
02/12/2014;exercise;Resolução de exercícios
04/12/2014;exam;Segunda prova
09/12/2014;exercise;Correção da prova
11/12/2014;theory;Equivalência entre GLCs e autômatos com pilha
16/12/2014;theory;LLCs: Lema do bombeamento
18/12/2014;theory;LLCs: Propriedades de fechamento
23/12/2014;holiday;Recesso escolar: Natal e Ano Novo
25/12/2014;holiday;Recesso escolar: Natal e Ano Novo
30/12/2014;holiday;Recesso escolar: Natal e Ano Novo
01/01/2015;holiday;Feriado nacional: Ano Novo
06/01/2015;holiday;Férias escolares
08/01/2015;holiday;Férias escolares
13/01/2015;theory;Máquinas de Turing
15/01/2015;theory;Variações de máquinas de Turing
20/01/2015;theory;Gramáticas e máquinas de Turing
22/01/2015;theory;Decidibilidade
27/01/2015;exercise;Resolução de exercícios
29/01/2015;exam;Terceira prova
03/02/2015;exercise;Correção da prova
05/02/2015;exam;Prova suplementar
10/02/2015;exercise;Correção da prova
12/02/2015;exam;Prova especial
EOF;

?>
