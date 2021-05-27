// 20. Faça um programa em C que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o valor da cotação do dólar.

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