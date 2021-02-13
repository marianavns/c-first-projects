#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float radius,circumference;
    
    printf("## Calculadora de circunferencia ##\nQual o raio do circulo? ");
    scanf("%f", &radius);

    circumference = 2 * 3.1415 * radius;

    printf("O circulo com raio = %.2f tem a circunferencia = %.3f.", radius, circumference);

}