#include <stdio.h>

int main() {
    char c;
    while (c != '#') { //quando o c for diferente de "#", observe que usamos '' ao invés de "" pois '' é para identificar caracteres, enquanto "" é para strings
        printf("por favor, digite um caractere:\n");
        scanf(" %c", &c);
        printf("O código ascii deste caractere é: %d\n", c);
    }
    printf("você apertou \"#\", logo, o programa se encerrará.\n");
    return 0;
}