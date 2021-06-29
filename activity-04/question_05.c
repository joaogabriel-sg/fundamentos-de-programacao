// 05. Escreva uma função que receba um número inteiro positivo e retorne o fatorial deste número.

#include <stdlib.h>
#include <stdio.h>

long int getFactorialResultBasedInANumber(int number)
{
  long int factorialResult = 1;

  while (number > 0)
  {
    factorialResult *= number;
    number--;
  }

  return factorialResult;
}

int main()
{
  int number = 0;

  printf("==*== FATORIAL ==*==\n");
  printf("Número: ");
  scanf("%d", &number);

  long int factorial = getFactorialResultBasedInANumber(number);
  printf("O fatorial de %d é %ld\n", number, factorial);

  return 0;
}
