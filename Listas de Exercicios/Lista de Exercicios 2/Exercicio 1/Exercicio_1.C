#include <stdio.h>

int main()
{
    int tempo_min;
    int tempo_sec;

    printf("Digite a quantidade de tempo(em minutos): \n");
    scanf("%d", &tempo_min);
    tempo_sec = tempo_min*60;

    printf("O tempo em segundos e: %d",tempo_sec);


    return 0;
}