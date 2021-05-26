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

  if (firstValue < secondValue && firstValue < thirdValue)
  {
    if (secondValue < thirdValue)
      printf("%d %d %d\n", firstValue, secondValue, thirdValue);
    else
      printf("%d %d %d\n", firstValue, thirdValue, secondValue);
  }

  else if (secondValue < firstValue && secondValue < thirdValue)
  {
    if (firstValue < thirdValue)
      printf("%d %d %d\n", secondValue, firstValue, thirdValue);
    else
      printf("%d %d %d\n", secondValue, thirdValue, firstValue);
  }

  else
  {
    if (secondValue < firstValue)
      printf("%d %d %d\n", thirdValue, secondValue, firstValue);
    else
      printf("%d %d %d\n", thirdValue, firstValue, secondValue);
  }

  return 0;
}