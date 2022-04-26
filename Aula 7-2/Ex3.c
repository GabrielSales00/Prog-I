#include <stdio.h>

int main() {
    char c;
    for (c = 32; c >= 32 && c <= 255; c++) { //Observe que "=" é usado para colocar em uma variável um determinado valor (ex: A = B + C é jogar o valor de B + C no endereço de A), enquanto "=="" checa se o valor de dois operandos são verdadeiros, por isso o lado esquerdo não deve ser uma constante.
        printf("%d, %x\n", c, c);
    }
    return 0;
}