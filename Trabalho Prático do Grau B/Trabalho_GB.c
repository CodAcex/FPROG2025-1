#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_PERSONAGENS 5
#define VIDA_INICIAL 100

// Classes
#define GUERREIRO 0
#define MAGO 1
#define CACADOR 2
#define PALADINO 3
#define BARBARO 4

// Estrutura da constituição dos personagens
typedef struct 
{
    int classe;
    int vida;
    int ataque;
    int defesa;
} Personagem;

// Estrutura para habilidades
typedef struct 
{
    int danoExtra;
    int ignoraDefesa;
    int ataquesExtras;
} Habilidade;

// Inicia os personagens de ambas equipes
void inicializarTimes(Personagem time1[], Personagem time2[]) 
{
    int i;
    for (i = 0; i < NUM_PERSONAGENS; i++) 
    {
        time1[i].classe = i;
        time2[i].classe = i;
        time1[i].vida = VIDA_INICIAL;
        time2[i].vida = VIDA_INICIAL;

        if (i == GUERREIRO) 
        {
            time1[i].ataque = 20; time1[i].defesa = 10;
            time2[i].ataque = 20; time2[i].defesa = 10;
        } 
        else if (i == MAGO) 
        {
            time1[i].ataque = 30; time1[i].defesa = 5;
            time2[i].ataque = 30; time2[i].defesa = 5;
        }
        else if (i == CACADOR) 
        {
            time1[i].ataque = 18; time1[i].defesa = 8;
            time2[i].ataque = 18; time2[i].defesa = 8;
        } 
        else if (i == PALADINO) 
        {
            time1[i].ataque = 15; time1[i].defesa = 12;
            time2[i].ataque = 15; time2[i].defesa = 12;
        } 
        else if (i == BARBARO) 
        {
            time1[i].ataque = 25; time1[i].defesa = 6;
            time2[i].ataque = 25; time2[i].defesa = 6;
        }
    }
}

// Exibe os nomes dos personagens de acordo com sua classe
void imprimirClasse(int classe) 
{
    if (classe == GUERREIRO) 
    printf("Guerreiro");

    else if (classe == MAGO)
    printf("Mago");

    else if (classe == CACADOR) 
    printf("Cacador");

    else if (classe == PALADINO) 
    printf("Paladino");

    else if (classe == BARBARO) 
    printf("Barbaro");
}

// Exibe os estado que cada time se encontra
void imprimirEstado(int idTime, Personagem time[]) 
{
    printf("\nEstado do Time %d:\n", idTime);

    for (int i = 0; i < NUM_PERSONAGENS; i++) 
    {
        printf("  Personagem %d (", i);
        imprimirClasse(time[i].classe);
        printf("): Vida = %d\n", time[i].vida);
    }
}

// Vê se os personagens estão todos mortos
int todosMortos(Personagem time[]) 
{
    for (int i = 0; i < NUM_PERSONAGENS; i++) 
    {
        if (time[i].vida > 0) return 0;
    }
    return 1;
}

// Escolhe o atacante de acordo com a relação saude/ataque
int escolherAtacante(Personagem time[]) 
{
    int escolhido = -1;
    float maiorRazao = -1.0;

    for (int i = 0; i < NUM_PERSONAGENS; i++) 
    {
        if (time[i].vida > 0) 
        {
            float razao = (float)time[i].vida / time[i].ataque;
            if (razao > maiorRazao) 
            {
                maiorRazao = razao;
                escolhido = i;
            }
        }
    }
    return escolhido;
}

// Escolhe o alvo que que será atacado
int escolherAlvo(Personagem time[]) 
{
    int vivos[NUM_PERSONAGENS];
    int total = 0;

    for (int i = 0; i < NUM_PERSONAGENS; i++) 
    {
        if (time[i].vida > 0) 
        {
            vivos[total++] = i;
        }
    }

    if (total == 0) 
    return -1;

    return vivos[rand() % total];
}

int chance(int porcentagem) 
{
    return (rand() % 100) < porcentagem;
}

// Aplica a habilidade de acordo com o personagem
Habilidade aplicarHabilidade(int classe) 
{
    Habilidade hab;
    hab.danoExtra = 0;
    hab.ignoraDefesa = 0;
    hab.ataquesExtras = 1;

    if (classe == GUERREIRO && chance(20)) 
    {
        hab.danoExtra = hab.danoExtra + 20;
    }
    if (classe == MAGO && chance(25)) 
    {
        hab.ignoraDefesa = 1;
    }
    if (classe == CACADOR && chance(15)) 
    {
        hab.ataquesExtras = 2;
    }

    return hab;
}


