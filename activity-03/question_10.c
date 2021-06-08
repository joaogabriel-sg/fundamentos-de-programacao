/*
10. A série de Fibonacci é uma série infinita de números naturais onde os dois primeiros são iguais a 1 e os demais são obtidos pela soma dos dois termos imediatamente anteriores. Os 10 primeiros termos da série de Fibonacci são 1, 1, 2, 3, 5, 8, 13, 21, 34, 55. Dado n como entrada determinar o nésimo termo da série de Fibonacci.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int amount = 0, term1 = 1, term2 = 1;

  printf("==*== SEQUÊNCIA DE FIBONACCI ==*==\n");
  printf("Quantos números deseja verificar? ");
  scanf("%d", &amount);

  if (amount < 1)
  {
    printf("\nQuantidade inválida!\nSAINDO...\n");
    return 0;
  }

  int count = 0;
  for (count = 0; count < amount; count++)
  {
    if (count == 0 || count == 1)
      printf("%d ", term1);
    else
    {
      int aux = term1 + term2;
      term1 = term2;
      term2 = aux;
      printf("%d ", aux);
    }
  }

  printf("\n");
  return 0;
}