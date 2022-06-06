#include <stdio.h>

void soma(int *aPtr, int *bPtr, int *cPtr, int *dPtr, int *realPtr, int *imgPtr) {
    *realPtr = (*aPtr + *cPtr);
    *imgPtr = (*bPtr + *dPtr);
}
void mult(int *aPtr, int *bPtr, int *cPtr, int *dPtr, int *realPtr, int *imgPtr) {
    *realPtr = (*aPtr * *cPtr - *bPtr * *dPtr);
    *imgPtr = (*aPtr * *dPtr + *bPtr * *cPtr);
}

int main() {
    int a, b, c, d, real, img;
    char op;
    scanf("%d %d %c %d %d", &a, &b, &op, &c, &d);
    switch (op) {
    case '+':
        soma(&a, &b, &c, &d, &real, &img);
        break;
    case '*':
        mult(&a, &b, &c, &d, &real, &img);
        break;
    
    default:
        printf("não funfou");
        break;
    }
    printf("%d + %di\n", real, img);
    return 0;
}