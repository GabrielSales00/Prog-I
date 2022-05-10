#include <stdio.h>
#define N 20

int main() {
    int m1[N][N], m2[N][N], m3[N][N];
    int l, c, nlin, ncol;
    printf("Entre com os num de linhas e colunas\n");
    scanf("%d %d",&nlin,&ncol); /* nlin e ncol < 20*/
    printf("Entre com os elementos da matriz 1\n");
        for (l=0; l < nlin; l++) //percorre linhas
            for (c=0; c < ncol; c++) //percorre colunas
                scanf("%d",&m1[l][c]);
    printf("Entre com os elementos da matriz 2\n");
    for (l=0; l < nlin; l++) //percorre linhas
        for (c=0; c < ncol; c++) //percorre colunas
            scanf("%d",&m2[l][c]);
        /* soma as matrizes */
    for (l=0; l < nlin; l++)
        for (c=0; c < ncol; c++)
            m3[l][c] = m1[l][c] + m2[l][c];
    /* imprime o resultado */
    printf("Resultado: \n");
    for (l=0; l < nlin; l++) {
        for (c=0; c < ncol; c++)
            printf("%2d ",m3[l][c]);
    printf("\n");
    }
    return 0;
}