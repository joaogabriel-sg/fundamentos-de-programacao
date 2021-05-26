#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("Digite um número: ");
  scanf("%d", &number);

  if (number % 3 == 0)
    printf("É múltiplo de 3\n");
  else
    printf("Não é múltiplo de 3\n");

  return 0;
}