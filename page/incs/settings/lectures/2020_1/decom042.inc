<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/iyq-udfg-yon" target="_blank">iyq-udfg-yon</a> (ERE: Ensino Remoto Emergencial)',
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
12/08/2020;theory;Apresentação da disciplina
19/08/2020;theory;Comandos básicos
26/08/2020;theory;Processamento de texto
02/09/2020;theory;Sistemas de arquivos
09/09/2020;theory;Processos
16/09/2020;theory;Entradas, saídas e redirecionamentos
23/09/2020;theory;Expansões
30/09/2020;theory;Parâmetros e variáveis (1/2)
07/10/2020;theory;Parâmetros e variáveis (2/2)
14/10/2020;exam;Prova 1
21/10/2020;theory;Estruturas de fluxo condicionais
28/10/2020;theory;Estruturas de repetição
04/11/2020;theory;Expressões regulares
11/11/2020;theory;sed
18/11/2020;theory;awk
25/11/2020;exam;Prova 2
02/12/2020;exam;Prova suplementar
09/12/2020;exam;Prova especial
EOF;

?>
