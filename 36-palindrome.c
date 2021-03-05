// Um palíndromo é um número ou texto que é lido da mesma forma tanto da direita para a esquerda como da esquerda para a direita. Por exemplo, cada um dos inteiros seguintes, de cinco dígitos, é palíndromo: 12321,55555,45554 e 11611.

// Escreva um programa que leia um inteiro de cinco dígitos e determine se ele é palíndromo ou não. (Sugestão: Use os operadores divisão e resto, para separar o número em seus algarismos isolados.)

#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, number, n1, n2, n4, n5;

    for (i = 0; i >= 0; i++) {

        printf("Insira um numero (-1 para sair da aplicacao): ");
        scanf("%i", &number);
        if (number != -1) {

            if (number/10000){
                n1 = number/10000;
                n2 = number%10000/1000;
                n4 = number%100/10;
                n5 = number%10;
                if (n1 == n5 && n2 == n4) {
                    printf("%d -> palindromo\n", number);
                } else {
                    printf("%d -> nao palindromo.\n", number);
                }
            } else {
                printf("Por favor, insira um numero de 5 digitos.\n");
            }

        } else {
            printf("Aplicacao encerrada.\n");
            i = -2;
        }
    }
    return 0;
}