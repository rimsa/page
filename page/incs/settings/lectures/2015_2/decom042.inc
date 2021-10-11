<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => 'NTIC, Sala A',
  'schedules' => <<<EOF
mon;10:40;12:20;
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
10/08/2015;theory;Apresentação da disciplina
17/08/2015;theory;Comandos básicos
24/08/2015;theory;Sistemas de arquivos
31/08/2015;theory;Processamento de texto
07/09/2015;holiday;Feriado nacional: Independência do Brasil
14/09/2015;theory;Processos
21/09/2015;theory;Entradas, saída e redirecionamentos
28/09/2015;theory;Expansões
05/10/2015;exam;Primeira prova
12/10/2015;holiday;Feriado nacional: Nossa Senhora Aparecida
19/10/2015;theory;Parâmetros e variáveis
26/10/2015;theory;Comandos condicionais e de repetição
02/11/2015;holiday;Feriado nacional: Finados
09/11/2015;theory;Expressões regulares
16/11/2015;theory;Comando: sed
23/11/2015;theory;Comando: awk
30/11/2015;exam;Segunda prova
07/12/2015;exam;Prova suplementar
14/12/2015;exam;Prova especial
EOF;

?>
