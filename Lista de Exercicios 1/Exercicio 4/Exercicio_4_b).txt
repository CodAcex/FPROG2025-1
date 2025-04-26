#include <stdio.h>

int main()

{
   float n1, n2, n3;
   float p1, p2, p3;
   float media_ponderada;

   printf("Digite a nota 1 do aluno: ");
   scanf("%f", &n1);
   printf("Digite a nota 2 do aluno: ");
   scanf("%f", &n2);
   printf("Digite a nota 3 do aluno: ");
   scanf("%f", &n3);
   printf("Digite o peso 1 do aluno: ");
   scanf("%f", &p1);
   printf("Digite o peso 2 do aluno: ");
   scanf("%f", &p2);
   printf("Digite o peso 3 do aluno: ");
   scanf("%f", &p3);
   
   media_ponderada = (n1*p1 + n2*p2 + n3*p3)  / (p1 + p2 + p3);

   printf("Media ponderada: %.2f", media_ponderada);
   

    return 0;
}