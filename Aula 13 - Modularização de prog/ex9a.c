#include <stdio.h>
float volume_esfera(float A) {
    float pi = 3.14159;
    return (4*pi*(A*A*A)/3);
}

int main() {
    float A;
    scanf("%f", &A);
    printf("%.2f\n",volume_esfera(A));
    return 0;
}