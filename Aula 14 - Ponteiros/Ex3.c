#include <stdio.h>

#define N 10

void bubblesort(int x[N], int *sizePtr);

int main() {
    int a[N], i, size;
    scanf("%d", &size);
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    bubblesort(a, &size);
    printf("maior valor: %d\nmenor valor: %d\n", a[size - 1], a[0]);
    return 0;
}

void bubblesort(int x[N], int *sizePtr) {
    int j, i, hold;
    for(j = 0; j < *sizePtr - 1; j++) {
        for(i = 0; i < *sizePtr - 1; i++) {
            if(x[i] > x[i + 1]) {
                hold = x[i];
                x[i] = x[i + 1];
                x[i + 1] = hold;
            }
        }
    }
}