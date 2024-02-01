<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => '204, Prédio 12',
  'schedules' => <<<EOF
thu;08:50;10:30;
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
Erros nos slides valem 0,5pts (postar na lista de discussão)
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
07/03/2024;theory;Apresentação da disciplina
14/03/2024;theory;Comandos básicos
21/03/2024;theory;Processamento de texto
28/03/2024;holiday;Recesso escolar: Paixão de Cristo
04/04/2024;theory;Sistemas de arquivos
11/04/2024;theory;Processos
18/04/2024;theory;Entradas, saídas e redirecionamentos (1/2)
25/04/2024;theory;Entradas, saídas e redirecionamentos (2/2)
02/05/2024;theory;Expansões (1/2)
09/05/2024;theory;Expansões (2/2)
16/05/2024;theory;Parâmetros e variáveis
23/05/2024;theory;Estruturas de fluxo condicionais
30/05/2024;holiday;Feriado nacional: Corpus Christi
06/06/2024;theory;Estruturas de repetição
13/06/2024;theory;Expressões regulares
20/06/2024;theory;sed
27/06/2024;theory;awk
04/07/2024;exam;Prova
11/07/2024;exam;Prova especial
EOF;

?>
