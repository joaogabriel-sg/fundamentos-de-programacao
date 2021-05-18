#include <stdio.h>

int main()
{
  int integer = 0, previousNumber = 0, nextNumber = 0;

  printf("Enter an integer: ");
  scanf("%d", &integer);

  previousNumber = integer - 1;
  nextNumber = integer + 1;

  printf("Previous number: %d\nNext number: %d\n", previousNumber, nextNumber);
  return 0;
}
