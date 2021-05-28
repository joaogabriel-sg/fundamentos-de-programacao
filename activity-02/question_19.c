/*
19. Numa fábrica de peças, o salário base de um operário da linha de fabricação é de R$ 440,00. Além do salário base, o operário tem um adicional de produtividade baseado na quantidade de peças que ele fabrica por mês que é pago segundo o critério:

• Se o número de peças é inferior ou igual a 500: apenas o salário base;

• Se o número de peças é superior a 500 e inferior ou igual 750: R$ 0,50 por peça fabricada acima das 500;

• Se o número de peças for superior a 750: recebe R$ 550,00 (fixo) mais R$ 0,75 por peça fabricada acima das 750.

Desenvolva um programa que permita entrar com o número de peças fabricadas por um operário e imprima seu salário.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int piecesNumber = 0;
  float salary = 440.00;

  printf("==*== SALÁRIO ==*==\n");
  printf("Quantidade de peças produzidas: ");
  scanf("%d", &piecesNumber);

  if (piecesNumber <= 500)
    salary = salary;
  else if (piecesNumber <= 750)
  {
    piecesNumber -= 500;
    salary += (0.5 * piecesNumber);
  }
  else
  {
    piecesNumber -= 750;
    salary += 550 + (0.75 * piecesNumber);
  }

  printf("Salário: R$ %.2f\n", salary);
  return 0;
}