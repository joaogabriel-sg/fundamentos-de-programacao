// 08. Faça uma função que calcule o mdc de dois números A e B.
// *** MDC é o maior número que divide A
// Dica. Faça um laço com um contador que percorre de 1 até o menor número entre A e B.
// Para cada interação, divida A e B pelo contador. Caso o resto seja 0 nas duas divisões, guarde o contador.

#include <stdlib.h>
#include <stdio.h>

int getMdcResult(int A, int B)
{
  int count = 2, maxDivisor = 1;
  int smaller = A < B ? A : B;

  while (count <= smaller)
  {
    if (A % count == 0 && B % count == 0)
      maxDivisor = count;

    count++;
  }

  return maxDivisor;
}

int main()
{
  int A = 0, B = 0;

  printf("==*== MDC DE DOIS NÚMEROS ==*==\n");
  printf("Valor de A: ");
  scanf("%d", &A);

  printf("Valor de B: ");
  scanf("%d", &B);

  int mdc = getMdcResult(A, B);
  printf("O MDC de %d e %d é igual a %d\n", A, B, mdc);

  return 0;
}