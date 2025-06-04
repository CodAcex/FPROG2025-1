#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 3

int main() 
{
    float M[ROWS][COLS];
    srand(time(NULL));

    printf("Notas dos alunos (Grau A | Grau B | Média Final):\t\n");

    for (int i = 0; i < ROWS; i++) 
    {
        // GA
        M[i][0] = (float)rand() / RAND_MAX * 10.0;

        // GB
        M[i][1] = (float)rand() / RAND_MAX * 10.0;

        // Média 
        M[i][2] = (M[i][0] + (M[i][1] * 2)) / 3.0;

        printf("Aluno %2d: %5.2f\t%5.2f\t%5.2f\n", i + 1, M[i][0], M[i][1], M[i][2]);
    }

    return 0;
}