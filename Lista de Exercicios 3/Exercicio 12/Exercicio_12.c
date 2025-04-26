#include <stdio.h>

int main()

{
    int idade;

    printf("Insira a idade do nadador: \n");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7)
    {
        printf("A sua categoria sera Infantil A!");
    }
    else if(idade >= 8 && idade <= 10)
    {
        printf("A sua categoria sera Infantil B!");
    }
    else if(idade >= 11 && idade <= 13)
    {
        printf("A sua categoria sera Juvenil A!");
    }
    else if(idade >= 14 && idade <= 17)
    {
        printf("A sua categoria sera Juvenil B!");
    }
    else if(idade >= 18)
    {
        printf("A sua categoria sera Senior!");
    }
    else
    {
        printf("Idade Inserida Invalida, 5 anos ou superior!");
    }

    return 0;
}