#include <stdio.h>

int main()
{
  float brl = 0, usd = 0, usdExchangeRate = 0, result = 0;

  printf("Enter the value in USD: ");
  scanf("%f", &usd);

  printf("Enter the USD exchange rate: ");
  scanf("%f", &usdExchangeRate);

  brl = usd * usdExchangeRate;

  printf("BRL: R$%.1f\n", brl);
  return 0;
}