#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salary = 0;

  printf("Qual o seu salário? R$ ");
  scanf("%f", &salary);

  if (salary <= 600)
    printf("Você está isento do desconto do INSS.\n");
  else if (salary <= 1200)
    printf("O desconto do INSS será de 20%% que é R$ %.2f\n", (salary * 0.2));
  else if (salary <= 2000)
    printf("O desconto do INSS será de 25%% que é R$ %.2f\n", (salary * 0.25));
  else
    printf("O desconto do INSS será de 30%% que é R$ %.2f\n", (salary * 0.3));

  return 0;
}