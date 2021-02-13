#include <stdio.h>

int main()
{
    float real,taxa,resultado;
    printf("Insira o valor em reais a converter para dolar: ");
    scanf("%f", &real);

    printf("Qual o valor do dolar hoje? ");
    scanf("%f", &taxa);

    resultado = real / taxa;
    
    printf("\nR$ %.2f = US$ %.2f.", real,resultado);
    return 0;
}