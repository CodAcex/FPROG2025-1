#include <stdio.h>

int main()
{
    int passaros;
    int racao = 30; //em gramas
    int total;  //total de ração por dia

    printf("Digite a quantidade de passaros que possui: ");
    scanf("%d", &passaros);

    total = passaros*racao;

    printf("A quantidade de racao necessaria (em gramas) e de: %d", total);


    return 0;
}