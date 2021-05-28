/*
15. Crie um sistema que receba a dezena da idade de uma pessoa e classifique quanto à tabela abaixo:
0               Criança
10              Adolescente
20              Jovem
30              Adulto
40              Melhor Idade
Diferente       Aposentado
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 0;

  printf("==*== CLASSIFICAÇÃO PELA IDADE ==*==\n");
  printf("Digite a dezena da sua idade (ex: 24 anos digita 20): ");
  scanf("%d", &age);

  if (age == 0)
    printf("Classificação: Criança.\n");
  else if (age == 10)
    printf("Classificação: Adolescente.\n");
  else if (age == 20)
    printf("Classificação: Jovem.\n");
  else if (age == 30)
    printf("Classificação: Adulto.\n");
  else if (age == 40)
    printf("Classificação: Melhor Idade.\n");
  else
    printf("Classificação: Aposentado.\n");

  return 0;
}