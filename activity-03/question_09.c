/*
09. Diz-se que um inteiro positivo n é perfeito se ele for igual à soma de seus divisores positivos diferentes de n. Dado um inteiro positivo n, verificar se n é perfeito.

Perfeito: 1+2+3=6

Dica: 
  - Calcule a soma de todos os divisores de um numero (exceto ele mesmo).
  -Verifique se a soma é igual ao próprio número.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number = 0;

  printf("==*== NÚMERO PERFEITO ==*==\n");
  printf("Número: ");
  scanf("%d", &number);

  if (number == 0)
    return 0;

  int sum = 0, count = 1;

  while (count < number)
  {
    if (number % count == 0)
      sum += count;
    count++;
  }

  if (sum == number)
    printf("O número %d É PERFEITO!\n", number);
  else
    printf("O número %d NÃO É PERFEITO!\n", number);

  return 0;
}