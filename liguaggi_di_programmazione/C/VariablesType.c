#include <stdio.h>

int main() {
    /*Interi (32 bit/4 byte, ci sarebbero poi i long a 64 bit e gli short a 16 bit)*/
    int integerNumber = 5;
    printf("Numero intero: %d\n", integerNumber);

    /*Char (8 bit/1 byte)*/
    char character = 'a';
    printf("Carattere: %c\n", character);

    /*Float (32 bit/4 byte)*/
    /*Numero decimale che può salvare fino a 7 cifre dopo la virgola*/
    float floatNumber = 8.5;
    printf("Decimale float: %f\n", floatNumber);

    /*Double (64 bit/8 byte)*/
    /*Numero decimale che può salvare fino a 15 cifre dopo la virgola*/
    double doubleNumber = 7.88;
    printf("Decimale double: %lf\n", doubleNumber);

    /*Di base, per i float e i double vengono sempre stampate 6 cifre dopo la virgola.*/
    /*Per modificarlo, basta scrivere il numero di decimali desiderati*/
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum); /*Default 6 cifre*/
    printf("%.1f\n", myFloatNum); /*Solo 1 cifra decimale*/
    printf("%.2f\n", myFloatNum); /*Solo 2 cifre decimali*/
    printf("%.4f", myFloatNum); /*Solo 4 cifre decimali*/
}