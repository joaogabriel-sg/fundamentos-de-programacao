// 09. Faça uma função chamada calculadora. Esta função deve receber dois valores reais e um caractere que representa a operação. A função deve estar preparada para calcular as operações básicas (soma, subtração, multiplicação e divisão) e retornar o resultado.

#include <stdio.h>
#include <stdlib.h>

float calculator(float A, float B, char operation)
{
  if (operation == 's')
    return A + B;
  else if (operation == 'b')
    return A - B;
  else if (operation == 'm')
    return A * B;
  else if (operation == 'd')
    return A / B;
  else
    return 0;
}

int main()
{
  char operation;
  float A = 0, B = 0;

  printf("==*== CALCULADORA ==*==\n");
  printf("Número A: ");
  scanf("%f", &A);

  printf("Número B: ");
  scanf("%f", &B);

  printf("Operação\n  s - Soma\n  b - Subtração\n  m - Multiplicação\n  d - Divisão\nOpção: ");
  scanf(" %c", &operation);

  float result = calculator(A, B, operation);
  printf("\nResultado: %.2f\n", result);

  return 0;
}
