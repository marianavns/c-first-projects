// 5) Crie um algoritmo que imprima o gênero de uma pessoa utilizando um dos caracteres (M ou F) como entrada.

#include <stdio.h>
#include <stdlib.h>

int main () {

char genre;          
          
  printf("\nDigite a inicial do genero: ");
  scanf("%c", &genre);

  if ((genre =='m') || (genre =='M'))
      {
      printf  (" \n Genero masculino");
      }
  else if ((genre == 'f') || (genre == 'F'))
      {
      printf("\n Genero feminino ");
      }  
  else
      {
      printf("\n Inicial invalida");
      }
}
