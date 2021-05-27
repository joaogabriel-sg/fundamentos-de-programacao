/*
18. Faça um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. O programa deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:
D = T × V
L = D / 12

Em que:
• D = Distância percorrida em horas
• T = Tempo decorrido
• V = Velocidade média
• L = Litros de combustível consumidos
*/

#include <stdio.h>

int main()
{
  float autonomy = 12, travelTime = 0, averageSpeed = 0, distance = 0, liters = 0;

  printf("Enter the travel time: ");
  scanf("%f", &travelTime);

  printf("Enter the average speed: ");
  scanf("%f", &averageSpeed);

  distance = travelTime * averageSpeed;
  liters = distance / autonomy;

  printf("Distance: %.1f km\nLiters: %.1f\n L", distance, liters);
  return 0;
}