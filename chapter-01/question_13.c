#include <stdio.h>

int main()
{
  float balance = 0;

  printf("Enter your balance: ");
  scanf("%f", &balance);

  balance = balance * 1.02;

  printf("New balance: %.1f\n", balance);
  return 0;
}
