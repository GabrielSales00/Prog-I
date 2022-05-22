#include <stdio.h>

int main()
{
    float d1, d2, d3, d4, A1, A2;
    struct retangulo 
    {
        float x;
        float y;
    } r1inf, r1sup, r2inf, r2sup;
    scanf("%f %f", &r1inf.x, &r1inf.y);
    scanf("%f %f", &r1sup.x, &r1sup.y);
    scanf("%f %f", &r2inf.x, &r2inf.y);
    scanf("%f %f", &r2sup.x, &r2sup.y);
    d1 = r1inf.x - r2inf.x; //subtraímos as informações coletadas para comparar as posições nos eixos
    d2 = r1inf.y - r2inf.y;
    d3 = r1sup.x - r2sup.x;
    d4 = r1sup.y - r2sup.y;

    if(d1 <= 0 & d2 <= 0 & d3 >= 0 & d4 >= 0) //comparamos as posições nos eixos x e y, note que d1 e d2 podem ser menores que 0, mas d3 e d4 não, pois se não r2 ultrapassaria as dimensões de r1.
    {
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else
    {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    return 0;
}