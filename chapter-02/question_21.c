#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char bookName[40], userType[10];
  int totalDays = 0;

  printf("Qual o nome do livro? ");
  fgets(bookName, 40, stdin);

  printf("O tipo de usuário é professor ou aluno? ");
  fgets(userType, 10, stdin);

  if (strcmp(userType, "professor") == 0)
    totalDays = 10;
  else
    totalDays = 3;

  printf("==*== Recibo ==*==\n");
  printf("Nome do livro: %s", bookName);
  printf("Tipo de usuário: %s\n", userType);
  printf("Total de dias: %d\n", totalDays);

  return 0;
}