#include <stdio.h>
#include <math.h>
#include <string.h>

float soma(float x, float y);
float produto(float x, float y);
float div(float x, float y);
float raiz(float x, float y);
float potencia(float x, float y);
float sub(float x, float y);

int main() {
    float a, b;
    char opt;
    scanf("%f%c%f", &a, &opt, &b);
    switch (opt)
    {
    case '+':
        printf("%.3f\n", soma(a,b));
        break;
    case '-':
        printf("%.3f\n", sub(a,b));
        break;

    case '*':
        printf("%.3f\n", produto(a,b));
        break;
    
    case '/':
        printf("%.3f\n", div(a,b));
        break;
    
    case '^':
        printf("%.3f\n", potencia(a,b));
        break;

    default:
        break;
    }

    return 0;
}
float soma(float x, float y) {
    return x + y;
}
float produto(float x, float y) {
    return x*y;
}
float div(float x, float y) {
    return x/y;
}
float potencia(float x, float y) {
    return pow(x,y);
}
float raiz(float x, float y) {
    return pow(x,1/y);
}
float sub(float x, float y) {
    return x-y;
}