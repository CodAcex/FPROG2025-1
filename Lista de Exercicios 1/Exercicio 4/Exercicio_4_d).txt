#include <stdio.h>

int main()

{
  float x; //valor definido pelo usuário
  float a = 1;
  float b = 1;
  float c = 1; //coeficientes
  float y; //resultado

  printf("Digite o valor de x: ");
  scanf("%f", &x);

  y = a*(x*x) + (b*x) + c;

  printf("O Resultado e: %.2f", y);
  

    return 0;
}