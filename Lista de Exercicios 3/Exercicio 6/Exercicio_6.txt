#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int num;
    int escolha;
    int sorteado;
    int result;
    int resto;

    printf("Escolha entre Par ou Impar: \n");
    printf("Par - 0\n");
    printf("Impar - 1\n");
    printf ("Escolha: ");
    scanf(" %d", &escolha);

    if (escolha !=0 && escolha !=1)
    {
        printf("Utilize apenas 0 ou 1 para escolha, tente novamente!");
        return 0;
    }

    srand(time(NULL));
    sorteado = rand() % 6; // sorteio

    printf("Escolha um numero de 0 a 5: ");
    scanf("%d", &num);

    if(num < 0 || num > 5)
    {
        printf("Numero nao permitido \n");
        return 0;
    }

    result = num + sorteado;
    resto = result % 2;
   
    if (resto == 0 && escolha == 0)

    {
        printf("Parabens Voce Venceu");
    }
    else if (resto != 0 && escolha == 1)

    {
        printf("Parabens Voce Venceu");
    }

    else
    {
        printf("Infelizmente o progama venceu desta vez:");
    }


    return 0;
}