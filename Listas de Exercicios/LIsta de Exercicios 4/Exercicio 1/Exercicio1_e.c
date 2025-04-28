#include <stdio.h>

int main()

{
  int numero;
  int cont;
  int soma = 0;
  float media;

  for (cont = 1; cont <=15; cont++)
  {

    printf("Digite o %d numero: ", cont);
    scanf("%d", &numero);

    soma += numero; 
  }

  media = soma / 15;
  printf("A soma desses numeros e: %d\n", soma);
  printf("A media deses numeros e: %.2f\n", media);
  

  return 0;
}