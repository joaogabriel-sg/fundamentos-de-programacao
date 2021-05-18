#include <stdio.h>

int main()
{
  float firstValue = 0, secondValue = 0, thirdValue = 0, average = 0;

  printf("Enter the first value: ");
  scanf("%f", &firstValue);

  printf("Enter the second value: ");
  scanf("%f", &secondValue);

  printf("Enter the third value: ");
  scanf("%f", &thirdValue);

  average = (firstValue + secondValue + thirdValue) / 3;

  printf("Average: %.1f\n", average);
  return 0;
}
