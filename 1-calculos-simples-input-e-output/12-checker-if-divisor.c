#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;

    printf("Insira o primeiro numero: ", a);
    scanf("%d", &a);

    printf("Insira o segundo numero: ", b);
    scanf("%d", &b);

    if ( a != 0 && b != 0) {
        if (a % b == 0){
            printf("O numero %d é divisivel por %d.", a, b);
        } else {
            printf("O numero %d nao é divisivel por %d.", a, b);
        }
    } else {
        printf("Por favor, insira numeros diferentes de zero.");
    }
}