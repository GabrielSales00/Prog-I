#include <stdio.h>

float Cubebyvalue(float a);

int main() {
    float x;
    scanf("%f", &x);
    printf("O cubo de %f é %f", x, Cubebyvalue(x));
    return 0;
}

float Cubebyvalue(float a) {
    return a*a*a;
}