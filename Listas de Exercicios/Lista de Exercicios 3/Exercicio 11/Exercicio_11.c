#include <stdio.h>

int main()

{
    int valor; //valor desejado pelo usuario
    int retorno;


    printf("Digite o valor desejado: R$ ");
    scanf("%d", &valor);

    retorno = valor;

    if(retorno >= 100)
    {
        int notas_100 = retorno / 100;
        printf("Sera utilizado: %d notas de 100\n", notas_100);
        retorno = retorno % 100;
    }
    
    if(retorno >= 50)
    {
        int notas_50 = retorno / 50;
        printf("Sera utilizado: %d notas de 50\n", notas_50);
        retorno = retorno % 50;
    }

    if(retorno >= 20)
    {
        int notas_20 = retorno / 20;
        printf("Sera utilizado: %d notas de 20\n", notas_20);
        retorno = retorno % 20;
    }

    if(retorno >= 10)
    {
        int notas_10 = retorno / 10;
        printf("Sera utilizado: %d notas de 10\n", notas_10);
        retorno = retorno % 10;
    }
    
    if(retorno >= 5)
    {
        int notas_5 = retorno / 5;
        printf("Sera utilizado: %d notas de 5\n", notas_5);
        retorno = retorno % 5;
    }

    if(retorno >= 1)
    {
        int notas_1 = retorno;
        printf("Sera utilizado: %d notas de 1\n", notas_1);
    }

    return 0;
}