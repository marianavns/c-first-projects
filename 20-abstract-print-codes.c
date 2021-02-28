#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    printf("\t%s\n\n", "# Este programa faz varios testes com a funcao printf #");
        // \t dá um "tab" na linha!
    
    char letra = 'A';
    printf("\n%c equivale ao numero %d\n Usei %%c para imprimir o caracter e %%d para ver quanto ele vale na tabela UNICODE.\n", letra, letra, letra, letra);
        // %c significa "caracter", %d significa "decimal".
        // Ou seja, esta linha vai puxar o caracter que ta guardado na variável "letra" e vai puxar o valor que o caracter "letra" corresponde na tabela UNICODE.

    char *nome = "LinguagemC";
    printf("\n%54s\n", nome);
    printf("%5s", "Mariana");
        // ou apenas printf(nome). Tanto faz.

    int a = 15;
    printf("\n(Numero %i) = (%d em decimal) = (%X em hexadecimal) = (%o em octal) = (%u sem sinal)\n", a, a, a, a, a);
        // %i: imprime o inteiro decimal com sinal, 
        // %X: imprime este valor em hexadecimal,
        // %o: imprime o valor em octal, 
        // %u: imprime apenas numeros sem sinal. Não serve para muita coisa por enquanto.

    unsigned int b = 10;
    printf("\n%d\n", b);

    short int d = 12;
    printf("\n(Numero %hd) = (%hx em hexadecimal minusculo)\n", d, d);
        // %h é usado para números short: %hd é para imprimir o short em decimal e %hx para hexadecimal.

    double e = 1.5e-2;
    printf("\n(%e em notacao cientifica) = (%.4lf em double com 4 casas) = (%.4le em notacao cientifica)\n", e, e, e);
        // %lf é usado para imprimir números double no formato normal.
        // Se for guardada uma notacao cientifica no double, ele vai mostrar um número normal. 
        // Depois do % ainda podemos colocar um ".algum número" para delimitar quantas casas teremos após o ponto. 

    float f = 1995.89;
    printf("\n(%.2f em float com 2 casas) = (%.4f em float com 4 casas) = (%.3e em notacao cientifica)\n", f, f, f);
	
	return 0;
}
