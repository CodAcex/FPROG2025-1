#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int min = 1;
    int max =10;
    int sorteado;
    int chance;
    int tentativas = 3;
    int erro = 0;

    srand(time(NULL));

    sorteado = rand() % (min - max + 1);

    do
    {
     printf("Adivinhe o número de 1 a 10(Você possui %d chances): ", tentativas);
     scanf("%d", &chance);

     if(chance < sorteado)
     {
        printf("O número sorteado está acima!\n", tentativas);
        erro++;
        tentativas --;
     }
     else if(chance > sorteado)
     {
        printf("O número sorteado está abaixo!\n", tentativas);
        erro++;
        tentativas--;
     }
     else if(chance == sorteado)
     {
        printf("O número está correto!(chances : %d)\n", tentativas);
        return 0;
     }

    } while (erro != 3);
    
    return 0;
}