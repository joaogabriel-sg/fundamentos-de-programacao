/*
07. Um quadrado perfeito é um número natural cuja raiz quadrada também pertence aos naturais. O conjunto dos quadrados perfeitos é {1, 4, 9, 16, 25, 36, 49, · · · }. Dado um inteiro de entrada determinar, sem uso de operadores reais (como raiz quadrada, por exemplo), se ele é ou não um quadrado perfeito.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("==*== QUADRADO PERFEITO OU NÃO? ==*==\n");
  printf("Digite um número inteiro: ");
  scanf("%d", &number);

  if (number == 0)
    return 0;

  int count = 1, verifier = 0;

  while (count < number)
  {
    if (count * count == number)
    {
      verifier = 1;
      break;
    }
    count++;
  }

  if (verifier == 0)
    printf("O número %d não é um quadrado perfeito!\n", number);
  else
    printf("O número %d é um quadrado perfeito!\n", number);

  return 0;
}