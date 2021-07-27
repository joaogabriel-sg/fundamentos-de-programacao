// 04. Faça uma função que recebe um vetor de X inteiros, por parâmetro, e retorna a quantidade de valores pares no vetor.

#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int length)
{
  int i = 0, evenQuantity = 0;
  printf("\nNÚMEROS PARES ====\n");
  for (i; i < length; i++)
    if (array[i] != 0 && array[i] % 2 == 0)
      evenQuantity++;
  printf("Quantidade: %d\n", evenQuantity);
}

void setEvenValuesInArray(int array[], int length)
{
  int i = 0;
  for (i; i < length; i++)
  {
    int value = 0;
    printf("%dº valor: ", (i + 1));
    scanf("%d", &array[i]);
  }
}

void initializeArray(int array[], int length)
{
  int i = 0;
  for (i; i < length; i++)
    array[i] = 0;
}

int main()
{
  printf("==== VALORES PARES NO VETOR ====\n");

  int lengthX = 0;
  printf("Quantidade de valores: ");
  scanf("%d", &lengthX);

  int arrayX[lengthX];

  initializeArray(arrayX, lengthX);
  setEvenValuesInArray(arrayX, lengthX);
  printArray(arrayX, lengthX);

  return 0;
}