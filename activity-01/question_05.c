// 5. Faça um programa em C que leia dois números reais e os imprima.

#include <stdio.h>

int main()
{
  float firstNumber = 0, secondNumber = 0;

  printf("Enter the first number: ");
  scanf("%f", &firstNumber);

  printf("Enter the second number: ");
  scanf("%f", &secondNumber);

  printf("First number: %.1f\nSecond number: %.1f\n", firstNumber, secondNumber);
  return 0;
}
