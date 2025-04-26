#include <stdio.h>

int main()

{
    float salario;
    float desconto;
    float salario_final;

    printf("Insira o salario do funcionario: \n");
    scanf("%f", &salario);

    desconto = salario*11/100;
    salario_final = salario - desconto;
    

    if (desconto <= 318.20)
    {
        printf("O salario final e de: %.2f", salario_final);
    }

    else
    {
        printf("O Desconto exede o valor maximo de 318,20");
    }

    return 0;
}