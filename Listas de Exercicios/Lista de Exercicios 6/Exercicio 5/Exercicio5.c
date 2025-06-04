#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4  
#define COLS 6


int main ()

{
    srand(time(NULL));

    int M[ROWS][COLS];
    
    int maior;
    int menor;

    M[0][0] = -10 + rand() % 21; //inicializar os valores de maior e menor
    maior = menor = M[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            M[i][j] = -10 + rand() % 21;
            printf(" %d\t",M[i][j]);

            if (M[i][j] > maior)
            {
                maior = M[i][j];
            }
            if (M[i][j] < menor)
            {
                menor = M[i][j];
            }
        }
        printf("\n");
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}