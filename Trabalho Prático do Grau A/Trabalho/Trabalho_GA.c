#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{

    int menu;
    int populacao = 0;
    int infectadas = 0;
    int infectadas_inicial;
    float contagio; //taxa de contágio
    float contagio_atual;
    float vacinados_pop; //população de vacinados
    float efetividade_vacina;
    int infectados_novos = 0;
    int suscetiveis = 0;
    int suscetiveis_final = 0;
    int dias = 1;
    int vacinados_total = 0;
    int nao_vacinados = 0;
    int nao_vacinados_saudaveis = 0;
    int vacinados_saudaveis = 0;
    int vac_suscetiveis;
    int vacinados_infectados = 0;
    int vac_infectados_dia = 0;
    int sorteado;
    int i = 1;
    int pop_saudaveis;
    
    

    srand(time(NULL));

    do
    {
      
    printf("Bem vindo!\n");  //menu
    printf("Selecione a opção desejada:\n");
    printf("1 - Nova Simulação\n");
    printf("2 - Sair do Programa\n");
    printf("Sua Escolha: ");
    scanf("%d", &menu);

    if (menu == 1)
    {
        printf("Apresente as seguintes informações\n");
        printf("População Total: ");
        scanf("%d", &populacao);
        printf("Número de pessoas inicialmente infectadas: ");
        scanf("%d", &infectadas_inicial);
        printf("Taxa de contágio(0 a 100%%): ");
        scanf("%f", &contagio);
        printf("Porcentagem da população vacinada(0 a 100%%): ");
        scanf("%f", &vacinados_pop);
        printf("Efetividade da vacina(0 a 100%%): ");
        scanf("%f", &efetividade_vacina);
        printf("Número de dias da simulação: ");
        scanf("%d", &dias);

        vacinados_total = populacao * (vacinados_pop / 100);

        vacinados_saudaveis = vacinados_total * (1-(efetividade_vacina / 100));

        vac_suscetiveis =  vacinados_total - vacinados_saudaveis;

        nao_vacinados_saudaveis = populacao - vacinados_total - infectadas;

        suscetiveis = populacao - vacinados_saudaveis - infectadas;

        infectadas = infectadas_inicial;

        printf("Dia 1: %d infectados \n", infectadas);

        for (i = 2; i < dias; i++)
    {
        contagio_atual = contagio;

        sorteado = rand() % 100 + 1;  //sorteio de entre numeros
       

        if(sorteado <= 5) //os eventos, caso ocorram, irão aparecer em cima do dia em que ocorreram, pois não consegui colocar no lado :)
        {
            contagio *= 1.5;
            printf("Evento: Mutação mais Contagiosa!\n");
        }

        else if(sorteado <= 10)
        {
            contagio *= 0.7;
            printf("Evento: Mídia gera alerta!\n");
            
        }
        else if(sorteado <= 20)
        {
            contagio *= 0.8;
            printf("Evento: Isolamento voluntário!\n");
            
        }
        else if(sorteado <= 35)
        {
            contagio *= 1.25;
            printf("Evento: Aglomeração!\n");
        }  

        infectados_novos = (infectadas_inicial*contagio_atual / 100); //taxa de novos infectados

        vacinados_infectados = (1 - (efetividade_vacina / 100)) * infectados_novos * (vacinados_total / populacao);

        vacinados_infectados += vac_infectados_dia; //somatório dos infectados vacinados

        suscetiveis -= infectados_novos; //calculo entre os suscetiveis e infectados novos, de modo que os infectados novos não ultrapassem os suscetiveis

        infectadas += infectados_novos;//somatorio dos infectados novos

        printf("Dia %d: %d infectados (+%d)\n", i, infectadas, infectados_novos);
        
    }
        if(suscetiveis <= 0)
        {
            printf("A população inteira foi infectada pelo vírus!");
            return 0;
        }

        pop_saudaveis = populacao - infectadas; // população saudável final
        nao_vacinados = populacao - vacinados_total;  //população não vacinada

        printf("População: %d\n", populacao);
        printf("Infectados Iniciais: %d\n", infectadas_inicial);
        printf("Taxa de Contágio: %.2f%%\n", contagio);
        printf("População Vacinada: %d\n", vacinados_total);
        printf("Efetividade da Vacina: %.2f%%\n", efetividade_vacina);
        printf("Dias Simulados: %d\n", dias);    
        printf("Total de Infectados: %d\n", populacao);
        printf("População Vacinada: %d\n", vacinados_total);
        printf("População Não Vacinada: %d\n", vacinados_total);
        printf("Vacinados Infectados: %d\n", vacinados_infectados);
        printf("População Saudavel: %d\n\n\n", pop_saudaveis);
        

    }
    else if (menu == 2)
    {
        printf("Programa finalizado com sucesso!");
        return 0;
    }
    else
    {
        printf("Opção inválida, tente novamente!");
        return 0;
    }

    }
    while (menu != 2);



    return 0;

}