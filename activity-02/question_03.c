// 3. Determinar o valor máximo de dois números A e B dados como entrada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numberA = 0, numberB = 0;

  printf("==*== MAIOR DE DOIS NÚMEROS ==*==\n");
  printf("Digite o número A: ");
  scanf("%d", &numberA);

  printf("Digite o número B: ");
  scanf("%d", &numberB);

  if (numberA > numberB)
    printf("O número A (%d) é o maior!\n", numberA);
  else if (numberB > numberA)
    printf("O número B (%d) é o maior!\n", numberB);
  else
    printf("Os dois número são iguais a %d.\n", numberA);

  return 0;
}