#include <stdio.h>

int main()
{
  int firstNumber = 0, secondNumber = 0, subtractionResult = 0;

  printf("Enter the first integer: ");
  scanf("%d", &firstNumber);

  printf("Enter the second integer: ");
  scanf("%d", &secondNumber);

  subtractionResult = firstNumber - secondNumber;

  printf("Subtraction: %d\n", subtractionResult);
  return 0;
}
