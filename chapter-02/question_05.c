#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("Digite um número: ");
  scanf("%d", &number);

  if (number % 3 == 0 && number % 7 == 0)
    printf("É divisível por 3 e por 7\n");
  else
    printf("Não é divisível por 3 e por 7\n");

  return 0;
}