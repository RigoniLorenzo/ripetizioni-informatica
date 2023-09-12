/*OPERATORI*/
/*In programmazione, gli operatori sono dei simboli che specificano quale legge applicare a uno o più operandi*/
/*Esistono 3 tipi di operatori:
    - unari, ovvero che lavorano su un singolo operando
    - binari, ovvero che lavorano su due operandi
    - ternari, ovvero che lavorano su tre operandi
*/
#include <stdio.h>

int main()
{

    int num1 = 12, num2 = 6;

    /*OPERATORI UNARI*/
    /*Operatori di incremento e decremento: aumentano o diminuiscono di un'unità l'operando*/
    printf("Num1 prima dell'operatore ++: %d\n", num1);
    num1++;
    printf("Num1 dopo l'operatore ++: %d\n", num1);

    printf("Num1 prima dell'operatore --: %d\n", num1);
    num1--;
    printf("Num1 dopo l'operatore --: %d\n\n", num1);
    
    /*ATTENZIONE: c'è differenza tra num1++ e ++num1 (la stessa che c'è tra num1-- e --num1)*/
    printf("Risultato ++num1: %d\n", ++num1);
    printf("Valore num1 dopo: %d\n", num1);
    printf("Risultato num1++: %d\n", num1++);
    printf("Valore num1 dopo: %d\n\n", num1);

    /*OPERATORI BINARI*/
    /*Operatori di assegnamento: servono ad assegnare determinati valori alle variabili*/
    float esempio = 7.89;
    num1 = 12; /*In questo caso, cancello il valore precedentemente salvato e metto 12 al suo posto*/

    /*Operatori aritmetici: servono per svolgere le operazioni aritmetiche fondamentali*/
    printf("Sommma: %d\n", num1 + num2);
    printf("Differenza: %d\n", num1 - num2);
    printf("Moltiplicazione: %d\n", num1 * num2);
    printf("Divisione: %f\n", (float) num1 / num2);
    printf("Modulo (resto della divsione): %d\n\n", num1 % num2);

    /*Operatori di relazione: servono a relazionare 2 operandi e restituiscono un valore booleano*/
    /*Sono:
        < (minore)
        <= (minore o uguale)
        > (maggiore)
        >= (maggiore o uguale)
        == (uguale, ATTENZIONE a mettere due uguali, altrimenti con uno solo diventa un'assegnazione)
        != (diverso)
    */

    /*Operatori logici: servono per formulare condizioni composte*/
    /*I tre principali sono AND (&&), OR (||) e NOT (!), guarda il file Truth_table.jpeg*/

    /*Operatori bitwise: consentono di manipolare direttamente i bit di un valore*/
    /*Sono:
        ~ (NOT bit a bit): inverte tutti i bit della variabile (es. ~0011 -> 1100)
        & (AND bit a bit): svolge l'AND a coppie di bit (es. 1101 & 0111 -> 0101)
        | (OR bit a bit): svolge l'OR a coppie di bit (es. 1011 | 0101 -> 1111)
        ^ (XOR bit a bit): svolge lo XOR a coppie di bit (es. 1011 ^ 0101 -> 1110)
        >> (spostamento a dx): sposta i bit di n posizioni a destra (es. 1011 >> 1 -> 0101)
        << (spostamento a sx): sposta i bit di n posizioni a sinistra (es. 1011 << 1 -> 0110)*/

    /*OPERATORI TERNARI*/
    /*Operatore condizionale: consente di valutare una condizione e in base ad essa far acquisire un valore
    ad un'espressione*/
    printf("Il valore di num1 e' maggiore rispetto a quello di num2? %s", (num1 > num2) ? "Si" : "No");
}