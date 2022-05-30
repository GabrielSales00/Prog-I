#include <stdio.h>
#include <math.h>
#include <string.h>

float media_a(float x, float y);
float media_g(float x, float y);
int main() {
    char x[2];
    float a, b;
    scanf("%c", &x[0]);
    if(strncmp(x,"A", 1) == 0) {
        scanf("%f %f", &a, &b);
        printf("%.3f\n", media_a(a, b));
    }
    if(strncmp(x,"B", 1) == 0) {
        scanf("%f %f", &a, &b);
        printf("%.3f\n", media_g(a, b));
    }
    return 0;
}
float media_g(float x, float y) {
    return sqrt(x*y);
}
float media_a(float x, float y) {
    return (x+y)/2;
}