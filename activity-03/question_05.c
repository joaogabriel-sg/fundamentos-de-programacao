// 05. Desenvolva um programa que responda se um número é primo ou não. Um número é primo se for divisível apenas por ele e por um (1).

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int option = 0;

  printf("==*== PRIMO OU NÃO? ==*==\n");

  do
  {
    int number = 0;

    printf("\n==> MENU\n  [1] - Verificar um número\n  [0] - Sair\nOpção: ");
    scanf("%d", &option);

    if (option == 0)
      break;

    printf("\nNúmero: ");
    scanf("%d", &number);

    int count = 1, divisors = 0;

    while (count <= number)
    {
      if (number % count == 0)
        divisors++;
      count++;
    }

    if (divisors == 2)
      printf("O número %d é É PRIMO!\n", number);
    else
      printf("O número %d é NÃO É PRIMO!\n", number);
  } while (option != 0);

  return 0;
}