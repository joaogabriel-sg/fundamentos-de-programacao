#include <stdio.h>

int main()
{
  float number = 0, result = 0;

  printf("Enter a number: ");
  scanf("%f", &number);

  result = number / 4.0;

  printf("Result: %.1f\n", result);
  return 0;
}
