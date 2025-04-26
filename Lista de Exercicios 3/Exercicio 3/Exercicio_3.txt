#include <stdio.h>

int main()

{
    float num;
    float result; //resultado positivo e negativo

    printf("Insira um numero( Positivo ou Negativo ): \n");
    scanf("%f", &num);

    if(num >= 0)
   {
    result = num * 2;
    printf("O Resultado e: %.2f", result);
   }

   else
   {
    result = num * 3;
    printf("O Resultado e: %.2f", result);
   }


    return 0;
}