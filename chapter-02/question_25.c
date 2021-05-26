#include <stdio.h>
#include <stdlib.h>

int main()
{
  float polutionIndex = 0;

  printf("==*== NÍVEL DE POLUIÇÃO ==*==\n");
  printf("Digite o índice de poluição: ");
  scanf("%f", &polutionIndex);

  if (polutionIndex >= 0.5)
    printf("As indústrias dos grupos 1, 2 e 3 receberão a intimação.\n");
  else if (polutionIndex >= 0.4)
    printf("As indústrias dos grupos 1 e 2 receberão a intimação.\n");
  else if (polutionIndex >= 0.3)
    printf("A indústria do grupo 1 receberá a intimação.\n");
  else
    printf("Índice de poluição aceitável.\n");

  return 0;
}