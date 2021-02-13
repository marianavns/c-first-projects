#include <stdio.h>

int main()
{
    float celsius,kelvin;
    printf("Qual a temperatura em Celsius a converter para Kelvin? ");
    scanf("%f", &celsius);

    kelvin = celsius + 273;
    
    printf("\n %.1f graus Celsius = %.1f Kelvin.", celsius,kelvin);
    return 0;
}