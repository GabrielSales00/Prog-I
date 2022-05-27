#include <stdio.h>

#define N 10

int main()
{
    int x, y, i, j;
    int temp[N];
    int temp1[N];
    struct peso
    {
        int knots;
        int m[N][N];
    } loc;
    
    scanf("%d", &loc.knots);
    temp[loc.knots] = 0;

    for(i = 0; i < loc.knots; i++) //loop de inputs para a matriz
    {
        scanf("%d %d %d %d %d", &loc.m[i][1], &loc.m[i][2], &loc.m[i][3], &loc.m[i][4], &loc.m[i][5]); //input linha por linha
    }

    scanf("%d", &x);
    scanf("%d", &y);

    for(j = x; j < y; j++)
    {
        for(i = 0; i < y; i++)
        {
            if(loc.m[j][i] < loc.m[j][i+1])
            {
                temp[i] = loc.m[j][i];
                temp1[i] = j;
            }
        }
    }

    printf("Distancia total entre %d e %d: %d\n", x, y, temp[y - x - 1]-temp[0]);
    printf("Caminho: ");
    for(i = 0; i < y - x - 1; i++)
    {
        printf("%d", temp1[i]);
        printf("->");
    }


    return 0;
}