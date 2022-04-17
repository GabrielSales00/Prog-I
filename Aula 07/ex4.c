#include <stdio.h>

int main () {
    int C, n1, s1, n, s, r;
    printf("type 2 integers, quickly!\n");
    scanf("%d %d", &n, &s);
    n1 == n;
    s1 == s;
    r == n-s;
    if (s>n) {
            printf("operação inválida, cabaço!\n");
    }
    else {
        do {
            n1 == n1*(n-1);
            s1 == s1*(s-1);
            r == r*(r-1);
        } while (n>=s&&n>0&&s>0);
        C == n1/(r*s1);
        printf("O número de combinações possíveis é: %d", C);
    }
return 0;
}