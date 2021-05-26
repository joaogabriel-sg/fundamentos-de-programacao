#include <stdio.h>
#include <stdlib.h>

int main()
{
  int calories = 0, choose = 0;

  printf("==*== PRATO ==*==\n");
  printf("1 - Vegetariano\n");
  printf("2 - Peixe\n");
  printf("3 - Frango\n");
  printf("4 - Carne\n");
  printf("Opção: ");
  scanf("%d", &choose);

  switch (choose)
  {
  case 1:
    calories += 180;
    break;
  case 2:
    calories += 230;
    break;
  case 3:
    calories += 250;
    break;
  case 4:
    calories += 350;
    break;
  default:
    calories += 0;
    break;
  }

  printf("==*== SOBREMESA ==*==\n");
  printf("1 - Abacaxi\n");
  printf("2 - Sorvete\n");
  printf("3 - Mousse diet\n");
  printf("4 - Mousse chocolate\n");
  printf("Opção: ");
  scanf("%d", &choose);

  switch (choose)
  {
  case 1:
    calories += 75;
    break;
  case 2:
    calories += 110;
    break;
  case 3:
    calories += 170;
    break;
  case 4:
    calories += 200;
    break;
  default:
    calories += 0;
    break;
  }

  printf("==*== BEBIDA ==*==\n");
  printf("1 - Chá\n");
  printf("2 - Suco de laranja\n");
  printf("3 - Suco de melão\n");
  printf("4 - Refrigerante diet\n");
  printf("Opção: ");
  scanf("%d", &choose);

  switch (choose)
  {
  case 1:
    calories += 20;
    break;
  case 2:
    calories += 70;
    break;
  case 3:
    calories += 100;
    break;
  case 4:
    calories += 65;
    break;
  default:
    calories += 0;
    break;
  }

  printf("==*== TOTAL DE CALORIAS ==*==\n");
  printf("Você consumiu %d calorias.\n", calories);

  return 0;
}