#include <stdio.h>

int main()

{
    int num;
    int resto; // variavel para resto da divisão

    printf("Digite um valor: \n");
    scanf("%d", &num);
    resto = num % 2;
    
    if (resto == 0)
    {
        printf("O Valor e Par: ");
    }

    else
    {
        printf("O Valor e Impar: ");
    }

    return 0;
}