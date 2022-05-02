#include <stdio.h>
int main(){
    float notas[20], dg;
    int i;
    for(i=0; i<20; i++) {
        scanf(" %f", &notas[i]);
    }
    scanf(" %f", &dg);
    for(i=0; i<20; i++) {
        if(dg < 0) {
            break;
        }
        if(dg != notas[i] && i == 19) {
            printf("nao existe\n");
            scanf(" %f", &dg);
            i = 0;
        }
        if (dg == notas[i]) {
            printf("existe\n");
            scanf(" %f", &dg);
            i = 0;
        }
        if (dg == notas[i] && i == 1) {
            printf("existe\n");
            scanf(" %f", &dg);
            i = 0;
        }
    }
return 0;
}
    