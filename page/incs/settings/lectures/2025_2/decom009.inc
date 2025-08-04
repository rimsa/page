<?php

$lecture->meetings = new Settings();
$lecture->meetings->theory = array(
  'room' => '407 (Prédio 20)',
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
exercise;assignments;Listas;14;+
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
exercise;assignment15;Lista 15;1;assignments
exercise;assignment16;Lista 16;1;assignments
project;project;Projeto;6;
extra;extras;Extras;5;
total;total;Total;100;
special;examsp;Prova especial;100;
last;last;Total;100;
EOF;

$lecture->projects = <<<EOF
Projeto.pdf;28/11;Projeto para que os alunos tenham contato com outras linguagens de programação.
EOF;

$lecture->calendar = <<<EOF
26/08/2025;theory;Apresentação da disciplina
28/08/2025;theory;Sintaxe e semântica (1/2)
02/09/2025;theory;Sintaxe e semântica (2/2)
04/09/2025;theory;Sistemas de linguagens (1/2)
09/09/2025;theory;Sistemas de linguagens (2/2)
11/09/2025;theory;Programação funcional: SML básico (1/2)
16/09/2025;theory;Programação funcional: SML básico (2/2)
18/09/2025;theory;Tipos (1/2)
23/09/2025;theory;Tipos (2/2)
25/09/2025;theory;Polimorfismo
30/09/2025;theory;Escopo
02/10/2025;theory;Programação funcional: SML avançado (1/2)
07/10/2025;theory;Programação funcional: SML avançado (2/2)
09/10/2025;theory;Cálculo-λ (1/2)
14/10/2025;theory;Cálculo-λ (2/2)
16/10/2025;exercise;Resolução de exercícios
21/10/2025;exam;Prova 1
23/10/2025;theory;Localização de variáveis
28/10/2025;theory;Orientação a objetos (1/2)
30/10/2025;theory;Orientação a objetos (2/2)
04/11/2025;theory;Tratamento de exceções (1/2)
06/11/2025;theory;Tratamento de exceções (2/2)
11/11/2025;theory;Parâmetros (1/2)
13/11/2025;theory;Parâmetros (2/2)
18/11/2025;theory;Programação lógica: Prolog (1/2)
20/11/2025;holiday;Feriado nacional: Dia da Consciência Negra
25/11/2025;theory;Programação lógica: Prolog (2/2)
27/11/2025;theory;Programação concorrente (1/2)
02/12/2025;theory;Programação concorrente (2/2)
04/12/2025;theory;Modelos de custo (1/2)
09/12/2025;theory;Modelos de custo (2/2)
11/12/2025;theory;Semântica formal
16/12/2025;exercise;Resolução de exercícios
18/12/2025;exam;Prova 2
23/12/2025;holiday;Recesso escolar: Natal e Ano Novo
25/12/2025;holiday;Recesso escolar: Natal e Ano Novo
30/12/2025;holiday;Recesso escolar: Natal e Ano Novo
01/01/2026;holiday;Feriado nacional: Ano Novo
06/01/2026;exam;Prova suplementar
08/01/2026;exam;Prova especial
EOF;

?>
