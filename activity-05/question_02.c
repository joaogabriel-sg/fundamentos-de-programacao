/*
02. Foi realizada uma pesquisa entre X habitantes de uma certa região. X deve ser definido pelo usuário. De cada habitante foram coletados os dados: idade, sexo, salário e número de filhos. Faça um procedimento que leia esses em 4 vetores, que deve ser enviada por referência.

Agora, faça funções que recebem os vetores específicos por parâmetro e retorna os seguintes resultados: a média de salário entre os habitantes, a menor e a maior idade do grupo e a quantidade de mulheres com 3 filhos que recebe até R$500,00.
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_DATA 4

void printArray(int array[], int length)
{
  for (int i = 0; i < length; i++)
    printf("%d ", array[i]);
  printf("\n");
}

int getQuantityOfWomenThreeChildrenSalaryFiveHundred(int genderArray[], int numberOfChildrenArray[], float salaryArray[], int length)
{
  int quantityOfWomen = 0;
  for (int i = 0; i < length; i++)
    if (genderArray[i] == 1 && numberOfChildrenArray[i] == 3 && salaryArray[i] <= 500)
      quantityOfWomen++;
  return quantityOfWomen;
}

int getGreatestAge(int array[], int length)
{
  int greatestAge = 0;
  for (int i = 0; i < length; i++)
    if (i == 0 || array[i] > greatestAge)
      greatestAge = array[i];
  return greatestAge;
}

int getLowestAge(int array[], int length)
{
  int lowestAge = 0;
  for (int i = 0; i < length; i++)
    if (i == 0 || array[i] < lowestAge)
      lowestAge = array[i];
  return lowestAge;
}

float getSalaryAverage(float array[], int length)
{
  float salaryAverage = 0;
  for (int i = 0; i < length; i++)
    salaryAverage += array[i];

  salaryAverage = salaryAverage / length;
  return salaryAverage;
}

void setNumberOfChildrenInArray(int array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    int numberOfChildren = 0;
    printf("\n(Pessoa %d) Número de filhos: ", (i + 1));
    scanf("%d", &numberOfChildren);
    array[i] = numberOfChildren;
  }
}

void setSalariesInArray(float array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    float salary = 0;
    printf("\n(Pessoa %d) Salário:", (i + 1));
    scanf("%f", &salary);
    array[i] = salary;
  }
}

void setGendersInArray(int array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    int gender = 0;
    printf("\n(Pessoa %d) Gênero\n  [0] - Masculino\n  [1] - Feminino\n  Opção:", (i + 1));
    scanf("%d", &gender);
    array[i] = gender == 1 ? 1 : 0;
  }
}

void setAgesInArray(int array[], int length)
{
  for (int i = 0; i < length; i++)
  {
    int age = 0;
    printf("\n(Pessoa %d) Idade: ", (i + 1));
    scanf("%d", &age);
    array[i] = age;
  }
}

void initializeArray(int array[], int length)
{
  for (int i = 0; i < length; i++)
    array[i] = 0;
}

int main()
{
  printf("==== ANÁLISE COM VETORES ====\n");

  int inhabitants = 0;
  printf("Quantidade de habitantes: ");
  scanf("%d", &inhabitants);

  if (!inhabitants)
    return 0;

  int agesArray[inhabitants], genderArray[inhabitants], numberOfChildrenArray[inhabitants];
  float salaryArray[inhabitants];

  initializeArray(agesArray, inhabitants);
  initializeArray(genderArray, inhabitants);
  initializeArray(salaryArray, inhabitants);
  initializeArray(numberOfChildrenArray, inhabitants);

  setAgesInArray(agesArray, inhabitants);
  setGendersInArray(genderArray, inhabitants);
  setSalariesInArray(salaryArray, inhabitants);
  setNumberOfChildrenInArray(numberOfChildrenArray, inhabitants);

  float salaryAverage = getSalaryAverage(salaryArray, inhabitants);
  int lowestAge = getLowestAge(agesArray, inhabitants);
  int greatestAge = getGreatestAge(agesArray, inhabitants);
  int quantityOfWomen = getQuantityOfWomenThreeChildrenSalaryFiveHundred(genderArray, numberOfChildrenArray, salaryArray, inhabitants);

  printf("\nRESULTADOS =========================\n");
  printf("Média salarial: %.2f\n", salaryAverage);
  printf("Menor idade: %d\n", lowestAge);
  printf("Maior idade: %d\n", greatestAge);
  printf("Quantidade de mulheres com 3 filhos e que recebem até R$500,00: %d\n", quantityOfWomen);
  return 0;
}