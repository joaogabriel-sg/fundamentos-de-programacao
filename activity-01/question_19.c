// 19. Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso. Ao final, o programa deve imprimir o valor da prestação atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere juros simples.

#include <stdio.h>

int main()
{
  float value = 0, interestRate = 0, period = 0, newValue = 0;

  printf("Enter the value: ");
  scanf("%f", &value);

  printf("Enter the interest rate in percent: ");
  scanf("%f", &interestRate);

  printf("Enter the period: ");
  scanf("%f", &period);

  newValue = value + value * (interestRate / 100) * period;

  printf("Amount of the overdue installment: %.1f\n", value);
  printf("Period: %.1f\n", period);
  printf("Overdue installment + Interest rate: %.1f\n", newValue);

  return 0;
}