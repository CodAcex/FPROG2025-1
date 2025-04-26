#include <stdio.h>

int main()
{
    float grauA;
    float grauB;
    float nota_final;

    printf("Digite sua nota do grau A: ");
    scanf("%f",&grauA);
    printf("Digite sua nota do grau B: ");
    scanf("%f", &grauB);

    nota_final = (grauA/3) + (grauB*2/3);

    printf("Sua nota final e: %.2f", nota_final);

    return 0;
}