int main() 
{
    Personagem time1[NUM_PERSONAGENS];
    Personagem time2[NUM_PERSONAGENS];

    int rodada = 0;
    int turno;
    int timeAtualId, timeInimigoId;
    int atacanteEscolhido = 0;
    int alvoDoAtaque = 0;

    srand(time(NULL));
    inicializarTimes(time1, time2);

    turno = rand() % 2;

    while (!todosMortos(time1) && !todosMortos(time2) && atacanteEscolhido != -1 && alvoDoAtaque != -1) 
    {
        if (turno % 2 == 0) 
        {
            timeAtualId = 1;
            timeInimigoId = 2;
        } 
        else 
        {
            timeAtualId = 2;
            timeInimigoId = 1;
        }

        if (timeAtualId == 1) 
        {
            atacanteEscolhido = escolherAtacante(time1);
        } 
        else 
        {
            atacanteEscolhido = escolherAtacante(time2);
        }

        if (timeInimigoId == 1) 
        {
            alvoDoAtaque = escolherAlvo(time1);
        } 
        else 
        {
            alvoDoAtaque = escolherAlvo(time2);
        }

        if (atacanteEscolhido == -1 || alvoDoAtaque == -1)
            continue;

        Personagem atacante, defensor;

        if (timeAtualId == 1) 
        {
            atacante = time1[atacanteEscolhido];
        } 
        else 
        {
            atacante = time2[atacanteEscolhido];
        }

        if (timeInimigoId == 1) 
        {
            defensor = time1[alvoDoAtaque];
        } 
        else 
        {
            defensor = time2[alvoDoAtaque];
        }

        int danoTotal = 0;
        Habilidade hab = aplicarHabilidade(atacante.classe);

        danoTotal = danoTotal + hab.danoExtra;
        int ignoraDefesa = hab.ignoraDefesa;
        int ataquesExtras = hab.ataquesExtras;

        if (atacante.classe != BARBARO && chance(20)) 
        {
            printf("Rodada %d: Time %d ", rodada + 1, timeAtualId);
            imprimirClasse(atacante.classe);
            printf(" ERROU o ataque.\n");
        } 

        else 
        {
            int i;
            for (i = 0; i < ataquesExtras; i++) 
            {
                int defesaEfetiva;
                if (ignoraDefesa == 1)
                    defesaEfetiva = 0;

                else if (chance(20))
                    defesaEfetiva = 0;

                else
                    defesaEfetiva = defensor.defesa;

                int base = atacante.ataque - defesaEfetiva;
                if (base < 0) 
                    base = 0;
                danoTotal = danoTotal + base;
            }

            if (timeInimigoId == 1) 
            {
                time1[alvoDoAtaque].vida = time1[alvoDoAtaque].vida - danoTotal;
                if (time1[alvoDoAtaque].vida < 0)
                    time1[alvoDoAtaque].vida = 0;
            } 
            else 
            {
                time2[alvoDoAtaque].vida = time2[alvoDoAtaque].vida - danoTotal;
                if (time2[alvoDoAtaque].vida < 0)
                    time2[alvoDoAtaque].vida = 0;
            }

            printf("Rodada %d: Time %d ", rodada + 1, timeAtualId);
            imprimirClasse(atacante.classe);
            printf(" causou %d de dano ao ", danoTotal);
            imprimirClasse(defensor.classe);
            printf(" do Time %d.\n", timeInimigoId);

            if (defensor.classe == PALADINO) 
            {
                int vidaAtual;
                if (timeInimigoId == 1)
                    vidaAtual = time1[alvoDoAtaque].vida;
                else
                    vidaAtual = time2[alvoDoAtaque].vida;

                if (vidaAtual > 0 && chance(30)) 
                {
                    int perdido = VIDA_INICIAL - vidaAtual;
                    int regen = (perdido * 2) / 10;

                    if (timeInimigoId == 1) 
                    {
                        time1[alvoDoAtaque].vida = time1[alvoDoAtaque].vida + regen;
                        if (time1[alvoDoAtaque].vida > VIDA_INICIAL)
                            time1[alvoDoAtaque].vida = VIDA_INICIAL;
                    } 
                    else 
                    {
                        time2[alvoDoAtaque].vida = time2[alvoDoAtaque].vida + regen;
                        if (time2[alvoDoAtaque].vida > VIDA_INICIAL)
                            time2[alvoDoAtaque].vida = VIDA_INICIAL;
                    }

                    printf("Paladino regenerou %d de vida!\n", regen);
                }
            }
        }

        imprimirEstado(1, time1);
        imprimirEstado(2, time2);

        rodada = rodada + 1;
        turno = turno + 1;
    }

    printf("\n===== FIM DO COMBATE =====\n");
    
    if (todosMortos(time1) && todosMortos(time2)) 
    {
        printf("Empate!\n");
    } 
    else if (todosMortos(time1)) 
    {
        printf("Time 2 venceu!\n");
    } 
    else 
    {
        printf("Time 1 venceu!\n");
    }

    return 0;
}