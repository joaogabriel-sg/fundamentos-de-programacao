// 6. Faça um algoritmo que determine se um número é divisível ou não por outro.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int firstNumber = 0, secondNumber = 0;

  printf("==*== DIVISÍVEL ==*==\n");
  printf("Digite o primeiro número: ");
  scanf("%d", &firstNumber);

  printf("Digite o segundo número: ");
  scanf("%d", &secondNumber);

  if (firstNumber % secondNumber == 0)
    printf("%d é divisível por %d\n", firstNumber, secondNumber);
  else
    printf("%d não é divisível por %d\n", firstNumber, secondNumber);

  return 0;
}