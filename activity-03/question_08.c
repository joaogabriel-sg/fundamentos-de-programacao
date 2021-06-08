/*
08. O máximo divisor comum, ou mdc, de dois números naturais a e b é o maior número inteiro não nulo menor que a e b e pelo qual ambos podem ser divididos (resto igual a zero). 
Determinar o mdc de dois números inteiros dados como entrada.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A = 0, B = 0;

  printf("==*== MDC ==*==\n");
  printf("Valor de A: ");
  scanf("%d", &A);
  printf("Valor de B: ");
  scanf("%d", &B);

  int greatherDivisor = 0, count = 2;

  while (count <= A && count <= B)
  {
    if (A % count == 0 && B % count == 0)
      greatherDivisor = count;

    count++;
  }

  printf("\nMDC: %d\n", greatherDivisor);
  return 0;
}