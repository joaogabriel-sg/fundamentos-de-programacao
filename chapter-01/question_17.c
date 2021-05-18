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