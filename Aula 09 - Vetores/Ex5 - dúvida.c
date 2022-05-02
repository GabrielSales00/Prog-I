#include <stdio.h>

int main() {
    float temp[12];
    int m, i, cache, mes[12]={1,2,3,4,5,6,7,8,9,10,11,12}, cache2;
    char max, min;
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
    switch (mes[0]) {
    case 1:
        max = "Janeiro";
        break;
    
    case 2:
        max = "Fevereiro";
        break;
    
    case 3:
        max = "Março";
        break;

    case 4:
        max = "Abril";
        break;

    case 5:
        max = "Maio";
        break;

    case 6:
        max = "Junho";
        break;

    case 7:
        max = "Julho";
        break;

    case 8:
        max = "Agosto";
        break;

    case 9:
        max = "Setembro";
        break;

    case 10:
        max = "Outubro";
        break;

    case 11:
        max = "Novembro";
        break;

    case 12:
        max = "Dezembro";
        break;
    
    default:
        printf("Algo errado.");
        break;
    }
    switch (mes[11]) {
        case 1:
            min = "Janeiro";
            break;
        
        case 2:
            min = "Fevereiro";
            break;

        case 3:
            min = "Março";
            break;
        
        case 4:
            min = "Abril";
            break;
        
        case 5:
            min = "Maio";
            break;
        case 6:
            min = "Junho";
            break;
        case 7:
            min = "Julho";
            break;
        case 8:
            min = "Agosto";
            break;
        case 9:
            min = "Setembro";
            break;
        case 10:
            min = "Outubro";
            break;
        case 11:
            min = "Novembro";
            break;
        case 12:
            min = "Dezembro";
            break;
        default:
            break;
    }


    printf("o mês de temperatura máxima de %f°C foi %c, o de temperatura mínima %f°C foi %c\n", temp[0], max, temp[11], min);
    
    return 0;
}