#include <stdio.h>

int main()

{
    int divisor;
    int intervalo1;
    int intervalo2;
    int x;
    int sair;

    do
    {

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &intervalo1);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &intervalo2);

    printf("Números divisiveis por %d no intervalo de %d a %d:\n", divisor, intervalo1, intervalo2);

    for(x = intervalo1; x <= intervalo2; x++)
    {
        if(x % divisor == 0)
        {
            printf("%d\n", x);
        }
    }
    printf("Deseja sair?\n");
    printf("1 - Continuar\n");
    printf("0 - Sair");
    scanf("%d", &sair);

    }while(sair != 0);

    
    return 0;
}