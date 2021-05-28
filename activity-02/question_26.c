/*
26. Escreva um programa que lê as notas de um aluno de uma disciplina de Fundamentos (nota do projeto, média dos trabalhos das práticas, nota do teste, e nota do exame final) e calcula a sua nota final de acordo com as seguintes regras:

• A nota na disciplina será calculada por uma média ponderada da classificação obtida nas provas realizadas, com os seguintes pesos: projeto – 25%; trabalhos de casa e aulas práticas – 10%; teste – 20%; exame final – 45%.

• Para obter aprovação na disciplina, a nota do exame terá de ser superior a 7.5, a nota do projeto terá de ser superior a 9.5 e a média ponderada da disciplina terá de ser superior a 8.0.

O seu programa deve imprimir se o aluno foi aprovado ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float project = 0, homeAndClass = 0, test = 0, finalExam = 0;

  printf("==*== MÉDIA DA DISCIPLINA FUNDAMENTOS ==*==\n");
  printf("Nota do projeto: ");
  scanf("%f", &project);

  printf("Nota dos trabalhos de casa e aulas práticas: ");
  scanf("%f", &homeAndClass);

  printf("Nota do teste: ");
  scanf("%f", &test);

  printf("Nota do exame final: ");
  scanf("%f", &finalExam);

  float average = (25 * project + 10 * homeAndClass + 20 * test + 45 * finalExam) / 100;

  if (finalExam > 7.5 && project > 9.5 && average > 8)
    printf("\nALUNO APROVADO\n");
  else
    printf("\nALUNO REPROVADO\n");

  return 0;
}