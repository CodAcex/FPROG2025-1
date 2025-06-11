#include <stdio.h>
#include <string.h>

void tabuada(int numero)
{
    for(int i = 1; i <= 10; i++)
    {
        int res = numero * i;
        printf("%d x %d = %d\n", numero,i,res);
    }
}

int main()
{
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    tabuada(numero);
    

    return 0;
}
