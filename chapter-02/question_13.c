#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[40];
  float firstGrade = 0, secondGrade = 0, average = 0;

  printf("Digite o nome do aluno: ");
  fgets(name, 40, stdin);

  printf("Digite a primeira nota: ");
  scanf("%f", &firstGrade);

  printf("Digite a segunda nota: ");
  scanf("%f", &secondGrade);

  average = (firstGrade + secondGrade) / 2;

  printf("==*==*== Resultado ==*==*==\n");
  printf("Aluno: %s", name);
  printf("Primeira nota: %.1f\n", firstGrade);
  printf("Segunda nota: %.1f\n", secondGrade);
  printf("Média: %.1f\n", average);

  if (average >= 7)
    printf("APROVADO\n");
  else if (average < 3)
    printf("REPROVADO\n");
  else
    printf("EM PROVA FINAL\n");

  return 0;
}