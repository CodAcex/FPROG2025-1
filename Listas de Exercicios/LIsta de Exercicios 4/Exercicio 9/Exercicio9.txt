#include <stdio.h>

int main()

{  
    int entrada;
    char caractere;
    int x;
    int j;


    printf("Digite um número: ");
    scanf("%d", &entrada);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);


    for(x = 1; x <= entrada; x++)
    {   
        for(j = 1; j <= x; j++)
        {
        printf(" %c", caractere);
        }
        printf("\n");
    }
   
    return 0;
}