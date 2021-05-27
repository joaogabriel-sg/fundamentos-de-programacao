// 12. Faça um programa em C que leia um número real e calcule o quadrado deste número. Ao final, o programa deve imprimir o resultado do cálculo.

#include <stdio.h>

int main()
{
  float number = 0, result = 0;

  printf("Enter a number: ");
  scanf("%f", &number);

  result = number * number;

  printf("Result: %.1f\n", result);
  return 0;
}
