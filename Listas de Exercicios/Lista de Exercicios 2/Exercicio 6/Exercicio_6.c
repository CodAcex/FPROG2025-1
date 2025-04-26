#include <stdio.h>

int main()
{
    float tablet;
    float smartphone;
    float valor_total;

    printf("Digite a quantidade de smartphones vendidos: ");
    scanf("%f", &smartphone);

    printf("Digite a quantidade de tablets vendidos: ");
    scanf("%f", &tablet);

    valor_total = (smartphone*1000.00) + (tablet*1500.00);

    printf("O valor arrecadado no dia e: %.2f", valor_total);

    return 0;
}