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