#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int incio, int fim)
{
    int sorteado = 0;
    int min = 0;
    int max = 0;
    srand(time(NULL));

    min = incio;
    max = fim;

    sorteado = min + rand() % (max - min + 1);

    printf("O número sorteado é: %d", sorteado);

    return sorteado;
}

int main()
{
    int inicio = 0;
    int fim = 0;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    sorteio(inicio,fim);

    return 0;
}