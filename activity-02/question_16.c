/*
16. Faça um algoritmo que determina o IMC (índice da massa corpórea) de uma pessoa e indique se ela esta magra, normal ou obesa. O IMC é calculado com o peso em kg, dividido pelo quadrado da altura, em metros, IMC = Peso/Altura2. Se o IMC é menor que 20 estamos magros. Se o IMC está acima de 25 estamos obesos. Se o IMC estiver entre 20 e 25 estamos normais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float weight = 0, height = 0, imc = 0;

  printf("==*== CALCULADORA IMC ==*==\n");
  printf("Peso em kg: ");
  scanf("%f", &weight);

  printf("Altura em metros: ");
  scanf("%f", &height);

  imc = weight / (height * height);

  if (imc < 20)
    printf("\nRESULTADO: Magro.\n");
  else if (imc < 25)
    printf("\nRESULTADO: Normal.\n");
  else
    printf("\nRESULTADO: Obeso.\n");

  return 0;
}