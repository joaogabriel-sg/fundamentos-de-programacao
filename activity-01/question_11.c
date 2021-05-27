// 11. Faça um programa em C que leia dois números reais e calcule as quatro operações básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao final, o programa deve imprimir os resultados dos cálculos.

#include <stdio.h>

int main()
{
  float firstValue = 0, secondValue = 0, sum = 0, subtraction = 0, multiplication = 0, division = 0;

  printf("Enter the first value: ");
  scanf("%f", &firstValue);

  printf("Enter the second value: ");
  scanf("%f", &secondValue);

  sum = firstValue + secondValue;
  subtraction = firstValue - secondValue;
  multiplication = firstValue * secondValue;
  division = firstValue / secondValue;

  printf("Sum: %.1f\nSubtraction: %.1f\nMultiplication: %.1f\nDivision: %.1f\n", sum, subtraction, multiplication, division);
  return 0;
}
