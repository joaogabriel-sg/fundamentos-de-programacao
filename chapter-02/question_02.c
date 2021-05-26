#include <stdio.h>
#include <stdlib.h>

int main()
{
  int firstValue = 0, secondValue = 0, sum = 0;

  printf("Digite o primeiro valor numérico: ");
  scanf("%d", &firstValue);

  printf("Digite o segundo valor numérico: ");
  scanf("%d", &secondValue);

  sum = firstValue + secondValue;

  if (sum > 20)
    printf("Soma + 8 = %d\n", (sum + 8));
  else
    printf("Soma - 5 = %d\n", (sum - 5));

  return 0;
}