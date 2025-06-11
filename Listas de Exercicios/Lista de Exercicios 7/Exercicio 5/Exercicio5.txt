#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char ExibirMenu()
{
    printf("********MENU PRINCIPAL*************\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRAÇÃO\n");
    printf("3 - MULTIPLICAÇÃO\n");
    printf("4 - DIVISÃO\n");
    printf("5 - SAIR DO PROGRAMA\n");
    
    char opcao;
    bool valida;
    do
    {
        printf("Digite uma opcao: ");
        scanf(" %c",&opcao);
        valida = true;
        if (opcao!= '1' && opcao!='2' && opcao!='3' && opcao!='4' && opcao != '5')
        {
            printf("Opcao invalida!\n");
            valida = false;
        }
    } while (valida == false);

    return opcao;
}

float soma(float num1, float num2)
{
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    float res = num1 + num2;

    printf("O resultado é: %.2f\n\n", res);

    return res;
}

float subtrair(float num1, float num2)
{
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    float res = num1 - num2;

    printf("O resultado é: %.2f\n\n", res);

    return res;
}

float multiplicar(float num1, float num2)
{
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    float res = num1 * num2;

    printf("O resultado é: %.2f\n\n", res);

   return res;
}

float dividir(float num1, float num2)
{
    float res;
    printf("Digite o dividendo: ");
    scanf("%f", &num1);

    printf("Digite o divisor: ");
    scanf("%f", &num2);

    if(num2 != 0)
    {
        res = num1 / num2;
    }
    else
    {
        printf("Divisão por zero não existe!");
    }

    printf("O resultado é: %.2f\n\n", res);
    return res;
}

int main()
{
    float num1 = 0;
    float num2 = 0;

    char opcao;
    do {
        opcao = ExibirMenu();
        switch(opcao)
        {
            case '1':
                soma(num1,num2);
                break;
            case '2':
                subtrair(num1,num2);
                break;
            case '3':
                multiplicar(num1,num2);
                break;
            case '4':
                dividir(num1,num2);
                break;
            case '5':
                printf("Saindo do programa!\n");
                break;
        }
    } while (opcao != '5');

    return 0;
}
