#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float score;
    
    printf("## Voce foi aprovado? ##\nInsira sua nota ");
    scanf("%f", &score);

    if (score >= 0 && score <= 10) {
        if (score >= 7) {
            printf("Parabens, voce foi aprovado!");
        } else {
            printf("Voce nao foi aprovado.");
        }
    } else {
        printf("Por favor, insira uma nota de 0 a 10.");
    }

    return 0;

}