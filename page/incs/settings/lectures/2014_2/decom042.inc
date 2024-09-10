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
No máximo 8 pontos extras
EOF
);

$lecture->grading = <<<EOF
exercise;tests;Testes;100;+
exercise;test01;Teste 01;12;tests
exercise;test02;Teste 02;12;tests
exercise;test03;Teste 03;12;tests
exercise;test04;Teste 04;12;tests
exercise;test05;Teste 05;24;tests
exercise;test06;Teste 06;12;tests
exercise;test07;Teste 07;12;tests
exercise;test08;Teste 08;12;tests
extra;extras;Extras;8;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->calendar = <<<EOF
22/09/2014;theory;Apresentação da disciplina
29/09/2014;theory;Comandos básicos
06/10/2014;theory;Sistemas de arquivos
13/10/2014;theory;Processamento de texto
20/10/2014;theory;Processos
27/10/2014;holiday;Recesso escolar: Funcionário público
03/11/2014;theory;Entradas, saída e redirecionamentos
10/11/2014;theory;Expansões
17/11/2014;theory;Parâmetros e variáveis
24/11/2014;theory;Casamento de padrões
01/12/2014;theory;Comandos condicionais
08/12/2014;holiday;Feriado regional: Nossa Senhora da Conceição
15/12/2014;theory;Comandos de repetição
22/12/2014;holiday;Recesso escolar: Natal e Ano Novo
29/12/2014;holiday;Recesso escolar: Natal e Ano Novo
05/01/2015;holiday;Férias escolares
12/01/2015;theory;Expressões regulares
19/01/2015;theory;Comando: sed
26/01/2015;theory;Comando: awk
02/02/2015;exam;Prova suplementar
09/02/2015;exam;Prova especial
EOF;

?>
