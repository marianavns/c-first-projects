#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int number;
    printf("## Impar ou par? ##\nInsira um numero e veja se temos um impar ou par: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Temos um numero par");
    } else {
        printf("Temos um numero impar");
    } 
    return 0;
}