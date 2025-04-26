#include <stdio.h>

int main()

{
    int num;
    int resto;

    printf("Digite um numero: \n");
    scanf("%d", &num);
    resto = num % 3;

    if( resto == 0)
    {
        printf("O Numero e divisivel por 3");
    } 

    else
    {
        printf("O Numero nao e divisivel por 3");
    }

    return 0;
}