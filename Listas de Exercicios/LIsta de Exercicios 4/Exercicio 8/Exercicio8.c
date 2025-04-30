#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()

{
    int numero;
    int num;
    double resultado = 1;
    char repetir;
    int valido;


    do
    {
        printf("Digite o número desejado para o fatorial: ");
        scanf("%d", &numero);

        resultado = 1;
        
            for (num = 1; num <= numero; num++)
            {
                resultado *= num;
            }
            printf("O fatorial de %d é: %.0f\n", numero, resultado);
     do
     {
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &repetir);
        repetir = toupper(repetir);

        if (repetir != 'S' && repetir != 'N')
        {
        printf("Opção inválida");
        valido = false;
        }   
        else
        {
            valido = true;
        }
     }while (valido == false);     


    } while (repetir == 'S');
    
    
    return 0;
}