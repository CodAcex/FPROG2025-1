#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX_TAM 20
#define INVERSO 5

int main()

{
    srand(time(NULL));
    int min = 10;
    int max = 90;
    int sorteado;
    int contador = 0;
    double produto = 1;
    int soma = 0; 
    float media;
 
    int A [10];

    for(int i = 0; i < TAM; i++)   //sub item A.
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

    for(int i = 0; i < TAM; i++)
    {
        soma = soma + A[i]; // soma += A[i];
    }
    media = soma / (float) TAM;
    printf("A média é %.2f\n", media);

    //sub item E.
    int maior = A[0];
    int menor = A[0];
    int imaior = 0;
    int imenor = 0;

    for(int i= 1; i < TAM; i++)
    {
        if(A[i] > maior)
        {
            maior = A[i];
            imaior = i;
        }

        if(A[i] < menor)
        {
            menor = A[i];
            imenor = i;
        }
    }

    printf("O maior valor encontrado foi %d no indice %d\n", maior, imaior);
    printf("O menor valor encontrado foi %d no indice %d\n", menor, imenor);

    //sub item F.

    for(int i = 0; i < TAM; i++)
    {
        produto = produto * A[i]; 
    }

    printf("A soma dos valores: %d\n", soma);
    printf("O produto dos valores: %.2f\n", produto);  

    //sub item G. 

    int fim = 9; //fim do indice na qual ocorrerá as trocas.
    int copia; //utilizada para não perder os valores durante a troca.
    for(int i = 0; i < INVERSO; i++)
    {
        copia = A[i];  //copia dos elementos originais
        A[i] = A[fim];  //Troca o ultimo pelo primeiro
        A[fim] = copia;  
        fim--;  
    }

    printf("Vetores em ordem inversa:\n");
    
    for(int i = 0; i < TAM; i++)
    {
    printf("O Valor %d é: %d\n", i, A[i]);
    }

    //sub item H. 

    int I[TAM]; //Outro vetor contendo a ordem inversa de elementos.

    //printf("O Novo vetor\n");
    for(int i = 0; i < TAM; i++)
    {
    I[i] = A[i];
    //printf("O Valor %d é: %d\n", i, I[i]);
    }

    //sub item I.

    int vPares[TAM];
    int vImpares[TAM];

    for(int i = 0; i < TAM; i++)
    {
        if(A[i] % 2 == 0)
        {
            vPares[i] = A[i];
        }
        else
        {
            vImpares[i] = A[i];
        }
    }

    for(int i = 0; i < TAM; i++)
    {
     if(I[i] % 2 == 0)
        {
            vPares[i] = I[i];
        }
        else
        {
            vImpares[i] = I[i];
        }
    }    

    for(int i=0; i < TAM; i++)
    {
        printf("Valor de vPares[%d] é: %d\n", i, vPares[i]);
    }
    for(int i=0; i < TAM; i++)
    {
        printf("Valor de vImpares[%d] é: %d\n", i, vImpares[i]);
    }


    return 0;
}
