// 5) Crie um algoritmo que imprima o gênero de uma pessoa utilizando um dos caracteres (M ou F) como entrada.

#include <stdio.h>
#include <stdlib.h>

int main () {

char genre;          
          
  printf("\nDigite a inicial do genero. M para masculino e F para feminino: ");
  scanf("%c", &genre);

  if ((genre == 'm') || (genre == 'M'))
      {
      printf  ("\nGenero masculino.");
      }
  else if ((genre == 'f') || (genre == 'F'))
      {
      printf("\nGenero feminino.");
      }  
  else
      {
      printf("\nInicial invalida.");
      }
}
