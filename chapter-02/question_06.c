#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salary = 0, installmentAmount = 0;

  printf("Qual o seu salário? R$ ");
  scanf("%f", &salary);

  printf("Qual o valor da prestação? R$ ");
  scanf("%f", &installmentAmount);

  if (installmentAmount <= (salary * 0.3))
    printf("Empréstimo pode ser concedido.\n");
  else
    printf("Empréstimo não pode ser concedido.\n");

  return 0;
}