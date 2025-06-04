#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGADOR 4
#define RODADAS 5

int main() 
{
    int A[JOGADOR];
    int sorteado = 0;
    int min = 0;
    int max = 100;
    srand(time(NULL));

    //sub item A.

    for (int i = 0; i < JOGADOR; i++) 
    {
        A[i] = 0;
    }

    //sub item B.

    for (int i = 0; i < RODADAS; i++) 
    {
        printf("Rodada %d\n\n", i + 1);

        for (int i = 0; i < JOGADOR; i++)
        {
            sorteado = min + rand() % (max - min + 1);
            A[i] = A[i] + sorteado; 
            printf("Jogador %d: %d pontos nesta rodada (Total: %d)\n", i + 1, sorteado, A[i]); // sub item C.

            //sub item D.
            if (sorteado > 80) 
            {
                printf("Rodada de Destaque para o Jogador %d!\n", i + 1);
            }
        }

        printf("\n");
    }
    //sub item E.
    printf("Pontuação final:\n");
    for (int i = 0; i < JOGADOR; i++) 
    {
        printf("Jogador %d: %d pontos\n", i + 1, A[i]);
    }

    int maior = A[0];
    int vencedor = 0;
    int empate = 0;

    for (int i = 1; i < JOGADOR; i++) 
    {
        if (A[i] > maior) 
        {
            maior = A[i];
            vencedor = i;
            empate = 0;
        }

        else if (A[i] == maior) 
        {
            empate = 1;
        }
    }

    //sub item F.
    if (empate) 
    {
        printf("Houve um empate entre os jogadores com %d pontos!\n", maior);
    }
    else 
    {
        printf("O vencedor foi o Jogador %d com %d pontos!\n", vencedor + 1, maior);
    }

    return 0;
}