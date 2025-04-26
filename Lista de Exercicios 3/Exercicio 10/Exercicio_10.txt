#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int dados;
    int sorteado;

    printf("Selecione a quantidade de faces do dado: \n");
    printf("4\n");
    printf("6\n");
    printf("8\n");
    printf("10\n");
    printf("12\n");
    printf("16\n");
    scanf("%d", &dados);

    if(dados == 4 || dados == 6 || dados ==8 || dados ==10 || dados ==12 || dados == 16)

    {
       srand(time(NULL));
       sorteado = rand () % dados + 1;
       printf("Voce jogou um dado de %d lados e tirou: %d\n", dados, sorteado);
    }

    else
    {
        printf("Escolha invalida!\n");
    }



    return 0;
}