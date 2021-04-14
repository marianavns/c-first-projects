// Os juros simples em um empréstimo são calculados pela fórmula juros = capital * taxa * dias / 365. 

// A fórmula anterior admite que taxa seja a taxa anual de juros e, portanto, inclui a divisão por 365(dias). 

// Desenvolva um programa em C que receba os valores de capital, taxa e dias de vários empréstimos, calcule os juros simples de cada empréstimo e os exiba, usando a fórmula anterior.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, days;
    float annualRate, dailyRate, capital, interest;

    for (i = 0; i >= 0; i++){
        printf("Entre com o valor do emprestimo (-1 para finalizar): R$ ");
        scanf("%f", &capital);
        if (capital != -1) {
            printf("Entre com a taxa de juros (anual): ");
            scanf("%f", &annualRate);
            printf("Entre com o periodo do emprestimo em dias: ");
            scanf("%d", &days);
            interest = capital * annualRate * days / 365;
            printf("O valor dos juros: R$%.2f\n\n", interest);
        } else {
            printf("A aplicacao foi encerrada.");
            i = -2;
        }  
    }
    return 0;
}