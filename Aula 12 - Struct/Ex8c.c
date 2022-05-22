#include <stdio.h>

int main ()
{
    double IMC;
    struct corpo 
    {
        float altura;
        float peso;
        char nome[15];
    } u1;
    scanf("%f", &u1.altura);
    scanf("%f", &u1.peso);
    scanf("%s", u1.nome);
    IMC = u1.peso/(u1.altura*u1.altura);
    printf("%.3lf\n", IMC);

    return 0;
}