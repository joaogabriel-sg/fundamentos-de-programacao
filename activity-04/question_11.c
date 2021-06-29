// 11. Elabore uma função que retorne como resultado o valor de uma potência de uma base B qualquer elevada a um expoente E qualquer, ou seja, de BE (Sem utilizar funções especiais da biblioteca matemática do C).

#include <stdio.h>
#include <stdlib.h>

long int calculateTheExponentiation(int B, int E)
{
  long int result = 1;
  int count = 0;

  while (count < E)
  {
    result *= B;
    count++;
  }

  return result;
}

int main()
{
  int B = 0, E = 0;

  printf("==*== POTENCIAÇÃO ==*==\n");
  printf("Digite a base: ");
  scanf("%d", &B);

  printf("Digite o expoente: ");
  scanf("%d", &E);

  long int exponentiationResult = calculateTheExponentiation(B, E);
  printf("\nResultado da exponenciação: %ld\n", exponentiationResult);

  return 0;
}
