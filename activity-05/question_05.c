// 05. Faça uma função que recebe, por parâmetro, um vetor A de reais e ordena o vetor em ordem decrescente.

#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int arrayLength)
{
  printf("\nVETOR EM ORDEM DECRESCENTE ============\n");
  for (int i = 0; i < arrayLength; i++)
    printf("%d ", array[i]);
  printf("\n");
}

void orderArray(int array[], int arrayLength)
{
  int swapped = 0;
  do
  {
    swapped = 0;
    for (int i = 0; i < arrayLength - 1; i++)
    {
      if (array[i] < array[i + 1])
      {
        int aux = array[i];
        array[i] = array[i + 1];
        array[i + 1] = aux;
        swapped = 1;
      }
    }
  } while (swapped == 1);
}

void setValuesInArray(int array[], int arrayLength)
{
  for (int i = 0; i < arrayLength; i++)
  {
    int value = 0;
    printf("%dº valor: ", (i + 1));
    scanf("%d", &value);
    array[i] = value;
  }
}

int main()
{
  printf("==== ORDENAÇÃO DECRESCENTE DE VETOR ====\n");

  int arrayLength = 0;
  printf("Quantidade de valores: ");
  scanf("%d", &arrayLength);

  if (arrayLength == 0)
    return 0;

  int array[arrayLength];

  setValuesInArray(array, arrayLength);
  orderArray(array, arrayLength);
  printArray(array, arrayLength);

  return 0;
}
