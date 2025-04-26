#include <stdio.h>

int main()
{
    float peso;
    float preco_peso = 40.00;
    float valor_final;

    printf("Peso do prato(em gramas): ");
    scanf("%f", &peso);
    valor_final = (preco_peso*peso)/1000;
    
    printf("Valor total do prato: %.2f", valor_final);

    return 0;
}