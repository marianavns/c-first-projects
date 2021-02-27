#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float real,rate,results;
    printf("# Conversor de real para dolar #");

    printf("\nInsira o valor em reais a ser convertido: ");
    scanf("%f", &real);

    printf("Qual o valor, em reais, de um dolar hoje? ");
    scanf("%f", &rate);

    results = real / rate;
    
    printf("\nR$ %.2f = US$ %.2f.", real,results);
    return 0;
}