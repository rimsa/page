<?php

$lecture->meetings = new Settings();
$lecture->meetings->lab = array(
  'room' => 'Google Meet: <a href="https://meet.google.com/nwy-rrvo-ngu" target="_blank">nwy-rrvo-ngu</a> (ERE: Ensino Remoto Emergencial)',
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
06/01/2021;theory;Apresentação da disciplina
13/01/2021;theory;Comandos básicos
20/01/2021;theory;Processamento de texto
27/01/2021;theory;Sistemas de arquivos
03/02/2021;theory;Processos
10/02/2021;theory;Entradas, saídas e redirecionamentos
17/02/2021;holiday;Recesso escolar: Quarta-feira de cinzas
24/02/2021;theory;Expansões
03/03/2021;theory;Parâmetros e variáveis
10/03/2021;holiday;Semana de estudos autônomos
17/03/2021;theory;Estruturas de fluxo condicionais e de repetição
24/03/2021;theory;Expressões regulares
31/03/2021;theory;sed e awk
07/04/2021;exam;Prova
14/04/2021;exam;Prova suplementar
20/04/2021;exam;Prova especial
EOF;

?>
