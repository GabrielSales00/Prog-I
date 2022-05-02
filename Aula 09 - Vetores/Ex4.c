#include <stdio.h>

int main(){
    int qnt[10], i, soma;
    float prc[10], lucro;
    for(i=0; i<10; i++) {
        scanf("%d", &qnt[i]);
        soma += qnt[i];
    }
    for(i=0; i<10; i++){
        scanf("%f", &prc[i]);
        lucro += qnt[i]*prc[i];
    }
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, soma);
    return 0;
}