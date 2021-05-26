#include <stdio.h>
#include <stdlib.h>

int main()
{
  char carType;
  float routeInKm = 0, consumption = 0;

  printf("==*== CONSUMO ESTIMADO DE COMBUSTÍVEL ==*==\n");
  printf("Digite o percurso em quilômetros(km): ");
  scanf("%f", &routeInKm);

  printf("Digite o tipo do carro(A, B, C): ");
  scanf(" %c", &carType);

  if (carType == 'A' || carType == 'a')
  {
    consumption = routeInKm / 12.0;
    printf("Consumo estimado: %.2f L.\n", consumption);
  }
  else if (carType == 'B' || carType == 'b')
  {
    consumption = routeInKm / 9.0;
    printf("Consumo estimado: %.2f L.\n", consumption);
  }
  else if (carType == 'C' || carType == 'c')
  {
    consumption = routeInKm / 8.0;
    printf("Consumo estimado: %.2f L.\n", consumption);
  }
  else
  {
    printf("Tipo de carro inválido!\n");
  }

  return 0;
}