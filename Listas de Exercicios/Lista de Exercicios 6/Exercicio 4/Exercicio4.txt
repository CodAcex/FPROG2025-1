#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4  
#define COLS 6


int main ()

{
    srand(time(NULL));

    int M[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            M[i][j] = -10 + rand() % 21;
            printf(" %d\t",M[i][j]);
        }
        printf("\n");
    }

    //sub item A.

    int soma = 0;

    for(int j = 0; j < COLS; j++)
    {
       soma = soma + M[1][j];
    }

    printf("A soma dos elementos da 2a linha: %d\n",soma);

    //sub item B.

    soma = 0;

    for(int i = 0; i < ROWS; i++)
    {
        soma = soma + M[i][4];
    }

    printf("A soma dos elementos da 5a coluna: %d\n",soma);

    //sub item C.

    int multiplicacao = 1;
    int produto = 0;

    for(int j = 0; j < ROWS; j++)
    {
        produto = M[0][j] * M[3][j];
        multiplicacao = multiplicacao + produto;
    }

    printf("A soma da multiplicação dos elementos da 1a linha com a 4a: %d\n",multiplicacao);

    //sub item D.
    int pares = 0;

   for(int i = 0; i < ROWS; i++)
   {
    for (int j = 0; j < COLS; j++)
    {
        if(j % 2 == 0)
        {
            pares = pares + M[i][j];
        }
    }
   }

    printf("A soma dos elementos das colunas pares: %d\n",pares);

    //sub item E.
    int impares = 0;

   for(int i = 0; i < ROWS; i++)
   {
    for (int j = 0; j < COLS; j++)
    {
        if(i % 2 == 1)
        {
            impares = impares + M[i][j];
        }
    }
   }

    printf("A soma dos elementos das linhas impares: %d\n",impares);
    
    return 0;
}