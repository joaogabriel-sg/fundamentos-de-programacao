/*
35. O tratamento de colisão é um dos principais campos de estudo em jogos eletrônicos. Uma forma muito simples de calcular uma colisão (no mundo 2D, em duas dimensões) é usar a fórmula da distância euclidiana entre dois pontos no plano cartesiano:
Dados dois pontos do plano cartesiano, P1 (x1,y1) e P2 (x2,y2), a distância “D” entre esses dois pontos é dada pela fórmula:
*/

/*
OBS:
  - Rodar o comando gcc question_35.c -o question_35 -lm para linkar a biblioteca math com o código segundo documentaçõoes
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int point1X = 0, point1Y = 0, point2X = 0, point2Y = 0;
  int radius = 0;

  printf("==*== TESTE DE COLISÃO ==*==\n");
  printf("Digite X e Y do ponto 1 na mesma linha: ");
  scanf("%d %d", &point1X, &point1Y);

  printf("Digite X e Y do ponto 2 na mesma linha: ");
  scanf("%d %d", &point2X, &point2Y);

  printf("Digite o raio da circunferência: ");
  scanf("%d", &radius);

  float sum = pow((point2X - point1X), 2) + pow((point2Y - point1Y), 2);
  float distance = sqrt(sum);

  printf("\nDISTÂNCIA: %.2f\n", distance);
  printf("RAIO: %d\n", radius);

  if (distance <= 2 * radius)
    printf("\nCOLIDIRAM!!!\n");
  else
    printf("\nNÃO COLIDIRAM!!!\n");

  return 0;
}