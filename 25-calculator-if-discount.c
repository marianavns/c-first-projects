// 4) Dado o valor do produto e a forma de pagamento. 1= à vista; 2= à prazo. Se o produto for pago à vista aplique um desconto de 10% antes de mostrar o valor final, senão informe o mesmo valor do produto.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int code, installmentCode, cashCode;
    float cashDiscount, purchase;

    cashCode = 1;
    installmentCode = 2;
    cashDiscount = 0.1;
    
    printf("\t## Calculadora para valor final da compra ##\n");
    printf("Insira o valor total da compra: R$");
    scanf("%f", &purchase);

    printf("\nInsira a identificacao da compra\n 1 para compras a vista \n 2 para compras a prazo: ");
    scanf("%d", &code);
    
    if (code == cashCode) {
        purchase -= purchase*cashDiscount;
        printf("Valor final (desconto disponivel para compra a vista = %.1f%%) = R$%.2f", cashDiscount*100, purchase);
    } else {
        if (code == installmentCode) {
            printf("Valor final (desconto nao disponivel para compras a prazo) = R$%.2f", purchase);
        } else {
        printf("Por favor insira um codigo para a compra. As opcoes sao:\n1: compra a vista;\n2: compra a prazo.\n");
        }
    }
    return 0;
}