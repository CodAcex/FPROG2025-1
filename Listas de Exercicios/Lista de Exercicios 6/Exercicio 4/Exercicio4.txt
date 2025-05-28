#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()

#define ROWS 4  
#define COLS 6

{
    srand(time(NULL));

    int M[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            M[i][j] = -10 + rand() % 21;
            printf("%d ",M[ROWS][COLS]);
        }
        printf("\n");
    }

    //sub item A.

    int soma = 0;
    for(int j = 0; j < COLS; j++)
    {
       soma = soma + M[1][j];
    }
    printf("A soma dos elemnentos da 2a linha: %d\n",soma);

    //sub item B.

    soma = 0;
    for(int i = 0; i < ROWS; i++)
    {
        soma = soma + M[i][4];
    }
    printf("A soma dos elemnentos da 5a coluna: %d\n",soma);
    
    return 0;
}