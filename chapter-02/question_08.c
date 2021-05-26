#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("Digite um número: ");
  scanf("%d", &number);

  if (number == 20)
    printf("Igual a 20.\n");
  else if (number < 20)
    printf("Menor que 20.\n");
  else
    printf("Maior que 20.\n");

  return 0;
}