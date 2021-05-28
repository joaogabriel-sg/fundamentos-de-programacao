// 9. Faça um programa que ordene três números informados pelo usuário.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number1 = 0, number2 = 0, number3 = 0;

  printf("==*== ORDENAÇÃO ==*==\n");
  printf("Digite o primeiro número: ");
  scanf("%d", &number1);

  printf("Digite o segundo número: ");
  scanf("%d", &number2);

  printf("Digite o terceiro número: ");
  scanf("%d", &number3);

  if (number1 < number2 && number1 < number3)
  {
    if (number2 < number3)
      printf("Ordenação crescente: %d %d %d\n", number1, number2, number3);
    else
      printf("Ordenação crescente: %d %d %d\n", number1, number3, number2);
  }
  else if (number2 < number1 && number2 < number3)
  {
    if (number1 < number3)
      printf("Ordenação crescente: %d %d %d\n", number2, number1, number3);
    else
      printf("Ordenação crescente: %d %d %d\n", number2, number3, number1);
  }
  else
  {
    if (number2 < number1)
      printf("Ordenação crescente: %d %d %d\n", number3, number2, number1);
    else
      printf("Ordenação crescente: %d %d %d\n", number3, number1, number2);
  }

  return 0;
}