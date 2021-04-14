// 3) Desenvolva um programa em C que determine se um cliente de uma loja de departamentos excedeu o limite de crédito de sua conta. Os seguintes dados de cada cliente estão disponíveis: 
// a) Número da conta 
// b) Saldo no início do mês 
// c) Total de todos os encargos desse cliente nesse mês 
// d) Total de todos os créditos aplicados à conta desse cliente nesse mês 
// e) Limite de crédito autorizado. 
// O programa deverá ler cada um desses fatos, calcular o novo saldo (= saldo inicial + encargos — créditos) e determinar se o novo saldo é superior ao limite de crédito do cliente. Para os clientes cujo limite de crédito foi ultrapassado, o programa deve exibir o número da conta do cliente, o limite de crédito, o novo saldo e a mensagem "Limite de Crédito Ultrapassado". Veja um exemplo do diálogo de entrada/saída:

// [Insira que a entrada "-1" encerra o programa]

#include <stdio.h>
#include <stdlib.h>

int main () {

    int countNumber, i;
    float earlyDebit, monthCharges, newCredits, creditLimit, newDebit;
  
    for (i = 0; i >= 0; i++) {

        printf("Informe o numero da conta (-1 para terminar): \n> ");
        scanf("%i", &countNumber);
        if (countNumber != -1) {        
            printf("Informe o saldo inicial: \nR$ ");
            scanf("%f", &earlyDebit);
            printf("Informe o total de encargos no mes: \nR$ ");
            scanf("%f", &monthCharges);
            printf("Informe o total de creditos: \nR$ ");
            scanf("%f", &newCredits);
            printf("Informe o limite de creditos: \nR$ ");
            scanf("%f", &creditLimit);          
            newDebit = earlyDebit + monthCharges - newCredits;
            if (newDebit > creditLimit) {
                printf("Numero da conta: %i\nLimite de credito: R$ %.2f\nSaldo: R$ %.2f\nLimite de credito ultrapassado.\n\n", countNumber, creditLimit, newDebit);
            } else {
                printf("O limite de credito nao foi ultrapassado.\n\n");
            }
        } else {
            printf("O programa foi encerrado. \n");
            i = -2;
        }

    }         
    
    return 0;
}
