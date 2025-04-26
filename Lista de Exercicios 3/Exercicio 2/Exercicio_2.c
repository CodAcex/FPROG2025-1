#include <stdio.h>

int main()

{
    int a, b, c;

    printf("Digite o Valor de A: \n");
    scanf("%d", &a);

    printf("Digite o Valor de B: \n");
    scanf("%d", &b);

    printf("Digite o Valor de C: \n");
    scanf("%d", &c);

    if (a + b <= a + c)
    {
        printf("A + B e Menor que A + C");
    }

    else 
    {
        printf("A + B e maior que A + C");
    }

    return 0;
}