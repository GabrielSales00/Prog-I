#include <stdio.h>
void Cubebyreference(float *xPtr) {
    *xPtr = *xPtr * *xPtr * *xPtr;
}
int main() {
    float x;
    scanf("%f", &x);
    Cubebyreference(&x);
    printf("o valor é %f", x);
    return 0;
}