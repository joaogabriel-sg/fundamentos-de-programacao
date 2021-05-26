#include <stdio.h>
#include <stdlib.h>

int main()
{
  int birthYear = 0, currentYear = 0;

  printf("Qual o seu ano de nascimento? ");
  scanf("%d", &birthYear);

  printf("Qual o seu ano atual? ");
  scanf("%d", &currentYear);

  if (birthYear <= currentYear)
    printf("Você possui %d ano(s).\n", (currentYear - birthYear));
  else
    printf("Desculpe mas o seu ano de nascimento é inválido.\n");

  return 0;
}