<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '407, Prédio 20',
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
Individual
Entregar na semana posterior ao conteúdo dado
EOF
, 'Projeto' => <<<EOF
Individual
EOF
, 'Extras' => <<<EOF
No máximo 5 pontos extras
Erros nos slides valem 0,25pts (postar na lista de discussão)
EOF
);

$lecture->grading = <<<EOF
exam;exams;Provas;60;+
exam;exam01;Prova 01;30;exams
exam;exam02;Prova 02;30;exams
exam;examsup;Prova suplementar;30;exams
exercise;assignments;Listas;30;+
exercise;assignment01;Lista 01;2;assignments
exercise;assignment02;Lista 02;2;assignments
exercise;assignment03;Lista 03;2;assignments
exercise;assignment04;Lista 04;2;assignments
exercise;assignment05;Lista 05;2;assignments
exercise;assignment06;Lista 06;2;assignments
exercise;assignment07;Lista 07;2;assignments
exercise;assignment08;Lista 08;2;assignments
exercise;assignment09;Lista 09;2;assignments
exercise;assignment10;Lista 10;2;assignments
exercise;assignment11;Lista 11;2;assignments
exercise;assignment12;Lista 12;2;assignments
exercise;assignment13;Lista 13;2;assignments
exercise;assignment14;Lista 14;2;assignments
exercise;assignment15;Lista 15;2;assignments
exercise;assignment16;Lista 16;2;assignments
project;project;Projeto;10;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->projects = <<<EOF
Projeto.pdf;20/01;Projeto para que os alunos tenham contato com outras linguagens de programação.
EOF;

$lecture->calendar = <<<EOF
08/10/2024;theory;Apresentação da disciplina
10/10/2024;theory;Sintaxe e semântica (1/2)
15/10/2024;theory;Sintaxe e semântica (2/2)
17/10/2024;theory;Sistemas de linguagens (1/2)
22/10/2024;theory;Sistemas de linguagens (2/2)
24/10/2024;theory;Nomes e amarrações
29/10/2024;theory;Programação funcional: SML básico (1/2)
31/10/2024;theory;Programação funcional: SML básico (2/2)
05/11/2024;theory;Tipos (1/2)
07/11/2024;theory;Tipos (2/2)
12/11/2024;theory;Polimorfismo
14/11/2024;theory;Escopo (1/2)
19/11/2024;theory;Escopo (2/2)
21/11/2024;theory;Cálculo-λ (1/2)
26/11/2024;theory;Cálculo-λ (2/2)
28/11/2024;exercise;Resolução de exercícios
03/12/2024;exam;Prova 1
05/12/2024;theory;Programação funcional: SML avançado (1/2)
10/12/2024;theory;Programação funcional: SML avançado (2/2)
12/12/2024;theory;Localização de variáveis
17/12/2024;theory;Orientação a objetos (1/2)
19/12/2024;theory;Orientação a objetos (2/2)
24/12/2024;holiday;Recesso escolar
26/12/2024;holiday;Recesso escolar
31/12/2024;holiday;Recesso escolar
02/01/2025;holiday;Recesso escolar
07/01/2025;theory;Tratamento de exceções (1/2)
09/01/2025;theory;Tratamento de exceções (2/2)
14/01/2025;theory;Parâmetros
16/01/2025;theory;Programação lógica: Prolog (1/2)
21/01/2025;theory;Programação lógica: Prolog (2/2)
23/01/2025;theory;Modelos de custo (1/2)
28/01/2025;theory;Modelos de custo (2/2)
30/01/2025;theory;Semântica formal (1/2)
04/02/2025;theory;Semântica formal (2/2)
06/02/2025;exercise;Resolução de exercícios
11/02/2025;exam;Prova 2
13/02/2025;exercise;Resolução de exercícios
18/02/2025;exam;Prova suplementar
20/02/2025;exercise;Resolução de exercícios
25/02/2025;exam;Prova especial
EOF;

?>
