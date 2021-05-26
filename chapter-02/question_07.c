#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("Digite um número: ");
  scanf("%d", &number);

  if (number >= 20 && number <= 50)
    printf("Está compreendido entre 20 e 50.\n");
  else
    printf("Não está compreendido entre 20 e 50.\n");

  return 0;
}