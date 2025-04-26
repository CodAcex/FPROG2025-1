#include <stdio.h>

int main()

{
    float preco_original;
    float desconto = 5.0;
    float imposto;
    float preco_final;

    printf("Digite o Valor Original do Produto: ");
    scanf("%f", &preco_original);
    imposto = (preco_original*10/100);
    preco_final = (preco_original + imposto) - desconto;

    printf(" Valor final do Produto : %.2f", preco_final);



    return 0;
}