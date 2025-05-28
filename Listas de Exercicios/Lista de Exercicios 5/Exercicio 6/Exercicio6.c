#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGADOR 4
#define RODADAS 5

int main()

{
    int A[JOGADOR];
    int j1, j2, j3, j4 = 0;
    int sorteado;
    min = 0;
    max = 0;
    srand(time(NULL));

    //sub item A.

    j1 = A[0];
    j2 = A[1];
    j3 = A[2];
    j4 = A[3];

    //sub item B.

    for(int i = 0; i < RODADAS; i++)
    {
        sorteado = min + rand() % (min - max + 1);
    }


  
    return 0;
}
