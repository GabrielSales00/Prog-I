#include <stdio.h>

#define size 10

void armazenacubo(int x[size], int y[size]);

int main() {
    int A[size], B[size], i, *BPtr;
    for(i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }
    armazenacubo(A, B);
    for(i = 0; i < size; i++) {
        printf("%d\n", B[i]);
    }
    return 0;
}

void armazenacubo(int x[size], int y[size]) {
    int i;
    for(i = 0; i < size; i++) {
        y[i] = x[i]*x[i]*x[i];
    }
}