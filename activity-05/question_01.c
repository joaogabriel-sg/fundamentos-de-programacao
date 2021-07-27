/*
01. Foi realizada uma pesquisa de algumas características físicas de 10 habitantes de uma certa região. De cada habitante foram coletados os seguintes dados: sexo, cor dos olhos (azuis, verdes ou castanhos), cor dos cabelos (louros, pretos ou castanhos) e idade. Faça um procedimento que leia e imprima esses dados. Depois, calcule as seguintes informações:
a) Média de idade das pessoas de cabelo louro.
b) Quantidade de homens com idade acima de 30 anos.
c) Quantidade de mulhres com cabelo preto.

Para fazer essa questão, você pode utilizar uma matriz, ou 4 vetores. Mais na frente na disciplina, iremos estudar como realizar essa questão utilizando struct. Por enquanto, resolvam com matriz ou vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#define INHABITANTS_QUANTITY 3
#define DATA_QUANTITY 4

int getQuantityWomenWithBlackHair(int array[INHABITANTS_QUANTITY][DATA_QUANTITY])
{
  int quantity = 0;
  for (int i = 0; i < INHABITANTS_QUANTITY; i++)
    if (array[i][0] == 1 && array[i][2] == 1)
      quantity++;
  return quantity;
}

int getQuantityMenGreatherThanThirtyYears(int array[INHABITANTS_QUANTITY][DATA_QUANTITY])
{
  int quantity = 0;
  for (int i = 0; i < INHABITANTS_QUANTITY; i++)
    if (array[i][0] == 0 && array[i][3] > 30)
      quantity++;
  return quantity;
}

float getAgeAverageWithBlondHair(int array[INHABITANTS_QUANTITY][DATA_QUANTITY])
{
  int quantity = 0;
  float averageAge = 0;
  for (int i = 0; i < INHABITANTS_QUANTITY; i++)
    if (array[i][2] == 0)
    {
      quantity++;
      averageAge += array[i][3];
    }
  averageAge = averageAge / quantity;
  return averageAge;
}

int getAge()
{
  int age = 0;
  printf("Idade: ");
  scanf("%d", &age);
  return age;
}

int getHairColor()
{
  int hairColor = 0;
  printf("Cor dos cabelos:\n  [0] - Loiros\n  [1] - Pretos\n  [2] - Castanhos\n  Opção: ");
  scanf("%d", &hairColor);
  return (hairColor == 0 || hairColor == 1) ? hairColor : 2;
}

int getEyeColor()
{
  int eyeColor = 0;
  printf("Cor dos olhos:\n  [0] - Azúis\n  [1] - Verdes\n  [2] - Castanhos\n  Opção: ");
  scanf("%d", &eyeColor);
  return (eyeColor == 0 || eyeColor == 1) ? eyeColor : 2;
}

int getGender()
{
  int gender = 0;
  printf("Sexo:\n  [0] - Masculino\n  [1] - Feminino\n  Opção: ");
  scanf("%d", &gender);
  return gender == 1 ? 1 : 0;
}

void setDataInArray(int array[INHABITANTS_QUANTITY][DATA_QUANTITY])
{
  for (int i = 0; i < INHABITANTS_QUANTITY; i++)
  {
    printf("\nPESSOA %d\n", (i + 1));

    for (int j = 0; j < DATA_QUANTITY; j++)
    {
      if (j == 0)
        array[i][j] = getGender();
      else if (j == 1)
        array[i][j] = getEyeColor();
      else if (j == 2)
        array[i][j] = getHairColor();
      else if (j == 3)
        array[i][j] = getAge();
    }
  }
}

void printArray(int array[INHABITANTS_QUANTITY][DATA_QUANTITY])
{
  for (int i = 0; i < INHABITANTS_QUANTITY; i++)
    for (int j = 0; j < DATA_QUANTITY; j++)
    {
    }
}

int main()
{
  printf("==== DADOS DA POPULAÇÃO ====");

  int populationData[INHABITANTS_QUANTITY][DATA_QUANTITY];
  setDataInArray(populationData);

  float averageAgeWithBlondHair = getAgeAverageWithBlondHair(populationData);
  int menGreatherThanThirtyYears = getQuantityMenGreatherThanThirtyYears(populationData);
  int womenWithBlackHair = getQuantityWomenWithBlackHair(populationData);

  printf("\nRESULTADO DA ANÁLISE =============\n");
  printf("Média de idade das pessoas de cabelo loiro: %.2f anos.\n", averageAgeWithBlondHair);
  printf("Quantidade de homens com idade acima de 30 anos: %d\n", menGreatherThanThirtyYears);
  printf("Quantidade de mulheres com cabelo preto: %d\n", womenWithBlackHair);

  return 0;
}