#include <stdio.h>

int main()

{
    float real;
    float dolar;
    float euro;
    float taxa_dolar;
    float taxa_euro;
    float conversao;
    float escolha;

    printf("Informe a cotacao atual do dolar: \n");
    scanf("%f", &taxa_dolar);

    printf("Informe a cotacao atual do euro: \n");
    scanf("%f", &taxa_euro);

    printf("Selecione a conversao desejada\n");
    printf("Real para Euro - 1\n");
    printf("Real para Dolar - 2\n");
    printf("Euro para Dolar - 3\n");
    printf("Euro para Real - 4\n");
    printf("Dolar para Euro - 5\n");
    printf("Dolar para Real - 6\n");
    scanf("%f", &escolha);


    if (escolha == 1)
        {
            printf("Digite a quantia a ser convertida em reais: R$ ");
            scanf("%f", &real);
            conversao = real / taxa_euro;

            printf("O Valor e: € %.2f", conversao);
            return 1;
        }
        else if (escolha == 2)
        {
            printf("Digite a quantia a ser convertida em reais: R$ ");
            scanf("%f", &real);
            conversao = real / taxa_dolar;
            printf("O Valor e: U$ %.2f", conversao);
            return 1;
        }
        else if (escolha == 3)
        {
            printf("Digite a quantia a ser convertida em euros: € ");
            scanf("%f", &euro);
            conversao = (euro*taxa_euro) / taxa_dolar;
            printf("O Valor e: U$ %.2f", conversao);
            return 1;
        }
        else if (escolha == 4)
        {
            printf("Digite a quantia a ser convertida em euros: € ");
            scanf("%f", &euro);
            real = taxa_euro;
            conversao = euro * taxa_euro;
            printf("O Valor e: R$ %.2f", conversao);
            return 1;
        }
        else if (escolha == 5)
        {
            printf("Digite a quantia a ser convertida em dolares: U$ ");
            scanf("%f", &dolar);
            conversao = (dolar*taxa_dolar) / taxa_euro;
            printf("O Valor e: € %.2f", conversao);
            return 1;
        }
        else if (escolha == 6)
        {
            printf("Digite a quantia a ser convertida em dolares: U$ ");
            scanf("%f", &dolar);
            real = taxa_dolar;
            conversao = dolar * taxa_dolar;
            printf("O Valor e: R$ %.2f", conversao);
            return 1;
        }

    
    else
    {
        printf("Escolha invalida!\n");
    }



    return 0;
}