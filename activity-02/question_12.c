// 12. Dois alunos fizeram três provas. Dadas estas notas como entrada, determinar qual dos dois alunos apresentou melhor rendimento.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float student1Test1 = 0, student1Test2 = 0, student1Test3 = 0;
  float student2Test1 = 0, student2Test2 = 0, student2Test3 = 0;
  float averageStudent1 = 0, averageStudent2 = 0;

  printf("==*== MELHOR RENDIMENTO ESTUDANTIL ==*==\n");
  printf("ESTUDANTE 1 - Nota 1: ");
  scanf("%f", &student1Test1);
  printf("ESTUDANTE 1 - Nota 2: ");
  scanf("%f", &student1Test2);
  printf("ESTUDANTE 1 - Nota 3: ");
  scanf("%f", &student1Test3);

  averageStudent1 = (student1Test1 + student1Test2 + student1Test3) / 3;

  printf("\nESTUDANTE 2 - Nota 1: ");
  scanf("%f", &student2Test1);
  printf("ESTUDANTE 2 - Nota 2: ");
  scanf("%f", &student2Test2);
  printf("ESTUDANTE 2 - Nota 3: ");
  scanf("%f", &student2Test3);

  averageStudent2 = (student2Test1 + student2Test2 + student2Test3) / 3;

  if (averageStudent1 > averageStudent2)
    printf("\nO estudante 1 obteve um melhor desempenho com média %.2f.\n", averageStudent1);
  else if (averageStudent2 > averageStudent1)
    printf("\nO estudante 2 obteve um melhor desempenho com média %.2f.\n", averageStudent2);
  else
    printf("\nAmbos os estudantes tiveram o mesmo desempenho.\n");

  return 0;
}