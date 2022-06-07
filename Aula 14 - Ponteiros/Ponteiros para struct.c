#include <stdio.h>
int main() {
    struct ponto {
    float x;
    float y;
    } p1;
    struct ponto* pp;
    pp = &p1;
    p1.x = 10.0;
    p1.y = 5.0;
    printf("Coordenada x: %.2f – Coordenada y: %.2f\n", pp->x, pp->y);
    return 0;
}