// 5. Dados dois números naturais como entrada, determinar o resto da divisão do maior pelo menor quando possível.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int firstNumber = 0, secondNumber = 0;

  printf("==*== RESTO DA DIVISÂO ==*==\n");
  printf("Digite o primeiro número: ");
  scanf("%d", &firstNumber);

  printf("Digite o segundo número: ");
  scanf("%d", &secondNumber);

  if (firstNumber > secondNumber)
    printf("Resultado: %d\n", (firstNumber % secondNumber));
  else
    printf("Resultado: %d\n", (secondNumber % firstNumber));

  return 0;
}