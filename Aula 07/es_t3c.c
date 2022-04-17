#include <stdio.h>

int main() {
    float op1, op2;
    char op;
    scanf("%f%c%f", &op1, &op, &op2);
    if(op == '+') {
        printf("%.3f%c%.3f=%.3f\n", op1, op, op2, op1+op2);
        }
    else {
        if(op == '-') {
            printf("%.3f%c%.3f=%.3f\n", op1, op, op2, op1-op2);
        }
        else {
            if(op == '*') {
                printf("%.3f%c%.3f=%.3f\n", op1, op, op2, op1*op2);
            }
            else {
                if(op == '/') {
                    printf("%.3f%c%.3f=%.3f\n", op1, op, op2, op1/op2);
                }
                else {
                    printf("Operador invalido\n");
                }
            }

        }
    }


    
    return 0;
}