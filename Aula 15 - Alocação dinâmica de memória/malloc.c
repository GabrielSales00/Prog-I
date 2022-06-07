#include <stdio.h>
#include <stdlib.h>
int main() {
    float* v;
    float med = 0.0;
    int n;
    int j;
    scanf("%d", &n); //recebe o multiplicador
    v = (float *) malloc (n*sizeof(float)); //(cast: converte para o tipo de v) malloc(aloca um múltiplo do tamanho de um float)
    if (v == NULL) { //verifica se deu certo
        printf("Memoria insuficiente\n");
        return 1;
    }
    for(j = 0; j < n; j++) {
        scanf("%f", &v[j]);
        med += v[j];
    }
    printf("A media é %.2f\n", med/n);
    free(v); //libera a região de memória APONTADA pelo ponteiro v
    return 0;
}