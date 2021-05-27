// 13. Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando um reajuste de 2%.

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
