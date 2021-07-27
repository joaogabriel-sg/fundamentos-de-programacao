/*
07. Faça uma função que recebe como parâmetro dois vetores de tamanhos diferentes e retorna quantas vezes a subcadeia presente no vetor B está presente no vetor A. Uma subcadeia é quano um vetor está contido em outro e respeita a ordem completa no vetor maior.

Por exemplo:

Verificar se um vetor é parte de outro vetor
*** Ser parte significa estar contido e manter a ordem
A: 3 1 3 4 5 1 5 6
B: 3 4 5

O vetor B aparece 1 vez no vetor A.
*/

#include <stdio.h>
#include <stdlib.h>

int getSubchainsQuantity(int arrayA[], int lengthA, int arrayB[], int lengthB)
{
  int subchainsQuantity = 0, currentSubchainItemQuantity = 0, indexJ = 0;
  int lowestLength = lengthA < lengthB ? lengthA : lengthB;

  for (int i = 0; i < lengthA; i++)
  {
    for (int j = indexJ; j < lengthB; j++)
    {
      if (arrayA[i] == arrayB[j])
      {
        indexJ = j + 1;
        currentSubchainItemQuantity++;
        break;
      }
      else
      {
        indexJ = 0;
        currentSubchainItemQuantity = 0;
      }
    }

    if (currentSubchainItemQuantity == lowestLength)
    {
      subchainsQuantity++;
      indexJ = 0;
      currentSubchainItemQuantity = 0;
    }
  }

  return subchainsQuantity;
}

void setValuesInArray(int array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%dº valor: ", (i + 1));
    scanf("%d", &array[i]);
  }
}

int main()
{
  printf("==== SUBCADEIAS ====\n");

  int lengthA = 0;
  printf("\nTamanho do vetor A: ");
  scanf("%d", &lengthA);
  int arrayA[lengthA];
  setValuesInArray(arrayA, lengthA);

  int lengthB = 0;
  printf("\nTamanho do vetor B: ");
  scanf("%d", &lengthB);
  int arrayB[lengthB];
  setValuesInArray(arrayB, lengthB);

  int subchainsQuantity = getSubchainsQuantity(arrayA, lengthA, arrayB, lengthB);
  printf("\nRESULTADO =======================");
  printf("\nQuantidade de Subcadeias: %d\n", subchainsQuantity);
  return 0;
}
