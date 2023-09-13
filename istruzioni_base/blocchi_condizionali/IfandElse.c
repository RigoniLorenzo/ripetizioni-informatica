#include <stdio.h>

int main() {

    /*I blocchi condizionali non sono altro che un sistema per decidere
    che istruzioni eseguire in base ad una condizione*/

    int num1 = 5;

    if (num1 > 0) {
        printf("Sono entrato qui perche' la condizione e' vera\n");
    } else {
        printf("Sono entrato qui perche' la condizione e' falsa\n");
    }

    /*Ricorda: un if può esistere anche senza un else ma NON viceversa*/

    if (num1 == 5) {
        printf("Questa stampa si vedra' solo se num1 e' uguale a 5\n");
    }

    /*Posso concatenare anche più if tra loro*/

    if (num1 > 10) {
        printf("Il valore della variabile e' maggiore di 10\n");
    } else if (num1 <= 0) {
        printf("Il valore della variabile e' negativo o nullo\n");
    } else {
        printf("Il valore della varibile e' compreso tra 1 e 10\n");
    }

    /*Ovviamente posso usare anche le condizioni composte*/

    if (num1 > 0 && num1 < 7) {
        printf("Il valore della varibile e' compreso tra 0 e 7 esclusi\n");
    }

    /*Infine, in C non esistono le variabili di tipo booleano, pero' il compilatore può usare le variabili int come
    condizione. La regola di base è che il valore 0 è il false, mentre tutti gli altri numeri sono il true
    (anche se è consigliato usare l'uno)*/

    int integerTrue = 10;
    int integerFalse = 0;

    if (integerTrue) {
        printf("Il valore %d e' come se fosse true\n", integerTrue);
    }

    if (!integerFalse) {
        printf("Il valore %d e' come se fosse false\n", integerFalse);
    }

    return 0;
}