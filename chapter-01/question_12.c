#include <stdio.h>

int main()
{
  float number = 0, result = 0;

  printf("Enter a number: ");
  scanf("%f", &number);

  result = number * number;

  printf("Result: %.1f\n", result);
  return 0;
}
