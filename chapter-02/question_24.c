#include <stdio.h>
#include <stdlib.h>

int main()
{
  int licensePlate = 0, lastNumber = 0;

  printf("==*== DUT ==*==\n");
  printf("Digite somente os números da placa do carro: ");
  scanf("%d", &licensePlate);

  lastNumber = licensePlate % 10;
  printf("Mês: %d\n", lastNumber);

  return 0;
}