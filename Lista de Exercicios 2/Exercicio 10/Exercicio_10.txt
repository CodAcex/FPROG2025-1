#include <stdio.h>

int main()
{
    float camiseta;
    float calca;
    float cinto;
    float total;  // preço cheio sem desconto
    float desconto;  //valor do desconto
    float total_desconto;

    printf("Insira o numero de camisetas compradas: ");
    scanf("%f", &camiseta);

    printf("Insira o numero de calcas compradas: ");
    scanf("%f", &calca);

    printf("Insira o numero de cintos compradas: ");
    scanf("%f", &cinto);

    total = (camiseta*25.00) + (calca*100.00) + (cinto*40.00);
    desconto = total*10/100;
    total_desconto = total - desconto;


    printf("O valor do desconto e de: %.2f\n", desconto);
    printf("O valor final da compra e de: %.2f", total_desconto);

    return 0;
}