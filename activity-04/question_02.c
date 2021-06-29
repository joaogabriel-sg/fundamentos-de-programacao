// 02. Crie uma função que receba um número e retorne se o número lido é primo (retornar 1) ou não (retornar 0).

#include <stdlib.h>
#include <stdio.h>

int verifyIfNumberIsPrimo(int number)
{
  int result = 0, count = 1, divisorQuantity = 0;

  while (count <= number)
  {
    if (number % count == 0)
      divisorQuantity++;

    if (divisorQuantity > 2)
      break;

    count++;
  }

  if (divisorQuantity == 2)
    return 1;

  return 0;
}

int main()
{
  int number = 0;

  printf("==*== É PRIMO OU NÃO ==*==\n");
  printf("Número: ");
  scanf("%d", &number);

  int result = verifyIfNumberIsPrimo(number);
  printf("Resultado: %d\n", result);

  return 0;
}
