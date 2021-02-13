#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float radius,area;

    printf("## Calculadora de area do circulo ##\nQual o raio do circulo? ");
    scanf("%f", &radius);

    area = 3.1415 * pow(radius, 2);

    printf("Um circulo com raio = %.3f tem a area aproximada de %.3f.", radius, area);

}