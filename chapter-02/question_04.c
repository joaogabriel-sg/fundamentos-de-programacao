#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("Digite um número: ");
  scanf("%d", &number);

  if (number % 5 == 0)
    printf("É divisível por 5\n");
  else
    printf("Não é divisível por 5\n");

  return 0;
}