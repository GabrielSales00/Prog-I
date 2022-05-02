#include <stdio.h>

int main() {
    float temp[12], max, min;
    int m, i, cache, mês[12];
    for(m=0; m<12; m++){
        scanf("%f", temp[m])
    }
    for(i=11; i>0; i--) { //j = limite da última posição
        for(m=0; m<i; m++) {
            if(temp[m]>temp[m+1]){
                cache = temp[m];
                temp[m] = temp[m+1];
                temp[m+1] = cache;
            }
        }
    }
    
    return 0;
}