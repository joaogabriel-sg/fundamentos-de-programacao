#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 0;

  printf("Qual a idade do nadador? ");
  scanf("%d", &age);

  if (age >= 5 && age <= 7)
    printf("Categoria Infantil A\n");
  else if (age <= 10)
    printf("Categoria Infantil B\n");
  else if (age <= 13)
    printf("Categoria Juvenil A\n");
  else if (age <= 17)
    printf("Categoria Juvenil B\n");
  else
    printf("Categoria Sênior\n");

  return 0;
}