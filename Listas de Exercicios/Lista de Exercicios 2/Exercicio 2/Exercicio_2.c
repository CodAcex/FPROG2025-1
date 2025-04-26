#include <stdio.h>

int main()
{
    float dolar;
    float real;
    float cotacao;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("Digite a quantidade que deseja comprar(em dolares): ");
    scanf("%f", &dolar);
    real = dolar*cotacao; 

    printf("O valor a ser pago (em reais) e: %.2f", real);

    return 0;
}    