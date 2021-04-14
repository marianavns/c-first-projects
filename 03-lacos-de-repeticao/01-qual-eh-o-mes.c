// 2)Escreva um programa utilizando o comando switch que imprima um determinado mês de acordo com o número digitado pelo usuário.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

int inputValue;
  
printf ("Digite um valor entre 1 e 12 e veja o mes correspondente: ");
scanf("%d", &inputValue);
  
  switch (inputValue) {
    case 1:
    printf ("Janeiro\n");
    break;
    
    case 2:
    printf ("Fevereiro\n");
    break;
    
    case 3:
    printf ("Marco\n");
    break;
    
    case 4:
    printf ("Abril\n");
    break;
    
    case 5:
    printf ("Maio\n");
    break;
    
    case 6:
    printf ("Junho\n");
    break;
    
    case 7:
    printf ("Julho\n");
    break;

    case 8:
    printf ("Agosto\n");
    break;

    case 9:
    printf ("Setembro\n");
    break;

    case 10:
    printf ("Outubro\n");
    break;

    case 11:
    printf ("Novembro\n");
    break;

    case 12:
    printf ("Dezembro\n");
    break;
    
    default:
    printf ("Não existe mes correspondente a este numero.\n");
  }

  return 0;
}
