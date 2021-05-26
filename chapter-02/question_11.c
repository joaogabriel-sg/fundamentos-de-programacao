#include <stdio.h>
#include <stdlib.h>

int main()
{
  int firstValue = 0, secondValue = 0, thirdValue = 0;

  printf("Digite o primeiro valor numérico: ");
  scanf("%d", &firstValue);

  printf("Digite o segundo valor numérico: ");
  scanf("%d", &secondValue);

  printf("Digite o terceiro valor numérico: ");
  scanf("%d", &thirdValue);

  if (firstValue > secondValue && firstValue > thirdValue)
    printf("O primeiro, cujo valor é %d, é o maior de todos.\n", firstValue);
  else if (secondValue > thirdValue)
    printf("O segundo, cujo valor é %d, é o maior de todos.\n", secondValue);
  else
    printf("O terceiro, cujo valor é %d, é o maior de todos.\n", thirdValue);

  return 0;
}