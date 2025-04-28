#include <stdio.h>

int main()

{
  int i;
  int numero = 0;
  int sequencia = 0;
  int soma = 0;
  
  printf("Insira a quantidade de numeros: ");
  scanf("%d", &numero);

  for(i = 1; i <= numero; i++)
  {
    printf("Digite o %d numero: ", i);
    scanf("%d", &sequencia);

    soma += sequencia;
  }

  printf("A soma dos numeros e de: %d", soma);

  return 0;
}