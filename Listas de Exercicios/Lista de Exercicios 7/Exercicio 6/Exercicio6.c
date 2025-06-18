#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef struct 
{
   int comum;
   int raro;
   int lendario;
} Raridade;


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

Raridade Caixa(Raridade inv)
{
    srand(time(NULL));

    int sorteado = 0;
    int min = 0;
    int max = 100;
    sorteado = min + rand() % (max - min + 1);

    if(sorteado <= 80)
    {
        printf("Você coletou 1 item comum!\n\n");
        inv.comum++;
    }
    else if(sorteado <= 99)
    {
        printf("Você coletou 1 item raro!\n\n");
        inv.raro++;
    }
    else
    {
        printf("Você coletou 1 item lendário!\n\n");
        inv.lendario++;
    }
    return inv;
}

void Consulta(Raridade inv)
{
    printf("Você possui %d Itens Comuns\n", inv.comum);
    printf("Você possui %d Itens Raros\n", inv.raro);
    printf("Você possui %d Itens Lendários\n\n", inv.lendario);
}


int main()
{
    Raridade Raridade = {0, 0, 0};
    char opcao;
    do {
        opcao = ExibirMenu();
        switch(opcao)
        {
            case '1':
                Raridade = Caixa(Raridade);
                break;
            case '2':
                Consulta(Raridade);
                break;
            case '3':
                printf("Saindo do programa!\n");
                break;
        }
    } while (opcao != '3');

    return 0;
}
