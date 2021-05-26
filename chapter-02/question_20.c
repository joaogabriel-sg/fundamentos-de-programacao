#include <stdio.h>
#include <stdlib.h>

int main()
{
  float averageBalance = 0;

  printf("Qual o saldo médio do cliente? R$ ");
  scanf("%f", &averageBalance);

  printf("==*== Resultado ==*==\n");
  printf("Saldo médio: %.2f\n", averageBalance);

  if (averageBalance <= 500)
    printf("Nenhum crédito\n");
  else if (averageBalance <= 1000)
    printf("Valor de crédito: %.2f\n", (averageBalance * 0.3));
  else if (averageBalance <= 3000)
    printf("Valor de crédito: %.2f\n", (averageBalance * 0.4));
  else
    printf("Valor de crédito: %.2f\n", (averageBalance * 0.5));

  return 0;
}