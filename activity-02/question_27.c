/*
27. Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule e mostre o salário a receber do funcionário de acordo com as regras a seguir:
• O valor da hora trabalhada é igual a 1⁄2 do salário mínimo;
• O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
• Para cada dependente, acrescentar R$ 32,00;
• Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%
• O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas extras;
• Calcular o valor do imposto de renda retido na fonte (IRRF) de acordo com a tabela a seguir:
  IRRF                    Salário Bruto
 Isento                Inferior a R$ 200,00
  10%               De R$ 200,00 até R$ 500,00
  20%                   Superior a R$ 500,00
• O salário líquido é igual ao salário bruto menos IRRF.
• A gratificação de acordo com a tabela a seguir:
Salário líquido                     Gratificação
Até R$ 350,00                        R$ 100,00
Superior a R$ 350,00                  R$ 50,00
• O salário a receber do funcionário é igual ao salário líquido mais a gratificação.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float minimunSalary = 0, salary = 0;
  int workedHours = 0, numberOfDependents = 0, overtimeWorked = 0;

  printf("==*== SALÁRIO ==*==\n");
  printf("Salário mínimo: ");
  scanf("%f", &minimunSalary);

  printf("Quantidade de horas trabalhadas: ");
  scanf("%d", &workedHours);

  printf("Número de dependentes do funcionário: ");
  scanf("%d", &numberOfDependents);

  printf("Quantidade de horas extras trabalhadas: ");
  scanf("%d", &overtimeWorked);

  float hourValue = minimunSalary / 2;

  float monthSalary = workedHours * hourValue;
  float dependentsValue = numberOfDependents * 32;
  float overtimeWorkedValue = overtimeWorked * (hourValue * 1.5);

  salary = monthSalary + dependentsValue + overtimeWorkedValue;

  if (salary < 200)
    salary = salary;
  else if (salary <= 500)
    salary *= 0.9;
  else
    salary *= 0.8;

  if (salary <= 350)
    salary += 100;
  else
    salary += 50;

  printf("\nSEU SALÁRIO: R$ %.2f\n", salary);

  return 0;
}