// 06. Faça uma função que recebe, por parâmetro, um vetor A de inteiros e retorna quantos números primos existem no vetor. Você deve fazer 2 funções: uma para contar os primos em um vetor, e outra que recebe um inteiro e retorna se ele é primo ou não. A primeira função deve utilizar a segunda.

#include <stdio.h>
#include <stdlib.h>

int isPrimeNumber(int number)
{
  int divisorsQuantity = 0;

  for (int i = 1; i <= number; i++)
  {
    if (number % i == 0)
      divisorsQuantity++;

    if (divisorsQuantity > 2)
      return 0;
  }

  if (divisorsQuantity == 1)
    return 0;

  return 1;
}

void countingPrimeNumbersInArray(int array[], int arrayLength)
{
  int primeNumbersQuantity = 0;

  for (int i = 0; i < arrayLength; i++)
    if (isPrimeNumber(array[i]))
      primeNumbersQuantity++;

  printf("\nQUANTIDADE DE NÚMEROS PRIMOS: %d\n", primeNumbersQuantity);
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
  printf("==== CONTAGEM DE NÚMEROS PRIMOS ====\n");

  int arrayLength = 0;
  printf("Quantidade de valores: ");
  scanf("%d", &arrayLength);

  if (arrayLength == 0)
    return 0;

  int array[arrayLength];
  setValuesInArray(array, arrayLength);
  countingPrimeNumbersInArray(array, arrayLength);

  return 0;
}