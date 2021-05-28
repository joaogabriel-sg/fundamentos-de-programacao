// 7. Faça um algoritmo que receba dois números inteiros e verifique se há a seguinte situação se o n1 está entre 50 e 200 e n2 está entre -1 e 9. A saída deve ser 1 se os números satisfazem a situação e 0 se não satisfazem.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int firstNumber = 0, secondNumber = 0;

  printf("==*== CONDICIONAL ==*==\n");
  printf("Digite o primeiro número: ");
  scanf("%d", &firstNumber);

  printf("Digite o segundo número: ");
  scanf("%d", &secondNumber);

  if ((firstNumber >= 50 && firstNumber <= 200) && (secondNumber >= -1 && secondNumber <= 9))
  {
    printf("1\n");
  }
  else
  {
    printf("0\n");
  }

  return 0;
}