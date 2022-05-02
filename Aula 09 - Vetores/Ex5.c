#include <stdio.h>

int main() {
    float temp[12];
    int m, i, cache;
    char mes[12]={"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"}, cache2;
    for(m=0; m<12; m++){
        scanf("%f", temp[m]);
    }
    for(i=11; i>0; i--) { //j = limite da última posição
        for(m=0; m<i; m++) {
            if(temp[m]>temp[m+1]){
                cache = temp[m];
                cache2 = mes[m];
                temp[m] = temp[m+1];
                mes[m] = mes[m+1];
                temp[m+1] = cache;
                mes[m+1] = cache2;
            }
        }
    }
    printf("o mês de temperatura máxima de %f°C foi %c, o de temperatura mínima %f°C foi %c\n", temp[0], mes[0], temp[11], mes[11]);
    
    return 0;
}