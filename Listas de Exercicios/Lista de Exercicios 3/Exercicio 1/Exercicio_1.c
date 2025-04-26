#include <stdio.h>

int main()

{

    float divisor;
    float dividendo;
    float resultado;


    printf("Digite o primeiro numero: \n");
    scanf("%f", &dividendo);

    printf("Digite o segundo numero: \n");
    scanf("%f", &divisor);

    if (divisor != 0)
    {
        resultado = dividendo / divisor;

        printf("O Resultado e: %.2f", resultado);

    }

    else

        printf("Nao e possivel dividir por zero ");
    
    return 0;
}