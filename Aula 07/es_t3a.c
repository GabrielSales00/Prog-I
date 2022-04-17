/*Escreva um programa que leia um número inteiro e imprima na
tela se ele é par ou ímpar OLHE PRO RESTO*/
#include <stdio.h>

int main() {
    int n1,q,r;
    scanf("%d", &n1);
    q = n1/2;
    r = n1 - 2*q;
    if (r == 0) {
        printf("par\n");}
    else {
        printf("impar\n");}
    return 0;
}