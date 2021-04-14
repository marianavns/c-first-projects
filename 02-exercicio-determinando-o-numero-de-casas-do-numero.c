#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    // No último exemplo do arquivo anterior, recebemos um float com 2 casas após a vírgula, mas conseguimos fazer com que a saída tivesse 4 números após a vírgula.
    // Isso é possível com a formatação da saída. Exemplo:

    float numeroFracionario = 87.5;
    printf("(Numero %f com quatro casas = %.4f", numeroFracionario, numeroFracionario);
}