#include <stdio.h>

int main() {
    int *xPtr, x;
    x = 2;

    printf("%d = %d\n", &*xPtr, *&xPtr);
    return 0;
}