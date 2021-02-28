// 3) A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a compreender aquilo que os especialistas chamam de dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento, como qualidade de vida, migrações, fatores socioeconômicos e localização. 

// Sabendo disso, crie um programa que calcule os dois indicadores utilizando o comando switch. Observação : A taxa de natalidade é calculada pela seguinte fórmula: taxa de natalidade = (número de crianças nascidas x 1000) / número de habitantes; Enquanto que a taxa de mortalidade = (números de óbitos x 1000) /número de habitantes.

#include <stdio.h>
#include <stdlib.h>

int main (){

    char input;
    float borns, demises, population, mortalityRate, natalityRate;

    printf("Qual calculadora usar? N para natalidade e M para mortalidade: ");
    scanf("%c", &input);

    printf("Qual o numero total de habitantes? ");
    scanf("%f", &population);

    switch (input) {
        case 'n':
        printf("Qual foi o numero de criancas nascidas? ");
        scanf("%f", &borns);
        borns = borns * 1000;
        natalityRate = borns/population;
        printf("Taxa de natalidade: %.2f.", natalityRate);
        break;

        case 'm':
        printf("Qual foi o numero de criancas falecidas? ");
        scanf("%f", &demises);
        mortalityRate = (demises * 1000)/population;
        printf("Taxa de natalidade: %.2f.", natalityRate);
        break;

        default:
        printf("Entrada invalida.");
        break;
    }
}

