#include <stdio.h>

int main()
{
    float celsius;  //temperatura em graus celsius
    float fahrenheit; //temperatura em fahrenheit

    printf("Digite a temperatura (em graus celsius): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius*1.8) + 32;

    printf("A temperatura (em fahrenheit) e de: %.2f", fahrenheit);

    return 0;
}