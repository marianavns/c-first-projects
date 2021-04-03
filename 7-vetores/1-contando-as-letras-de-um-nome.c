// 1) Criar uma função que receba um vetor de caracteres (palavra, vetor de char) e retorne a quantidade de caracteres (int)?
#include <stdio.h>

int i = 0;
char palavra[0];

int contar(void);

int main(int argc, char *argv[]){ 
    printf("Insira uma palavra e descubra quantas letras ela tem: ");
    scanf("%s", &palavra);
    printf("A palavra %s tem %d letras.", palavra, contar());
}

int contar(void) {
    for (i; palavra[i] != '\0'; i++) {
    }
    return i;
}


   


