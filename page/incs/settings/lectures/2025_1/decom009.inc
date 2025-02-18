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
Erros nos slides valem 0,25pts (postar na lista de discussão até antes da segunda prova)
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
Projeto.pdf;23/06;Projeto para que os alunos tenham contato com outras linguagens de programação.
EOF;

$lecture->calendar = <<<EOF
27/03/2025;theory;Apresentação da disciplina
01/04/2025;theory;Sintaxe e semântica (1/2)
03/04/2025;theory;Sintaxe e semântica (2/2)
08/04/2025;theory;Sistemas de linguagens (1/2)
10/04/2025;theory;Sistemas de linguagens (2/2)
15/04/2025;theory;Programação funcional: SML básico (1/2)
17/04/2025;holiday;Recesso escolar: Paixão de Cristo
22/04/2025;theory;Programação funcional: SML básico (2/2)
24/04/2025;theory;Tipos
29/04/2025;theory;Polimorfismo
01/05/2025;holiday;Feriado nacional: Dia do Trabalhador
06/05/2025;theory;Escopo
08/05/2025;theory;Programação funcional: SML avançado (1/2)
13/05/2025;theory;Programação funcional: SML avançado (2/2)
15/05/2025;theory;Cálculo-λ (1/2)
20/05/2025;theory;Cálculo-λ (2/2)
22/05/2025;exercise;Resolução de exercícios
27/05/2025;exam;Prova 1
29/05/2025;theory;Localização de variáveis
03/06/2025;theory;Orientação a objetos
05/06/2025;theory;Tratamento de exceções (1/2)
10/06/2025;theory;Tratamento de exceções (2/2)
12/06/2025;theory;Parâmetros
17/06/2025;theory;Programação lógica: Prolog
19/06/2025;holiday;Feriado nacional: Corpus Christi
24/06/2025;theory;Programação concorrente (1/2)
26/06/2025;theory;Programação concorrente (2/2)
01/07/2025;theory;Modelos de custo
03/07/2025;theory;Semântica formal (1/2)
08/07/2025;theory;Semântica formal (2/2)
10/07/2025;exercise;Resolução de exercícios
15/07/2025;exam;Prova 2
17/07/2025;exercise;Resolução de exercícios
22/07/2025;exam;Prova suplementar
24/07/2025;exercise;Resolução de exercícios
29/07/2025;exam;Prova especial
EOF;

?>
