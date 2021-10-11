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
22/02/2017;theory;Apresentação da disciplina
01/03/2017;holiday;Feriado nacional: Quarta-feira de cinzas
08/03/2017;theory;Comandos básicos
15/03/2017;theory;Processamento de texto
22/03/2017;theory;Sistemas de arquivos
29/03/2017;theory;Processos
05/04/2017;theory;Entradas, saídas e redirecionamentos
12/04/2017;theory;Expansões
19/04/2017;exercise;Resolução de exercícios
26/04/2017;exam;Prova 1
03/05/2017;theory;Parâmetros e variáveis
10/05/2017;theory;Estruturas de fluxo condicionais
17/05/2017;theory;Estruturas de repetição
24/05/2017;theory;Expressões regulares
31/05/2017;theory;sed
07/06/2017;theory;awk
14/06/2017;exercise;Resolução de exercícios
21/06/2017;exam;Prova 2
28/06/2017;exam;Prova suplementar
05/07/2017;exam;Prova especial
EOF;

?>
