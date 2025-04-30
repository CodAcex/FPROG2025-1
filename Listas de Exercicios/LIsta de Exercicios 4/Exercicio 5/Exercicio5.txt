#include <stdio.h>
#include <ctype.h>

int main()
{
    int x; 
    float GA, GB, GC, GF;
    float mediaGeral;
    float somaNotas = 0.0;

    
    printf("Nro de alunos: ");
    scanf("%d",&x);

   
    for(int i=0; i< x; i++)
    {
        
        printf("Aluno %d, digite as notas do GA e do GB: ",i+1);
        scanf("%f %f",&GA,&GB);
        GF = (GA + 2*GB)/3.0;
        if (GF >= 6.0)
        {
            printf("APROVADO! \n");
        }
        else
        {
            printf("EM GRAU C\n");
            printf("Digite qual o grau a substituir (A ou B): ");
            char grau;
            scanf(" %c",&grau);
            grau = toupper(grau); 
            printf("Digite a nota do GC: ");
            scanf("%f",&GC);
            if (grau == 'A')
            {
                GF = (GC + 2*GB) / 3; 
            }
            else if (grau == 'B')
            {
                GF = (GA + 2 * GC) / 3;
            }
        }
        printf("Grau Final: %f",GF);
        somaNotas = somaNotas + GF;   
    }
    mediaGeral = somaNotas / x;

    printf("Média geral: %f",mediaGeral);

    return 0;
}