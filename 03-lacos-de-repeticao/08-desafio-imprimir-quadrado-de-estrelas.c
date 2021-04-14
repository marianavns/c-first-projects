#include <stdio.h>
#include <stdlib.h>

int main () {

    char *star = "*";
    int i, s, dimensao;

    printf("Qual o tamanho do quadrado? ");
    scanf("%d", &dimensao);

    for (i = 0; i < dimensao; i++) {
        for(s = 0; s < dimensao; s++){
            printf(star);
        }
        printf("\n");
    }
  return 0;  
}