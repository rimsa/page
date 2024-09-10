<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => '<a href="https://bit.ly/3iQ7OUl" target="_blank">Microsoft Teams</a> (ERE: Ensino Remoto Emergencial)',
  'schedules' => <<<EOF
wed;10:40;12:20;
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
Esperar pelo menos 30 minutos antes de entregar a prova
Acesso o material de aula e testes é permitido
Soluções transcritas para a prova impressa
EOF
,   'Testes' => <<<EOF
Individual
Manuscrito (impressos não serão considerados)
Entregar na semana posterior ao conteúdo dado
EOF
,   'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0.5pts (postar na lista de discussão)
EOF
);

$lecture->grading = <<<EOF
exam;exams;Provas;40;+
exam;exam;Prova;40;exams
exam;examsup;Prova suplementar;40;exams
exercise;tests;Testes;60;+
exercise;test01;Teste 01;5;tests
exercise;test02;Teste 02;5;tests
exercise;test03;Teste 03;5;tests
exercise;test04;Teste 04;5;tests
exercise;test05;Teste 05;5;tests
exercise;test06;Teste 06;5;tests
exercise;test07;Teste 07;5;tests
exercise;test08;Teste 08;5;tests
exercise;test09;Teste 09;5;tests
exercise;test10;Teste 10;5;tests
exercise;test11;Teste 11;5;tests
exercise;test12;Teste 12;5;tests
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->calendar = <<<EOF
13/10/2021;theory;Apresentação da disciplina
20/10/2021;theory;Comandos básicos
27/10/2021;theory;Processamento de texto
03/11/2021;theory;Sistemas de arquivos
10/11/2021;theory;Processos
17/11/2021;theory;Entradas, saídas e redirecionamentos (1/2)
24/11/2021;theory;Entradas, saídas e redirecionamentos (2/2)
01/12/2021;theory;Expansões
08/12/2021;holiday;Feriado regional: Nossa Senhora da Conceição
15/12/2021;theory;Parâmetros e variáveis
22/12/2021;theory;Estruturas de fluxo condicionais
29/12/2021;holiday;Recesso escolar
05/01/2022;theory;Estruturas de repetição
12/01/2022;theory;Expressões regulares
19/01/2022;theory;sed
26/01/2022;theory;awk
02/02/2022;holiday;Semana de estudos autônomos
09/02/2022;exam;Prova
16/02/2022;exam;Prova especial
EOF;

?>
