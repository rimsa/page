<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => 'NTIC, Sala A',
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
exam;exam01;Prova 01;20;exams
exam;exam02;Prova 02;20;exams
exam;examsup;Prova suplementar;20;exams
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
24/02/2016;theory;Apresentação da disciplina
02/03/2016;theory;Comandos básicos
09/03/2016;theory;Processamento de texto
16/03/2016;theory;Sistemas de arquivos
23/03/2016;theory;Processos
30/03/2016;theory;Entradas, saída e redirecionamentos
06/04/2016;theory;Expansões
13/04/2016;theory;Parâmetros e variáveis
20/04/2016;exercise;Resolução de exercícios
27/04/2016;exam;Primeira prova
04/05/2016;theory;Comandos condicionais
11/05/2016;theory;Comandos de repetição
18/05/2016;theory;Expressões regulares
25/05/2016;theory;Comando: sed
01/06/2016;theory;Comando: awk
08/06/2016;exercise;Resolução de exercícios
15/06/2016;exam;Segunda prova
22/06/2016;exercise;Resolução de exercícios
29/06/2016;exam;Prova suplementar
06/07/2016;exam;Prova especial
EOF;

?>
