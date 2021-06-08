// 06. Faça um programa para imprimir os 10 primeiros numeros primos. *** Altere seu programa para imprimir os X primeiros primos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int amount = 0;

  printf("==*== VERIFICAR X PRIMOS ==*==\n");
  printf("Quantos primos deseja ver? ");
  scanf("%d", &amount);

  if (amount == 0)
    return 0;

  int i = 1, verifier = 0;

  while (verifier < amount)
  {
    int count = 1;
    int j = 1;

    while (j < i)
    {
      if (i % j == 0)
        count++;

      if (count > 2)
        break;

      j++;
    }

    if (count == 2)
    {
      printf("O número %d É PRIMO!\n", i);
      verifier++;
    }

    i++;
  }

  return 0;
}