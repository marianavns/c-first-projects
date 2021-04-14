// O concreto usinado pronto é comprado por m³, ou seja, para descobrir quanto comprar é necessário calcular o volume das peças que serão construídas. Neste caso as peças podem ser as sapatas, viga baldrame, colunas, vigas, lajes, e assim por diante. 

// Supondo que você foi contratado para comprar o concreto necessário para encher 15 colunas de concreto armado de uma casa: Então, o volume de cada coluna será: Volume da coluna = largura x comprimento x altura. Faça um programa para ler os parâmetros de cada coluna , dados em metros (largura, comprimento e altura) e calcule o volume total a ser contratado para as 15 colunas da casa. Não esqueça de inserir um fator corretor referente às perdas de 10%.

#include <stdio.h>

int main (int argc, char *argv[]) {

    float largura, comprimento, altura, volumetotal, volumeCorrigido, fatorCorretor; 
    int colunas, i;

    fatorCorretor = 0.1;
    colunas = 15;

    for (i = 0; i >= 0; i++) {

        printf("\n## Calculadora para Concreto ##\nInsira a largura das colunas em metros (-1 para sair da aplicacao): ");
        scanf("%f", &largura);

        if (largura != -1) {
            printf("Insira o comprimento das colunas em metros: ");
            scanf("%f", &comprimento);
            printf("Insira a altura das colunas em metros: ");
            scanf("%f", &altura);

            volumetotal = largura * comprimento * altura * colunas;
            volumeCorrigido = volumetotal * (1+fatorCorretor);

            printf("Volume total para %d colunas = %.2f metros cubicos mas, considerando possiveis perdas de ate %.1f%%, volume total de seguranca = %.2f metros cubicos de concreto.\n\nReiniciando a aplicacao...", colunas, volumetotal, fatorCorretor*100, volumeCorrigido);
        } else {
            printf("\nA aplicacao foi encerrada.");
            i = -10;
        }
    }

}