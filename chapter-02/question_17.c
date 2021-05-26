#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[40];
  int age = 0;
  float value = 0;

  printf("Nome do cliente: ");
  fgets(name, 40, stdin);

  printf("Idade do cliente: ");
  scanf("%d", &age);

  if (age <= 10)
    value = 30.00;
  else if (age <= 29)
    value = 60.00;
  else if (age <= 45)
    value = 120.00;
  else if (age <= 59)
    value = 150.00;
  else if (age <= 65)
    value = 250.00;
  else
    value = 400.00;

  printf("==*== Resultado ==*==\n");
  printf("Cliente: %s", name);
  printf("Valor do plano: R$ %.2f\n", value);

  return 0;
}