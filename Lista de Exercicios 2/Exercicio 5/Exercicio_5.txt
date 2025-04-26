#include <stdio.h>

int main()
{
    float preco_gasolina;
    float abastecido;
    float valor_disponivel;

    printf("Digite o preco da gasolina: ");
    scanf("%f", &preco_gasolina);

    printf("Digite o valor disponivel para abastecer: ");
    scanf("%f", &valor_disponivel);

    abastecido = valor_disponivel / preco_gasolina;

    printf("O valor abastecido foi de: %.2f", abastecido);

    return 0;
}