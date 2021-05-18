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