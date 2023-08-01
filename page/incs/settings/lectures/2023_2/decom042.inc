<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => '203, Prédio 12',
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
03/08/2023;theory;Apresentação da disciplina
10/08/2023;theory;Comandos básicos
17/08/2023;theory;Processamento de texto
24/08/2023;theory;Sistemas de arquivos
31/08/2023;theory;Processos
07/09/2023;holiday;Feriado nacional: Independência do Brasil
14/09/2023;theory;Entradas, saídas e redirecionamentos (1/2)
21/09/2023;theory;Entradas, saídas e redirecionamentos (2/2)
28/09/2023;theory;Expansões (1/2)
05/10/2023;theory;Expansões (2/2)
12/10/2023;holiday;Feriado nacional: Nossa Senhora Aparecida
19/10/2023;theory;Parâmetros e variáveis (1/2)
26/10/2023;theory;Parâmetros e variáveis (2/2)
02/11/2023;holiday;Feriado nacional: Finados
09/11/2023;theory;Estruturas de fluxo condicionais
16/11/2023;theory;Estruturas de repetição
23/11/2023;theory;Expressões regulares
30/11/2023;theory;sed
07/12/2023;theory;awk
14/12/2023;exam;Prova
21/12/2023;exam;Prova especial
EOF;

?>
