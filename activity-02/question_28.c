/*
28. Uma empresa, para emitir a sua folha de pagamento mensal, trabalha com os seguintes dados relativos ao sistema de pagamento: valor da hora normal, valor da hora extra e o valor do acréscimo por dependente. Mantém, ainda, para cada funcionário os seguintes dados: matrícula, nome, número de horas normais trabalhadas, número de horas extras trabalhadas e número de dependentes. O cálculo do salário é feito em 3 etapas:

Etapa 1 : Cálculo do Salário Bruto
SALARIO BRUTO = Valor Total de Horas Normais + Valor Total de Horas Extras + Valor Total de Dependentes

Etapa 2 : Cálculo dos Descontos

Etapa 3 : Cálculo do Salário Líquido
SALARIO LÍQUIDO = SALARIO BRUTO – DESCONTOS
Escrever um algoritmo para calcular e mostrar a matrícula, o nome, o salário bruto, o valor total de descontos e o salário líquido de um funcionário qualquer.
*/

/* 
pedir:
  - matrícula
  - nome
  - número de horas normais trabalhadas
  - número de horas extras trabalhadas
  - número de dependentes

mostrar:
  - matrícula
  - nome
  - salário bruto
  - valor total de desconto
  - salário líquido
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float hourValue = 0, overtimeValue = 0, dependentValue = 0;

  printf("==*== DADOS DE PAGAMENTO MENSAL ==*==\n");
  printf("Valor da hora normal: R$ ");
  scanf("%f", &hourValue);

  printf("Valor da hora extra: R$ ");
  scanf("%f", &overtimeValue);

  printf("Valor de acréscimo por dependente: R$ ");
  scanf("%f", &dependentValue);

  int registration = 0, workedHours = 0, overtimeHours = 0, dependents = 0;
  char name[40];

  printf("\n==*== SALÁRIO DO FUNCIONÁRIO ==*==\n");
  printf("Número de matrícula: ");
  scanf("%d", &registration);

  printf("Nome do funcionário: ");
  scanf("\n%[^\n]s", &name);

  printf("Quantidade de horas normais trabalhadas: ");
  scanf("%d", &workedHours);

  printf("Quantidade de horas extras trabalhadas: ");
  scanf("%d", &overtimeHours);

  printf("Quantidade de dependentes: ");
  scanf("%d", &dependents);

  float salary = (workedHours * hourValue) + (overtimeHours * overtimeValue) + (dependents * dependentValue);

  float discount = 0;

  if (salary >= 100 && salary < 501)
    discount = (salary * 0.05) + 30;
  else if (salary < 1301)
    discount = (salary * 0.08) + (salary * 0.08) + 80;
  else if (salary < 2701)
    discount = (salary * 0.15) + (salary * 0.1) + 150;
  else
    discount = (salary * 0.25) + (salary * 0.12) + 320;

  float liquidSalary = salary - discount;

  printf("\n==*== RESULTADO ==*==\n");
  printf("MATRÍCULA: %d\n", registration);
  printf("NOME: %s\n", name);
  printf("SALÁRIO BRUTO: %.2f\n", salary);
  printf("DESCONTOS: %.2f\n", discount);
  printf("SALÁRIO LÍQUIDO: %.2f\n", liquidSalary);

  return 0;
}