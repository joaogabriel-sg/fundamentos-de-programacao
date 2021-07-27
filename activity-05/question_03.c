/*
03. Faça uma função que recebe, por parâmetro, 2 vetores de X e Y elementos inteiros e que calcule o vetor união dos dois primeiros. O vetor união também deve ser recebido como parâmetro.
*/

#include <stdio.h>
#include <stdlib.h>

void printUnionArray(int arrayUnion[], int lengthUnion)
{
  int i = 0;
  printf("\nUNIÃO =====================\n");
  for (i; i < lengthUnion; i++)
    printf("%d ", arrayUnion[i]);
  printf("\n");
}

int isItemExistentInUnionArray(int item, int arrayUnion[], int unionLength)
{
  int i = 0;
  for (i; i < unionLength; i++)
    if (arrayUnion[i] == item)
      return 1;

  return 0;
}

int getArrayUnionLastIndex(int arrayUnion[], int lengthUnion)
{
  int i = 0, lastIndex = 0;
  for (i; i < lengthUnion; i++)
    if (arrayUnion[i] != 0)
      lastIndex++;

  return lastIndex;
}

void insertArrayInUnionArray(int array[], int arrayLength, int arrayUnion[], int unionLength)
{
  int i = 0, unionIndex = getArrayUnionLastIndex(arrayUnion, unionLength);
  for (i; i < arrayLength; i++)
  {
    if (!isItemExistentInUnionArray(array[i], arrayUnion, unionLength))
    {
      arrayUnion[unionIndex] = array[i];
      unionIndex++;
    }
  }
}

void initializeUnion(int arrayUnion[], int lengthUnion)
{
  int i = 0;
  for (i; i < lengthUnion; i++)
    arrayUnion[i] = 0;
}

void setValuesInArray(int array[], int length)
{
  int count = 0;
  for (count; count < length; count++)
  {
    printf("%dº valor: ", (count + 1));
    scanf("%d", &array[count]);
  }
}

int main()
{
  int lengthX = 0, lengthY = 0;

  printf("==== VETOR UNIÃO ====\n");

  printf("\nQuantidade do vetor X: ");
  scanf("%d", &lengthX);
  int arrayX[lengthX];
  setValuesInArray(arrayX, lengthX);

  printf("\nQuantidade do vetor Y: ");
  scanf("%d", &lengthY);
  int arrayY[lengthY];
  setValuesInArray(arrayY, lengthY);

  int lengthUnion = lengthX + lengthY;
  int arrayUnion[lengthUnion];
  initializeUnion(arrayUnion, lengthUnion);

  insertArrayInUnionArray(arrayX, lengthX, arrayUnion, lengthUnion);
  insertArrayInUnionArray(arrayY, lengthY, arrayUnion, lengthUnion);

  printUnionArray(arrayUnion, lengthUnion);
  return 0;
}
