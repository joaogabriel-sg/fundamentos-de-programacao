// 4. Determinar o maior de três números inteiros dados como entrada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numberA = 0, numberB = 0, numberC = 0;

  printf("==*== MAIOR DE TRÊS NÚMEROS ==*==\n");
  printf("Digite o número A: ");
  scanf("%d", &numberA);

  printf("Digite o número B: ");
  scanf("%d", &numberB);

  printf("Digite o número C: ");
  scanf("%d", &numberC);

  if (numberA > numberB && numberA > numberC)
    printf("O número A (%d) é o maior!\n", numberA);
  else if (numberB > numberA && numberB > numberC)
    printf("O número B (%d) é o maior!\n", numberB);
  else
    printf("O número C (%d) é o maior!\n", numberC);

  return 0;
}