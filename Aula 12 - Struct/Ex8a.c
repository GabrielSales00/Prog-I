#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double d;
    struct ponto //declaração do tipo de struct que vamos usar
    {
        double x;
        double y;
    } p1, p2; //nome das variáveis struct que usaremos
    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);
    d = sqrt((p2.y - p1.y) * (p2.y - p1.y) + (p2.x - p1.x) * (p2.x - p1.x));
    if (d = 0 || d < 0.0000001)
    {
        printf("os pontos sao iguais\n");
    }
    else
    {
        printf("os pontos nao sao iguais\n");
    }
    return 0;
}