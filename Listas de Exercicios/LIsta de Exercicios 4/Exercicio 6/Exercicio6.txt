#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int num;
    int menor;
    int maior;
    int media;
    int soma = 0;

    srand(time(NULL));

    for(i = 0; i < 5; i++)
    {
        num = (rand() % 100) + 1;
        printf("Sorteado: %d\n", num);
    

     if(i == 0)
     {
        menor = num;
        maior = num;
     }
     else
     {
        if(num < menor)
        {
            menor = num;
        }
        if(num > maior)
        {
            maior = num;
        }
        soma += num;
     }
    }
    media = soma / 5;

    printf("O Menor valor é: %d\n", menor);
    printf("O Maior valor é: %d\n", maior);
    printf("A Média é: %d\n", media);

    return 0;
}