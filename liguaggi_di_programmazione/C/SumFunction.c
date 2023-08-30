#include <stdio.h>

/*Questa è la funzione creata da noi*/
/*n1 e n2 si dicono parametri, in questo caso passati per copia*/
int sumIntegerNumbers(int n1, int n2) {
    /*Ritorno la somma di due numeri interi, la quale a sua volta è un intero*/
    return n1 + n2;
}

int main() {
    /*Queste sono due variabili, ovvero delle "scatole" che contengono informazioni*/
    /*In questo caso, contengono valori interi*/
    /*Questa fase si chiama dichiarazione, in quanto dichiaro che ho una variabile chiamata "a" intera
    e una variabile chiamata "b" intera*/
    int a, b;

    /*Ora passo alla fase di assegnamento, ovvero assegno un valore alle due variabili*/
    /*Ovviamente devono essere dei valori dello stesso tipo della sìdichiarazione*/
    a = 2;
    b = 3;

    /*Passo alla stampa*/
    /*Per indicare che sto stampando una variabile che ha un valore intero, scrivo %d*/
    /*Nel terminale poi, al posto di %d, leggerò il valore della variabile*/
    printf("Primo numero: %d\n", a);
    printf("Secondo numero: %d\n", b);
    /*Qui richiamo la mia funzione passandogli per parametro le mie due variabili*/
    printf("Somma: %d", sumIntegerNumbers(a, b));
}