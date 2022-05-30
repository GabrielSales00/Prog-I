#include <stdio.h>

#define N 5

int main()
{
    int nos, i, j, inicio, fim, in, soma=0, visitados[N], min[N] = {200, 200, 200, 200, 200}, ind[N] = {-1, -2, -3, -5, -6};
    int dis[N][N];
    scanf("%d", &nos);
    for(j = 0; j < nos; j++) {
        for(i = 0; i < nos; i++) {
            scanf("%d", &dis[j][i]);
        }
    }
    scanf("%d", &inicio);
    scanf("%d", &fim);
    in = inicio;
    visitados[0] = in;
    for(j = 0; j < nos; j++) {
        for(i = 0; i < nos; i++) {
            if(dis[j][i] == 0) {
                dis[j][i] = 400;
            }
        }
    }
    for(j = inicio; j < fim + 1; j++) {
        for(i = 0; i < nos; i++) {
            if(dis[j][i] < dis[j][i+1] && dis[j][i] < min[j]) {
                min[j] =  dis[j][i];
                ind[j] = i;
                visitados[j] = i;
            }
        }
        soma += min[j];
    }
    
    printf("Distancia total entre %d e %d: %d\n", inicio, fim, soma);
    printf("Caminho: %d",inicio);
    for(i=inicio; i < fim; i++) {
        printf("->");
        printf("%d", visitados[i]);
    }
    printf("\n");


    return 0;
}