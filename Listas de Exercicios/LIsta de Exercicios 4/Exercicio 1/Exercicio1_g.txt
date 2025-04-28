#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
  int i;
  int positivo = 0;
  int negativo = 0;
  int nulo;
  int sorteado;

  srand(time(NULL));
  
  for(i = 1; i <=20; i++)
  {
    sorteado = rand() % 21 - 10;

    printf("%d - ", sorteado);

    if(sorteado < 0)
    {
      printf("Negativo\n");
      negativo++;
    }  
    else if(sorteado > 0)
    {
     printf("Positivo\n");
     positivo++;
    } 
    else
    {
      printf("Nulo\n");
      nulo++;
    }      
  }

  printf("Numeros positivos = %d\n", positivo);
  printf("Numeros negativos = %d\n", negativo);

  return 0;
}