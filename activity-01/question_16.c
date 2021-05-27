// 16. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário.

#include <stdio.h>

int main()
{
  float salary = 0, readjustmentPercentage = 0;

  printf("Enter a salary: ");
  scanf("%f", &salary);

  printf("Enter a readjustment percentage: ");
  scanf("%f", &readjustmentPercentage);

  salary += salary * (readjustmentPercentage / 100);

  printf("Your new salary R$ %.1f\n", salary);

  return 0;
}