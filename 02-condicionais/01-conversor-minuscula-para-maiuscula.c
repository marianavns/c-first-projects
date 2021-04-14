#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char c = ' ';

    printf("\n## Conversor de letra minúscula para maiuscula ##");

    printf("\nInsira uma letra: ");
    scanf("%c", &c);

    if (c >= 97 && c <= 122) { 
        printf("Complemento: %c", c - 32);
    } else {
        printf("Você nao inseriu uma letra minuscula");
    }
    return 0;
    //comentario
}