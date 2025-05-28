#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6

int main()

{
  int A[TAM] = {0};
  int lancamento;
  int sorteado = 0;
  int min = 1;
  int max = 6;

  srand(time(NULL));

  printf("Insira o numero de vezes que o dado será lançado: ");
  scanf("%d", &lancamento);

  for (int i = 0; i < lancamento; i++)
  {
    sorteado = min + rand() % (min - max + 1);
    A[sorteado - 1]++;
  }

  printf("Percentual de ocorrência de cada face:\n");

  for (int i = 0; i < 6; i++)
    {
     float percentual = (A[i] / (float)lancamento) * 100;
     printf("Face %d: %.2f%%\n", i + 1, percentual);
    }    
  
    return 0;
}
