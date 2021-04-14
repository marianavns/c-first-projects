// 2) Criar uma função que receba um vetor de caracteres (frase, vetor de char) e retorne a quantidade de palavras(int)?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
char texto[500];
int i, flag = 0, total = 0;

printf("Insira um texto e descubra quantas palavras ele tem: \n");
fgets(texto, 51, stdin);

for (i=0; texto[i]!='\0'; i++) {
	if (!flag && texto[i] != ' ') {
		flag = 1;
		total++;
	} else 
        if (flag && texto[i]==' ') flag = 0;
}
printf("Numero de palavras na frase: %d\n",total);

return 0;
}