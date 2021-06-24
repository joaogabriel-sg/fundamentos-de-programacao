/*
04. Determinar a soma dos primeiros 200 números naturais que sejam divisíveis por 3 mas que não sejam divisíveis por 7.

Dica: 
  - Use 2 variaveis: resto3 e resto7.
  - Para cada numero natural entre 0 e 200, divida por 3 e guarde o resto na variavel resto3.
  - Para cada numero natural entre 0 e 200, divida por 7 e guarde o resto na variavel resto7.

Apenas guarde na variavel soma aqueles numeros com resto3 == 0 e
resto7 != 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sum = 0, count = 1;

  printf("==*== SOMA CONDICIONAL ==*==\n");

  while (count <= 200)
  {
    if (count % 3 == 0 && count % 7 != 0)
      sum += count;
    count++;
  }

  printf("Resultado: %d\n", sum);

  return 0;
}