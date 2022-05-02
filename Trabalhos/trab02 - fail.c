#include <stdio.h>

int main() {
    char m[12], m1[12], temp, temp1;
    int i, j, n, k, soma, soma1;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf(" %c%c%c%c%c%c%c%c%c%c%c%c", &m[0], &m[1], &m[2], &m[3], &m[4], &m[5], &m[6], &m[7], &m[8], &m[9], &m[10], &m[11]);
        scanf(" %c%c%c%c%c%c%c%c%c%c%c%c", &m1[0], &m1[1], &m1[2], &m1[3], &m1[4], &m1[5], &m1[6], &m1[7], &m1[8], &m1[9], &m1[10], &m1[11]); //coloque espaço antes do primeiro %c
        for(j=0, soma=0, soma1=0; j<12; j++) {
            soma += m[j];
            soma1 += m1[j];
        }
        if(soma == soma1) { //agora vamos ordenar os elementos de acordo com seus códigos ascii e, então, compará-los
            for(j=11; j>0; j--) { //bubblesort de m
                for(k=0; k<j; k++){
                    if(m[k]>m[k+1]) {
                        temp = m[k];
                        m[k] = m[k+1];
                        m[k+1] = temp;
                    }
                    if(m1[k]>m1[k+1]) {
                        temp1 = m1[k];
                        m1[k] = m1[k+1];
                        m1[k+1] = temp1;
                    }
                }
            }

            for(k=0; k<12; k++) { //enquanto k<12
                if(m[k] == m1[k] && k==11) { //se m[k] = m1[k] E k = 11, então:
                    printf("Caracteristicas Iguais\n");
                }
                else {
                    if(m[k]!=m[k]) { //se m[k] for diferente de m1[k]
                        printf("Caracteristicas Diferentes\n");
                    }
                }
            }

        }
        else {
            printf("Caracteristicas Diferentes\n");
        }

    }
    return 0;
}