// 1. Elabore um programa que receba um número do usuário e informe se é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("==*== PAR OU ÍMPAR ==*==\n");
  printf("Digite um número: ");
  scanf("%d", &number);

  if (number % 2 == 0)
    printf("O número %d é par!\n", number);
  else
    printf("O número %d é ímpar!\n", number);

  return 0;
}