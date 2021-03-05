// Os motoristas se preocupam com o consumo de combustível de seus automóveis. 

// Um motorista manteve um registro do número de abastecimentos que fez, registrando também o número de quilômetros rodados e de litros obtidos a cada abastecimento. 

// Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa deverá calcular e exibir a quantidade de quilômetros rodados por litros usados. Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado de quilômetros por litro para todos os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o consumo devem ser definidos, para fins de teste, pelo desenvolvedor.

#include <stdio.h>
#include <stdlib.h>

int main () {
    float 
        totalKm, 
        l, 
        totalL, 
        results;
    int 
        gasStations, 
        counter;

    printf("Voce abasteceu em quantos postos de gasolina? ");
    scanf("%i", &gasStations);

    for (counter = 1; counter <= gasStations; counter++) {
        printf("Quantos litros abastecidos no posto %d? ", counter);
        scanf("%f", &l);
        totalL += l;
    }
        
    printf("Quantos quilometros dirigidos? ");
    scanf("%f", &totalKm);
    
    results = totalKm/totalL;
    printf("O carro consegue percorrer %.2f quilometros a cada litro.\n", results);

}