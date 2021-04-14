// teste de mesa

#include <stdio.h>
#include <stdlib.h>

int main () {

    int input;

    printf("Insira um numero e veja qual a soma dos quadrados de todos os termos ate chegar neste numero: ");
    scanf("%i", &input);
    int y, x = 1, total = 0;

    while ( x <= input) {
        y = x * x;
        total += y;
        x++;
    }

    printf("A soma de todos os quadrados ate chegar em %i eh %d", input, total);
return 0;
}