#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, c, d, e;

    printf("Insira o primeiro numero\n", a);
    scanf("%d", &a);
    printf("Insira o segundo numero\n", b);
    scanf("%d", &b);
    printf("Insira o terceiro numero\n", c);
    scanf("%d", &c);
    printf("Insira o quarto numero\n", d);
    scanf("%d", &d);
    printf("Insira o quinto numero\n", e);
    scanf("%d", &e);
    
if (a > b){
    a = a;
} else {
    a = b;
}

if (a > c){
    a = a;
} else {
    a = c;
}

if (a > d){
    a = a;
} else {
    a = d;
}

if (a > e){
    a = a;
} else {
    a = e;
}

if (b < c){
    b = b;
} else {
    b = c;
}

if (b < d){
    b = b;
} else {
    b = d;
}

if (b < e){
    b = b;
} else {
    b = e;
}

printf("Maior numero: %d\nMenor numero: %d", a, b);

}