#include <stdio.h>

#define TAM 5

int main()

{
  int A[TAM];

  for(int i = 0; i < TAM; i++)
  {
  printf("Escreva o Valor elemento do V[%d]:",i);
  scanf("%d", &A[i]);
  }  

  for(int i = 0; i < TAM; i++)
  {
    A[i] = A[i] * i;
    printf("O valor do V[%d]: %d\n", i, A[i]);
  }

    return 0;
}
