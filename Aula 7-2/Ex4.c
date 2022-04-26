#include <stdio.h>

int main () {
    int C, n, s, n1, s1, d;
    scanf("%d", &n);
    scanf("%d", &s);
    d = n - s;
    C = (n1)/(s1);
    n1 = 1;
    s1 = 1;
    while (n > 1, s > 1, d > 0){
        n1 *= n--; // isso pois n! = 1 inicialmente
        s1 *= s--; // isso pois s! = 1 inicialmente, assim não alterará o valor entrado pelo usuário
    }

    printf("%d\n", C);
    return 0;
}