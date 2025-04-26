#include <stdio.h>

int main() 

{
    float LitroGasolina, ValorPago, LitrosAbastecidos; //Variaveis, Utilizado Uma formatação diferente do exercicio anterior.
   
    printf("Preco da Gasolina: ");
    scanf("%f", & LitroGasolina); //Entrada de Dados
    printf("Litros Abastecidos: ");
    scanf("%f", & LitrosAbastecidos); //Entrada de Dados
    ValorPago = LitroGasolina * LitrosAbastecidos;
    
    printf("Valor a ser Pago = %.2f\n", ValorPago); //Saida de Dados

    return(0);

}