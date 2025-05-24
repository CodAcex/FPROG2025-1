#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    int min = 10;
    int max = 90;
    int sorteado;
    int contador = 0;

    int A [10];

    for(int i = 0; i < 10; i++)   //sub item A.
    {
        sorteado = min + rand() % (min - max + 1);
        A[i] = sorteado;
        printf("O valor %d é: %d\n", i, A[i]);
       
    }
    if(sorteado == 50) //sub item C.
    {
        contador++;
    }

    if(sorteado == 50)     //sub item B.
    {
        printf ("Existe o Valor 50\n");
        printf ("Ele aparece %d vezes\n", contador);
    }
    else
    {
        printf("O valor de 50 não existe\n");
    }




    return 0;
}