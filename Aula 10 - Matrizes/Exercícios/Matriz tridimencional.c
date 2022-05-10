#include <stdio.h>
#define N 2

int main () {
    int m1[N][N][N];
    int nlin, l, ncol, c, i, ni;
    printf("Por favor, especifique as dimensões da matriz:");
    scanf("%d %d %d", &nlin, &ncol, &ni);
    for(i=0; i<ni; i++) {
        for(l=0; l<nlin; l++) {
            for(c=0; c<ncol; c++ ) {
                scanf("%d", &m1[i][l][c]);
            }
        }
    }
    for(l=0; l<nlin; l++) {
        printf("{");
        for(i=0; i<ni; i++) {
            printf("{");
            for(c=0; c<ncol; c++ ) {
                printf("%d", m1[i][l][c]);
            }
            printf("}");

        }
        printf("}\n");
    }
    return 0;
}