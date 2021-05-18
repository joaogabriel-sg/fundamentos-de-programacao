#include <stdio.h>

int main()
{
  float base = 0, height = 0, perimeter = 0, area = 0;

  printf("Enter a base: ");
  scanf("%f", &base);

  printf("Enter a height: ");
  scanf("%f", &height);

  perimeter = base * 2 + height * 2;
  area = base * height;

  printf("Perimeter: %.1f\nArea: %.1f\n", perimeter, area);
  return 0;
}
