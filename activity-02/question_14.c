/*
14. Faça um programa que receba quatro valores I, A, B, C. Desses valores I é inteiro e positivo, A, B, C são reais. Escreva os números A, B, C obedecendo a tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2, 3 e que os números digitados sejam diferentes um do outro.

Valor i             Forma escrever
  1             a, b,c em ordem crescente
  2             a,b,c em ordem decrescente
  3          o maior fica entre os dois números
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int I = 0;

  printf("==*== ORDENAÇÃO CONDICIONAL ==*==\n");
  printf("1 - A, B e C em ordem crescente.\n");
  printf("2 - A, B e C em ordem decrescente.\n");
  printf("3 - O maior fica entre os dois números.\n");

  printf("Digite sua opção: ");
  scanf("%d", &I);

  if (I < 1 || I > 3)
  {
    printf("\n[ERRO] Opção inválida!\n");
  }
  else
  {
    float A = 0, B = 0, C = 0;

    printf("\nAgora digite os valores para A, B e C.\n");
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);

    if (A == B && B == C)
    {
      printf("\nOs valores são iguais!\n");
    }
    else
    {
      if (I == 1)
      {
        if (A < B && A < C)
        {
          if (B < C)
            printf("\nOrdenação crescente: %.2f %.2f %.2f\n", A, B, C);
          else
            printf("\nOrdenação crescente: %.2f %.2f %.2f\n", A, C, B);
        }
        else if (B < A && B < C)
        {
          if (C < A)
            printf("\nOrdenação crescente: %.2f %.2f %.2f\n", B, C, A);
          else
            printf("\nOrdenação crescente: %.2f %.2f %.2f\n", B, A, C);
        }
        else
        {
          if (B < A)
            printf("\nOrdenação crescente: %.2f %.2f %.2f\n", C, B, A);
          else
            printf("\nOrdenação crescente: %.2f %.2f %.2f\n", C, A, B);
        }
      }
      else if (I == 2)
      {
        if (A < B && A < C)
        {
          if (B < C)
            printf("\nOrdenação decrescente: %.2f %.2f %.2f\n", C, B, A);
          else
            printf("\nOrdenação decrescente: %.2f %.2f %.2f\n", B, C, A);
        }
        else if (B < A && B < C)
        {
          if (C < A)
            printf("\nOrdenação decrescente: %.2f %.2f %.2f\n", A, C, B);
          else
            printf("\nOrdenação decrescente: %.2f %.2f %.2f\n", C, A, B);
        }
        else
        {
          if (B < A)
            printf("\nOrdenação decrescente: %.2f %.2f %.2f\n", A, B, C);
          else
            printf("\nOrdenação decrescente: %.2f %.2f %.2f\n", B, A, C);
        }
      }
      else
      {
        if (A > B && A > C)
          printf("\nMaior no meio: %.2f %.2f %.2f\n", B, A, C);
        else if (B > A && B > C)
          printf("\nMaior no meio: %.2f %.2f %.2f\n", A, B, C);
        else
          printf("\nMaior no meio: %.2f %.2f %.2f\n", A, C, B);
      }
    }
  }

  return 0;
}