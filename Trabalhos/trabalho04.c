#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define size 1001

int main() {
    char x[size], M[size], m[size], d[size];
    int i = 0, j = 0, num = 0, chars;
    fgets(x, size - 1, stdin); //recebe até 1000 caracteres, pois o a[1000] = /0
    while(x[i] != '\0') { //conta o número de caracteres diferentes de /0
        num++;
        i++;
    }
    for(i = 0; i < num; i++) { //teste dos intervalos ascii de cada vetor
        if(x[i] >= 'A' && x[i] <= 'Z') {
            M[i] = x[i];
        }
        else if(x[i] >= 'a' && x[i] <= 'z') {
            m[i] = x[i];
        }
        else if(x[i] >= '0' && x[i] <= '9') {
            d[i] = x[i];
        }

    }
    printf("Caracteres Maiusculos:\n");
    for(i = 'A', j = 0, chars = 0; i <= 'Z'; i++) { //intervalo dos maiúsculos
        printf("%c: ", i);
        while(x[j] != '\0') { //enquanto o valor for diferente de /0
            if(x[j] == i) {
                printf("*");
                chars++;
            }
            j++;
        }
        printf(" ");
        printf("(%d - %.2f)\n", chars, (float)chars/num);
    }

    return 0;
}