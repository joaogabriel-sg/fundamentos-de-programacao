#include <stdio.h>

int main()
{
  float productValue = 0, discount = 0, newProductValue = 0;

  printf("Enter a product value: ");
  scanf("%f", &productValue);

  printf("Enter a discount percentage: ");
  scanf("%f", &discount);

  discount = productValue * (discount / 100);
  newProductValue = productValue - discount;

  printf("Discount value: R$ %.1f\nProduct after discount: R$ %.1f\n", discount, newProductValue);
  return 0;
}
