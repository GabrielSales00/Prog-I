#include <stdio.h>

int main() {
    float notas[30], media, soma = 0;
    int i;
    printf("Por favor, insira as notas:");
    for(i=0; i<30; i++) {
        scanf("%f", &notas[i]);
        if(notas[i] > 10 || notas[i] < 0) {
            printf("nota inválida, cabeça de teta. Insira novamente\n");
            scanf("%f", &notas[i]);
        }
        else {
        soma += notas[i];
        media = soma/30;
        }

    }
    for(i=0; i<30; i++) {
        if(notas[i] > media) {
            printf("O alecrim dourado %d tirou a nota %f, que é maior que a média %f. Palmas sarcásticas.\n", i, notas[i], media);
        }
    }
        
    return 0;
}