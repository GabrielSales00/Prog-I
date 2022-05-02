#include <stdio.h>

int main() {
    int x[10], y[10], i;
    for(i=0; i<10; i++) {
        scanf("%d", &x[i]);
    }
    for(i=0; i<10; i++) {
        scanf("%d", &y[i]);
    }
    for(i=0; i<10; i++) {
        if(i==9) {
            printf("%d|%d|\n", x[i], y[i]);
        }
        else{
            printf("%d|%d|", x[i], y[i]);
        }
    }
return 0;
}