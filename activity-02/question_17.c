/*
17. Faça um algoritmo que leia as duas notas, o total de presenças de um aluno e o número total de aulas ministradas e imprima a média final, o percentual de presença do aluno e uma mensagem dizendo se este aluno foi aprovado ou reprovado. 
Caso a média das notas seja inferior a 4, imprima REPROVADO, caso seja maior ou igual a 7 imprima APROVADO NA MÉDIA e caso esteja entre e 4 e 7 o programa irá solicitar a nota da AF e refazer o cálculo da nova média considerando a nota da AF e da média anterior. Caso essa nova média seja inferior a 5.0 imprima REPROVADO e, caso contrário, imprima APROVADO COM CONCEITO B. 
Sabe-se que a freqüência necessária é de no mínimo 75% das aulas ministradas.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int presenceTotal = 0, classTotal = 0;
  float testResult1 = 0, testResult2 = 0, frequencyPercent = 0;

  printf("==*== ALGORITMO DE MÉDIA ==*==\n");
  printf("Primeira nota: ");
  scanf("%f", &testResult1);

  printf("Segunda nota: ");
  scanf("%f", &testResult2);

  printf("Total de presenças: ");
  scanf("%d", &presenceTotal);

  printf("Total de aulas ministradas: ");
  scanf("%d", &classTotal);

  frequencyPercent = presenceTotal * 100 / classTotal;

  if (frequencyPercent < 75)
    printf("\nAluno não cumpriu com a frequência mínima de 75%%.\n");
  else
  {
    float average = (testResult1 + testResult2) / 2;

    if (average < 4)
      printf("\nSITUAÇÃO: Reprovado.\n");
    else if (average >= 7)
      printf("\nSITUAÇÃO: Aprovado na média.\n");
    else
    {
      float afTestResult = 0;

      printf("\nALUNO NA AVALIAÇÃO FINAL\n");
      printf("Nota da avaliação final: ");
      scanf("%f", &afTestResult);

      average = (average + afTestResult) / 2;

      if (average < 5)
        printf("\nSITUAÇÃO: Reprovado.\n");
      else
        printf("\nSITUAÇÃO: Aprovado com conceito B.\n");
    }

    printf("MÉDIA FINAL: %.2f\n", average);
  }

  printf("PORCENTAGEM DE PRESENÇA: %.2f%%\n", frequencyPercent);
  return 0;
}