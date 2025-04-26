#include <stdio.h>

int main()

{
  float tempo1 = 2;
  float tempo2 = 3;
  float velocidade1 = 12;
  float velocidade2 = 18;
  float distancia_total;

  distancia_total = (tempo1*velocidade1) + (tempo2*velocidade2);

  printf("Distancia total(em Km): %.f\n", distancia_total);

    return 0;
}