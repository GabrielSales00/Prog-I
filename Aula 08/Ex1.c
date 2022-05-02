#include <stdio.h>

int main() {
    int n;
    for(n = 1; n<=20; n++) { //inicialização: a condição inicial; incremento: o que há de ser verificado; teste: a forma de verificação.
        printf("%d\n", n*n); //se verdadeiro, este bloco há de ser realizado.
    }
    return 0;
}
//Observação: C executa funções independentemente da linha pois estas são separadas por ";". Dito isso, cuidado ao usar ";" após o f=