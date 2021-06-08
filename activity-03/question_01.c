// 01. Escreva um programa que leia um número N, inteiro maior que zero, e calcule o fatorial desse número.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;
  long int factorial = 1;

  printf("==*== FATORIAL ==*==\n");
  printf("Número: ");
  scanf("%d", &number);

  while (number > 1)
  {
    factorial *= number;
    number--;
  }

  printf("Resultado: %ld\n", factorial);

  return 0;
}