#include <stdio.h>
#include <stdlib.h>

int main()
{
  float productValue = 0;

  printf("Qual o valor do produto? R$ ");
  scanf("%f", &productValue);

  if (productValue < 20)
    productValue *= 1.45;
  else
    productValue *= 1.30;

  printf("O valor de venda será R$ %.2f\n", productValue);

  return 0;
}