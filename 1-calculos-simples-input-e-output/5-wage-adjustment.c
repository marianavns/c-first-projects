#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float increaseRate,wage,newWage;

    printf("## Calculadora para ajuste de salario minimo ##");

    printf("Qual a taxa de correcao do salario minimo (em porcentagem)? ");
    scanf("%f", &increaseRate);

    printf("Qual o valor do salario recebido? ");
    scanf("%f", &wage);

    newWage = wage * (1+increaseRate/100);
    
    printf("R$ %.2f = salario atualizado (com a taxa do salario minimo).", newWage);
    return 0;
}