#include <stdio.h>

int main()
{
  float salary = 0, readjustmentPercentage = 0;

  printf("Enter a salary: ");
  scanf("%f", &salary);

  printf("Enter a readjustment percentage: ");
  scanf("%f", &readjustmentPercentage);

  salary += salary * (readjustmentPercentage / 100);

  printf("Your new salary R$ %.1f\n", salary);

  return 0;
}