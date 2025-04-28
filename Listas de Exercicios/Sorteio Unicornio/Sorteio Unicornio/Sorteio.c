#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int sorteado;
    int min = 1;
    int max = 100;

    srand(time(NULL)); 

    sorteado = min + rand() % (max - min + 1);

    if (sorteado <= 60)
    {
        printf("O Presente sorteado foi: Comum");
    }
      else if (sorteado <= 85)
    {
        printf("O Presente sorteado foi: Especial");
    }
      else if (sorteado <= 95)
    {
        printf("O Presente sorteado foi: Raro");
    }
    else
    {
        printf("O Presente sorteado foi: Lendario");
    }

    return 0;
}