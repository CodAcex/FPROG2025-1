#include <stdio.h>

#define TAM 7
int main()

{
    int A[TAM];
    int passos = 0;
    int i;

    //sub item A.

    for(i = 0; i < TAM; i++)
    {
        printf("Digite o numero de passos no dia %d: ", i+1);
        scanf("%d", &A[i]);
    }

    //sub item B.
    for(i = 0; i < TAM; i++)
    {
        passos = passos + A[i];
    }
    printf("O total de passos é de: %d\n", passos);

    //sub item C.

    float media = passos / 7;
    printf("A média de passos é de: %.2f\n", media);

    //sub item D.

    for(i = 0; i < TAM; i++)
    {

    if(A[i] >= 10000)
    {
        printf("No dia %d foi atingido a meta!\n", i+1);
    }

    }

    return 0;
}
