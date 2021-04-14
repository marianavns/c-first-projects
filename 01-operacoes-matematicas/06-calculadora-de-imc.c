#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float weight,height,imc;
    printf("# Calculadora de IMC #");

    printf("\nQual o seu peso? Insira aqui: ");
    scanf("%f", &weight);

    printf("Qual sua altura em metros? Insira aqui: ");
    scanf("%f", &height);

    imc = weight / (height * height);
    
    printf("\nO seu IMC: %.2f.", imc);
    return 0;
}