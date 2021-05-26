#include <stdio.h>
#include <stdlib.h>

int main()
{
  int pointsPlayer1 = 0, pointsPlayer2 = 0, pointsPlayer3 = 0, pointsSum = 0;

  printf("Pontuação do jogador 1: ");
  scanf("%d", &pointsPlayer1);

  printf("Pontuação do jogador 2: ");
  scanf("%d", &pointsPlayer2);

  printf("Pontuação do jogador 3: ");
  scanf("%d", &pointsPlayer3);

  pointsSum = pointsPlayer1 + pointsPlayer2 + pointsPlayer3;

  if (pointsPlayer1 > pointsPlayer2 && pointsPlayer1 > pointsPlayer3)
  {
    if (pointsPlayer2 > pointsPlayer3)
      printf("%d %d %d\n", pointsPlayer1, pointsPlayer2, pointsPlayer3);
    else
      printf("%d %d %d\n", pointsPlayer1, pointsPlayer3, pointsPlayer2);
  }
  else if (pointsPlayer2 > pointsPlayer1 && pointsPlayer2 > pointsPlayer3)
  {
    if (pointsPlayer1 > pointsPlayer3)
      printf("%d %d %d\n", pointsPlayer2, pointsPlayer1, pointsPlayer3);
    else
      printf("%d %d %d\n", pointsPlayer2, pointsPlayer3, pointsPlayer1);
  }
  else
  {
    if (pointsPlayer2 > pointsPlayer1)
      printf("%d %d %d\n", pointsPlayer3, pointsPlayer2, pointsPlayer1);
    else
      printf("%d %d %d\n", pointsPlayer3, pointsPlayer1, pointsPlayer2);
  }

  if (pointsSum > 100)
    printf("Pontuação média: %.1f\n", (pointsSum / 3.0));
  else
    printf("Equipe desclassificada.\n");

  return 0;
}