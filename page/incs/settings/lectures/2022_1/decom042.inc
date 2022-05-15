<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => '203, Prédio 12',
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
Individual ou em dupla (de dois, ok?).
Esperar pelo menos 30 minutos antes de entregar a prova
Acesso o material de aula e aos testes práticos são permitidos
EOF
,   'Testes' => <<<EOF
Individual
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
23/03/2022;holiday;Semana de acolhimento
30/03/2022;theory;Comandos básicos
06/04/2022;theory;Processamento de texto
13/04/2022;theory;Sistemas de arquivos (1/2)
20/04/2022;theory;Sistemas de arquivos (2/2)
27/04/2022;theory;Processos
04/05/2022;theory;Entradas, saídas e redirecionamentos
11/05/2022;theory;Expansões (1/2)
18/05/2022;theory;Expansões (2/2)
25/05/2022;theory;Parâmetros e variáveis (1/2)
01/06/2022;theory;Parâmetros e variáveis (2/2)
08/06/2022;theory;Estruturas de fluxo condicionais
15/06/2022;theory;Estruturas de repetição
22/06/2022;theory;Expressões regulares
29/06/2022;theory;sed
06/07/2022;theory;awk
13/07/2022;exam;Prova
20/07/2022;exam;Prova especial
EOF;

?>
