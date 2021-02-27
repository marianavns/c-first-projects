// Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. Faça um programa que calcule o valor total de uma compra a ser paga por uma determinada pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int code, commonCode, vipCode, employeeCode;
    float commonDiscount, employeeDiscount, vipDiscount, purchase;

    commonCode = 1;
    employeeCode = 2;
    vipCode = 3;
    commonDiscount = 0;
    employeeDiscount = 0.1;
    vipDiscount = 0.05; 

    printf("\t## Calculadora para valor final da compra ##\n");
    printf("Insira o valor total da compra: R$");
    scanf("%f", &purchase);

    if (!purchase) {
        printf("Insira um valor valido para a compra. O programa sera encerrado.");
    } else {
        printf("\nInsira o codigo verificador do cliente: ");
        scanf("%d", &code);
    
        if (code == employeeCode) {
            purchase -= purchase*employeeDiscount;
            printf("Valor final da compra (desconto disponivel para funcionario = %.1f%%) = R$%.2f", employeeDiscount*100, purchase);
        } else {
            if (code == vipCode) {
                purchase -= purchase*vipDiscount;
                printf("Valor final da compra (desconto disponivel para cliente vip = %.1f%%) = R$%.2f", vipDiscount*100, purchase);
            } else {
                if (code == commonCode) {
                    purchase -= purchase*commonDiscount;
                    printf("Valor final da compra (desconto disponivel para cliente comum = %.1f%%) = R$%.2f", commonDiscount*100, purchase);
                } else {
                    printf("Por favor insira um codigo para o cliente. As opcoes sao:\n1: cliente comum;\n2: funcionario;\n3: cliente vip\n");
                }
            }
        }
        return 0;
    }
    return 0;
}
