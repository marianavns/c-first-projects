#include <stdio.h>

int main (){
    int minhaVariavel = 35;
    printf("Endereco da variavel minhaVariavel: %d, valor guardado: %d\n", &minhaVariavel, minhaVariavel);
    minhaVariavel = 40;
    printf("Endereco da variavel minhaVariavel: %d, valor guardado: %d", &minhaVariavel, minhaVariavel);

}