/*
03. Numa competição de natação, oito juízes dão notas entre 0 e 10. Das notas recebidas, a menor e a maior são descartadas, e a nota do atleta é dada pela média entre as seis notas restantes. 

Faça um programa que receba as oito notas dos juízes e apresente a nota do atleta.

Dica: 
  - Use duas variáveis para guardar a maior e a menor nota.
  - Guarde a soma das 8 notas, inclusive da maior e da menor.
  - Depois, ao final do while, subtraia da soma a maior nota, e a menor nota.
  - Calcule a média.

*** Altere seu programa para que a quantidade de juizes seja informada pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float sum = 0, greather = 0, less = 0;
  int judgeQuantity = 0, count = 0;

  printf("==*== NOTA DO ATLETA ==*==\n");

  printf("Quantidade de juízes: ");
  scanf("%d", &judgeQuantity);

  if (judgeQuantity <= 0)
  {
    printf("\n\nQuantidade de juízes inválida.\n");
    printf("SAINDO...\n");
    return 0;
  }

  printf("\n");

  for (count = 0; count < judgeQuantity; count++)
  {
    float judgeResult = 0;

    printf("Nota do juiz %d: ", (count + 1));
    scanf("%f", &judgeResult);

    sum += judgeResult;

    if (count == 0)
      less = judgeResult;

    if (judgeResult < less)
      less = judgeResult;
    else if (judgeResult > greather)
      greather = judgeResult;
  }

  sum = sum - greather - less;

  float average = sum / (judgeQuantity - 2);

  printf("\n\nNOTA DO ATLETA: %.2f\n", average);

  return 0;
}