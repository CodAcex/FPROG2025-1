#include <stdio.h>
#include <string.h>


float calcularMedia(float grauA, float grauB)
{
    float res = (grauA + 2* grauB)/3.0;
    return res;
}

int main()
{
    float grauA = 0;
    float grauB = 0;
    printf("Digite a nota do seu Grau A: ");
    scanf("%f", &grauA);
    printf("Digite a nota do seu Grau B: ");
    scanf("%f", &grauB);

    float media = calcularMedia(grauA,grauB);
    printf("%.2f\n",media);

    return 0;
}
