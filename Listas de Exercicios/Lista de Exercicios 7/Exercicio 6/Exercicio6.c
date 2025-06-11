#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char ExibirMenu()
{
    printf("********MENU PRINCIPAL*************\n");
    printf("1 - ABRIR UMA CAIXA\n");
    printf("2 - CONSULTAR ITENS\n");
    printf("3 - SAIR DO PROGRAMA\n");
    
    char opcao;
    bool valida;
    do
    {
        printf("Digite uma opcao: ");
        scanf(" %c",&opcao);
        valida = true;
        if (opcao!= '1' && opcao!='2' && opcao!='3')
        {
            printf("Opcao invalida!\n");
            valida = false;
        }
    } while (valida == false);

    return opcao;
}

void Caixa(int comum, int raro, int lendario)
{
    srand(time(NULL));

    int sorteado = 0;
    int min = 0;
    int max = 100;
    comum = 0;
    raro = 0;
    lendario = 0;

    sorteado = min + rand() % (max - min + 1);

    if(sorteado <= 80)
    {
        printf("Você coletou 1 item comum!\n\n");
        comum++;
        comum += comum;
    }
    else if(sorteado <= 99)
    {
        printf("Você coletou 1 item raro!\n\n");
        raro++;
        raro += raro;
    }
    else
    {
        printf("Você coletou 1 item lendário!\n\n");
        lendario++;
        lendario += lendario;
    }
}

void Consulta(int comum, int raro, int lendario)
{
    printf("Você possui %d Itens Comuns\n", comum);
    printf("Você possui %d Itens Raros\n", raro);
    printf("Você possui %d Itens Lendários\n\n", lendario);
}


int main()
{
    char opcao;
    do {
        int comum = 0;
        int raro = 0;
        int lendario = 0;
        opcao = ExibirMenu();
        switch(opcao)
        {
            case '1':
                Caixa(comum,raro,lendario);
                break;
            case '2':
                Consulta(comum,raro,lendario);
                break;
            case '3':
                printf("Saindo do programa!\n");
                break;
        }
    } while (opcao != '3');

    return 0;
}
