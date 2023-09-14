#include <stdio.h>

/*INTRO: Un ciclo non è altro che la ripetizione delle stesse istruzioni per n volte finchè
la condizione di permanenza non è falsa*/

int main() {

    /*In C, esistono 3 tipi di cicli:
    -Il ciclo while
    -Il ciclo do while (che è l'equivalente del repeat until)
    -Il ciclo for*/

    /*CICLO WHILE (detto anche while do)*/
    /*In questo tipo di ciclo, la condizione di ciclo è prima di tutte le istruzioni.
    Dunque, può anche succedere che il ciclo non parta proprio se la condizione di permanenza è già falsa.*/
    int count = 0; /*Questa è la variabile che ci fa da contatore*/

    /*Considerando che facciamo partire il count da 0, in questo caso faremo 5 giri nel ciclo*/
    while (count < 5) {
        printf("Sono dentro un ciclo while e sono al giro numero %d\n", count);
        count++; /*FONDAMENTALE aggiornare la variabile che fa da counter, altrimenti avremo un loop infinito*/
    }
    printf("\n\n");

    /*CICLO DO WHILE (detto anche repeat until)*/
    /*A differenza del primo, in questo tipo di ciclo ci sarà sempre almeno un giro*/
    count = 0;
    do {
        printf("Sono dentro un ciclo do while e sono al giro numero %d\n", count);
        count++;
    } while(count < 5);
    printf("\n\n");

    /*CICLO FOR*/
    /*Questo ciclo è molto simile al while, ma ci permette di non doverci preoccupare dell'incremento del contatore*/
    /*Viene molto usato per gli array (che poi vedremo)*/
    int i; /*Solitamente, come contatore per i cicli for si usa una variabile che chiamiamo i*/

    /*Abbiamo l'inizializzazione di i, la condizione di permanenza e l'incremento*/
    for (i = 0; i < 5; i++) {
        printf("Sono dentro un ciclo for e sono al giro numero %d\n", i);
    }
    printf("\n\n");

    /*Infine, anche i cicli sono innestabili*/
    int j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Valore di i:%d  Valore di j:%d\n", i, j);
        }
        printf("\n");
    }
    
    return 0;
}