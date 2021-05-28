/*
18. Desenvolver um algoritmo para calcular a conta de água para a CAGECE. O custo da água varia de acordo com o tipo de consumidor (residencial, comercial ou industrial). O cálculo obedece às seguintes regras:

Residencial: R$5,00 de taxa mais R$0,05 por m3 gastos;

Comercial: R$500,00 para os primeiros 80 m3 gastos mais R$ 0,03 por m3 gasto excedendo os 80 m3);

Industrial: R$800,00 para os primeiros 100 m3 gastos mais R$ 0,04 por m3 gasto excedendo os 100 m3).

O algoritmo deverá ler a conta do cliente, o tipo de consumidor e o consumo de água por metros cubos. Como resultado apresente a conta do cliente e o valor a ser pago pelo mesmo (em real).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int clientAccount = 0, accountType = 0;
  float waterConsumption = 0, accountPrice = 0;

  printf("==*== CONTA DE ÁGUA ==*==\n");
  printf("Número da conta do cliente: ");
  scanf("%d", &clientAccount);

  printf("Tipo da conta\n");
  printf("1 - Residencial\n");
  printf("2 - Comercial\n");
  printf("3 - Industrial\n");
  printf("Opção: ");
  scanf("%d", &accountType);

  printf("Consumo em metro cúbicos: ");
  scanf("%f", &waterConsumption);

  switch (accountType)
  {
  case 1:
    accountPrice = 5 + waterConsumption * 0.05;
    break;
  case 2:
    accountPrice = 500;
    if (waterConsumption > 80)
    {
      waterConsumption -= 80;
      accountPrice += (waterConsumption * 0.03);
    }
    break;
  case 3:
    accountPrice = 800;
    if (waterConsumption > 100)
    {
      waterConsumption -= 100;
      accountPrice += (waterConsumption * 0.04);
    }
  }

  printf("\nCONTA DO CLIENTE: %d\n", clientAccount);
  printf("VALOR DA CONTA: R$ %.2f\n", accountPrice);

  return 0;
}