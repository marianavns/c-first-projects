// Os motoristas se preocupam com o consumo de combustível de seus automóveis. 

// Um motorista manteve um registro do número de abastecimentos que fez, registrando também o número de quilômetros rodados e de litros obtidos a cada abastecimento. 

// Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa deverá calcular e exibir a quantidade de quilômetros rodados por litros usados. Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado de quilômetros por litro para todos os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o consumo devem ser definidos, para fins de teste, pelo desenvolvedor.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (int argc, char *argv[]) {
    float 
        totalKm, totalL, supplyL[200], traveledKm[200], average[200];
    int 
        i, s, gasStations;

    printf("Voce abasteceu em quantos postos de gasolina? ");
    scanf("%i", &gasStations);
   
    for (s = 0; s < gasStations; s++) {
        printf("Quantos litros abastecidos no posto %d? ", s + 1);
        scanf("%f", &supplyL[s]);
        printf("Quantos km rodados com este abastecimento? ");
        scanf("%f", &traveledKm[s]);
        average[s] = traveledKm[s]/supplyL[s];       
    }
    printf("Km rodados - litros abastecidos - consumo\n");
    for (i = 0; i < gasStations; i++){
        printf("%.1f km | %.1f l | %.2f km/l\n", traveledKm[i], supplyL[i], average[i]);
    }

//     char *star = "*";
//     int i, s, dimensao;

//     printf("Qual o tamanho do quadrado? ");
//     scanf("%d", &dimensao);

//     for (i = 0; i < dimensao; i++) {
//         for(s = 0; s < dimensao; s++){
//             printf(star);
//         }
//         printf("\n");
//     }

//     }
     // printf("Quantos quilometros dirigidos? ");
    // scanf("%f", &totalKm);
    
    // results = totalKm/totalL;
    // printf("O carro consegue percorrer %.2f quilometros a cada litro.\n", results);

return 0;  
}