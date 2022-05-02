#include <stdio.h>
int main(){
    float notas[20], dg;
    int i;
    for(i=0; i<20; i++) {
        scanf("%f", &notas[i]);
    }
    printf("%f", notas[0]);
    scanf("%f", &dg);
    for(i=0; i<20; i++) {
        if(dg < 0) {
            break;
        }
        if(notas[i] == dg) {
            printf("existe\n");
            scanf("%f", &dg);
            printf("%f", notas[0]);
            i = 0;
        }
        if(dg!= notas[i] && i == 19) {
            printf("nao existe\n");
            scanf("%f", &dg);
            i = 0;
        }
    }
return 0;
}
    