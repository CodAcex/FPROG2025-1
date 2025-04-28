#include <stdio.h>

int main()

{
  int i;
  int num;
  int impar = 0;
  int par = 0;

  for(i = 1; i <= 10; i++)
  {
    printf("Digite o %d numero: ", i);
    scanf("%d", &num);


    if(num % 2 == 0)
      par++;
    else
      impar++; 
    
  }

  printf("Numeros pares: %d \n", par);
  printf("Numeros impares: %d \n", impar);


  return 0;
}