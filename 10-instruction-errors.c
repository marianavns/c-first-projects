    #include <stdio.h>
    #include <stdlib.h>

    int main(int argc, char *argv[])
    {
        int valor, x, y, a, b;
        char *nome;

        nome = "mariana";
        printf("%s", nome);

// COMO ESCREVER INSTRUÇÕES BÁSICAS?
// ALGUMAS INSTRUÇÕES ESTÃO ERRADAS. CORRIJA:
            
// a) scanf("d", valor);
        // A forma certa de capturar uma entrada no usuário é:
    scanf("%d", &valor);
        // dois parâmetros:
        // - em que formato vou capturar o dado? "%__"
        // - em que variável vou guardar este dado? &______

// b) printf("O produto de %d e %k é %d"\n, x, y) ;
        // A instrução "%k" não existe em C;
        // O "\n" precisa estar dentro das aspas para pular uma linha;
        // A forma correta é:
    printf("O produto de %d e é %d\n", x, y) ;

// c) primeiroNumero + segundoNumero = somaDosNumeros
        // Falta o ponto e vírgula
        
// d) // não inserido
        // A forma certa de fazer comentário é /* */

// e) Scanf ("%á", umlnteiro) ;
        // A instrução "%á" não existe em C;
        // scanf precisa estar em letra minúscula;
        // falta o símbolo "&" antes da variável "unInteiro"

// f) printf("0 resto de %d dividido por %â e\n", x, y, x % y);
        // A instrução "%â" não existe em C;
        // O resultado da divisão não foi referenciado no printf;
        // A forma correta é:
    printf("0 resto de %d dividido por %d e %d\n", a, b, a % b);
    

// g) print("A soma e %d\n, " x + y) ;
        // A vírgula para dividir os dois parâmetros do printf precisa estar fora dos parênteses;
        // O nome da função é "printf" e não "print".
        // A forma correta é:
    printf("A soma e %d\n ", a + b);

// h) Printf("O valor fornecido e: %d\n, &valor);
        // O nome printf precisa estar em minúsculo;
        // Falta fechar as aspas no primeiro parâmetro;
        // O printf não precisa de "&" no segundo parâmetro;
        // A forma correta é:
    printf("O valor fornecido e: %d\n", &valor);
    }
