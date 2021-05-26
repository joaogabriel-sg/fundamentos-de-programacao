#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 0;

  printf("Qual a sua idade? ");
  scanf("%d", &age);

  if (age > 65)
    printf("Você é maior de 65 anos.\n");
  else if (age >= 18)
    printf("Você é maior de idade.\n");
  else
    printf("Você é menor de idade.\n");

  return 0;
}