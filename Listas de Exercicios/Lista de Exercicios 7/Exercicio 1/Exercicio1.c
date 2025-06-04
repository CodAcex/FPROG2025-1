#include <stdio.h>

void cumprimentar()
{
    printf("Olá, %c !",Mensagem());
}

int main ()

{
    char nome[50];

    printf("Digite seu nome: ");
    scanf(" %c", &nome);

    return 0;
}