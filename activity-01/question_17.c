/*
17. Faça um programa em C que calcule a conversão entre graus centígrados e Fah-
renheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a
seguir. Após calcular o programa deve imprimir o resultado da conversão.

F = (9 ×C + 160) / 5

Em que:
• F = Graus em Fahrenheit
• C = Graus centígrados
*/

#include <stdio.h>

int main()
{
  float celsius = 0, fahrenheit = 0;

  printf("Enter a value in degrees Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (9 * celsius + 160) / 5;

  printf("The temperature in Fahrenheit is %.1f\n", fahrenheit);
  return 0;
}