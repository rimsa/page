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
Individual ou em dupla (de dois, ok?).
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
03/08/2016;theory;Apresentação da disciplina
10/08/2016;theory;Comandos básicos
17/08/2016;theory;Processamento de texto
24/08/2016;theory;Sistemas de arquivos
31/08/2016;theory;Processos
07/09/2016;holiday;Feriado nacional: Independência do Brasil
14/09/2016;theory;Entradas, saída e redirecionamentos
21/09/2016;theory;Expansões
28/09/2016;theory;Parâmetros e variáveis
05/10/2016;exam;Primeira prova
12/10/2016;holiday;Feriado nacional: Nossa Senhora Aparecida
19/10/2016;theory;Comandos condicionais e de repetição
26/10/2016;theory;Expressões regulares
02/11/2016;holiday;Feriado nacional: Finados
09/11/2016;theory;Comando: sed
16/11/2016;theory;Comando: awk
25/01/2017;exam;Segunda prova
01/02/2017;exam;Prova suplementar
08/02/2017;exam;Prova especial
EOF;

?>
