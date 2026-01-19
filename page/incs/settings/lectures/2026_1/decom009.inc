<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '??? (Prédio ??)',
  'schedules' => <<<EOF
tue;13:00;14:40;
thu;13:00;14:40;
EOF
);

$lecture->rules = array(
	'Gerais' => <<<EOF
Todas as entregas são feitas no SIGAA em formato PDF
Cópias, de qualquer natureza, são penalizadas com nota zero
Entregas atrasadas não são consideradas
A comunicação é feita via SIGAA (avisos) e lista de discussão (conteúdo)
Dúvidas da matéria somente pela lista de discussão (ignoradas em outros e-mails)
EOF
,	'Provas' => <<<EOF
Individual
Sem consulta
Esperar pelo menos 30 minutos antes de entregar a prova
EOF
, 'Listas' => <<<EOF
Fazer de forma individual, manuscrita e digitalizada para PDF
Fazer mais que 50% para ser considerada
Entregar na semana posterior ao conteúdo dado
EOF
, 'Projeto' => <<<EOF
Individual
EOF
, 'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,25pts (postar na lista de discussão até antes da segunda prova)
EOF
);

$lecture->grading = <<<EOF
exam;exams;Provas;80;+
exam;exam01;Prova 01;40;exams
exam;exam02;Prova 02;40;exams
exam;examsup;Prova suplementar;40;exams
exercise;assignments;Listas;12;+
exercise;assignment01;Lista 01;1;assignments
exercise;assignment02;Lista 02;1;assignments
exercise;assignment03;Lista 03;1;assignments
exercise;assignment04;Lista 04;1;assignments
exercise;assignment05;Lista 05;1;assignments
exercise;assignment06;Lista 06;1;assignments
exercise;assignment07;Lista 07;1;assignments
exercise;assignment08;Lista 08;1;assignments
exercise;assignment09;Lista 09;1;assignments
exercise;assignment10;Lista 10;1;assignments
exercise;assignment11;Lista 11;1;assignments
exercise;assignment12;Lista 12;1;assignments
exercise;assignment13;Lista 13;1;assignments
exercise;assignment14;Lista 14;1;assignments
project;project;Projeto;8;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->projects = <<<EOF
Projeto.pdf;09/06;Projeto para que os alunos tenham contato com outras linguagens de programação.
EOF;

$lecture->calendar = <<<EOF
24/02/2026;theory;Apresentação da disciplina
26/02/2026;theory;Sintaxe e semântica (1/2)
03/03/2026;theory;Sintaxe e semântica (2/2)
05/03/2026;theory;Sistemas de linguagens (1/2)
10/03/2026;theory;Sistemas de linguagens (2/2)
12/03/2026;theory;Programação funcional: SML básico (1/2)
17/03/2026;theory;Programação funcional: SML básico (2/2)
19/03/2026;theory;Tipos (1/3)
24/03/2026;theory;Tipos (2/3)
26/03/2026;theory;Tipos (3/3)
31/03/2026;theory;Polimorfismo (1/2)
02/04/2026;theory;Polimorfismo (2/2)
07/04/2026;theory;Escopo (1/2)
09/04/2026;theory;Escopo (2/2)
14/04/2026;theory;Programação funcional: SML avançado (1/2)
16/04/2026;theory;Programação funcional: SML avançado (2/2)
21/04/2026;holiday;Feriado nacional: Tiradentes
23/04/2026;exercise;Resolução de exercícios
28/04/2026;exam;Prova 1
30/04/2026;theory;Cálculo-λ (1/2)
05/05/2026;theory;Cálculo-λ (2/2)
07/05/2026;theory;Localização de variáveis (1/2)
12/05/2026;theory;Localização de variáveis (2/2)
14/05/2026;theory;Orientação a objetos (1/2)
19/05/2026;theory;Orientação a objetos (2/2)
21/05/2026;theory;Tratamento de exceções (1/2)
26/05/2026;theory;Tratamento de exceções (2/2)
28/05/2026;theory;Parâmetros (1/2)
02/06/2026;theory;Parâmetros (2/2)
04/06/2026;holiday;Feriado nacional: Corpus Christi
09/06/2026;theory;Programação lógica: Prolog (1/2)
11/06/2026;theory;Programação lógica: Prolog (2/2)
16/06/2026;theory;Modelos de custo (1/2)
18/06/2026;theory;Modelos de custo (2/2)
23/06/2026;exercise;Resolução de exercícios
25/06/2026;exam;Prova 2
30/06/2026;exercise;Resolução de exercícios
02/07/2026;exam;Prova suplementar
09/07/2026;exam;Prova especial
EOF;

?>
