#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIAS 30

int main()

{
    int A[DIAS];
    int sorteio;
    int consumo = 0;
    float media = 0;
    int min = 100;
    int max = 500;

    srand(time(NULL));

    // sub item A.

    for(int i = 0; i < DIAS; i++)
    {
        sorteio = min + rand() % (min - max + 1);
        A[i] = sorteio;  
        printf("O consumo no dia %d foi de %d\n", i+1, A[i]);    
    }

    //sub item B.

    for(int i = 0; i < DIAS; i++)
    {
       consumo = consumo + A[i];   
    }

    printf("O consumo total do mês foi de %d\n", consumo);

    //sub item C.

    media = consumo / 30;
    printf("A média de consumo diário é de: %f\n", media);

    //sub item D.
    int maior = A[0];
    int menor = A[0];
    int imaior = 0;
    int imenor = 0;

    for(int i= 1; i < DIAS; i++)
    {
        if(A[i] > maior)
        {
            maior = A[i];
            imaior = i;
        }

        if(A[i] < menor)
        {
            menor = A[i];
            imenor = i;
        }
        
    }

    printf("O maior valor encontrado foi %d no dia %d\n", maior, imaior + 1);
    printf("O menor valor encontrado foi %d no dia %d\n", menor, imenor + 1);
     
    return 0;
}
