// 02. Sejam a e b dois números naturais. Determinar o valor da potência a b dados a e b como entrada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A = 0, B = 0, count = 0;

  printf("==*== POTÊNCIA ==*==\n");
  printf("Valor de A: ");
  scanf("%d", &A);
  printf("Valor de B: ");
  scanf("%d", &B);

  long int powerResult = 1;

  while (count < B)
  {
    powerResult *= A;
    count++;
  }

  printf("\nRESULTADO DA POTÊNCIA: %ld\n", powerResult);

  return 0;
}