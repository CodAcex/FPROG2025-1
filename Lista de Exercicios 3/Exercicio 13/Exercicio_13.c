#include <stdio.h>

int main()

{
    float gA;
    float gB;
    float gC;
    float media_final;
    char troca; // substituição do grau C

    printf("Insira a nota do Grau A: \n");
    scanf("%f", &gA);

    printf("Insira a nota do Grau B: \n");
    scanf("%f", &gB);

    media_final = (gA + gB * 2) / 3;

    printf("A Media final: %.2f\n", media_final);

    if(media_final >= 6.0)
    {
        printf("Voce foi aprovado\n");
        return 0;
    }
    else
    {
        printf("Voce ficou em recuperacao: ");

        printf("Voce deseja substituir o Grau A ou Grau B (Digite a ou b)?: \n");
        scanf(" %c", &troca);
    }

    printf("Insira a nota do Grau C: \n");
    scanf("%f", &gC);

    if(troca == 'a' || troca == 'A')
    {
        media_final = (gC + gB * 2) / 3;
    }
    else if(troca == 'b' || troca == 'B')
    {
        media_final = (gA + gC * 2) / 3;
    }
    else
    {
        printf ("Opcao inserida incorretamente, tente novamente!");
        return 1;
    }

    printf ("Media final (com a recuperacao): %.2f\n", media_final);

    if (media_final >= 6.0)
    {
        printf ("Aluno Aprovado!");
    }
    else
    {
        printf ("Aluno Reprovado!");
    }
    return 0;
}