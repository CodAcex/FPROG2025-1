#include <stdio.h>

int main()

{
    float produto;
    float lucro;

    printf("Insira o valor total da compra:");
    scanf("%f",&produto);

    if(produto <= 20.00)
    {
        lucro = produto + (produto*45/100);
        printf("O valor da venda e de: %.2f", lucro);
        return 1;

    }
    else if (produto >= 20.00 && produto <= 50.00)

    {
        lucro = produto + (produto*35/100);
        printf("O valor da venda e de: %.2f", lucro);
        return 1;

    }

    else
    {
        lucro = produto + (produto*25/100);
        printf("O valor da venda e de: %.2f", lucro);
        return 1;
    }


    return 0;
}