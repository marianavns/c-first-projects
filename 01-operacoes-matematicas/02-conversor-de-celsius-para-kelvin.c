#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float celsius,kelvin;

    printf("# Conversor de graus Celsius para Kelvin #");

    printf("Qual a temperatura em Celsius a converter para Kelvin? ");
    scanf("%f", &celsius);

    kelvin = celsius + 273;
    
    printf("\n %.1f graus Celsius = %.1f Kelvin.", celsius,kelvin);
    return 0;
}