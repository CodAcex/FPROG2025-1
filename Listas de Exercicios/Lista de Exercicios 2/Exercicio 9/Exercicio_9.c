#include <stdio.h>

int main()
{
    float compra;
    float valor_final;

    printf("Insira o preco total da compra: ");
    scanf("%f", &compra);

    valor_final = compra - (compra*15/100);

    printf("O valor final da compra (com desconto): %.2f", valor_final);


    return 0;
}