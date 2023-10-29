#include <stdio.h>

/*La ricorsione*/
/*Una funzione ricorsiva è una funzione che richiama sé stessa (ricorsione diretta)
o richiama una funzione che a sua volta la richiama (ricorsione indiretta) per n volte*/
/*Per avere una funzione ricorsiva funzionante, bisogna soddisfare queste 2 proprietà:
    1. Devono esistere dei valori (chiamati valori base) per cui la funzione non richiami se stessa
        (ovvero un punto di stop)
    2. Ogni volta che la funzione richiama sé stessa, i parametri devono essere più vicini ai valori base
Queste funzioni sono molto indicate per algoritmi che ripetono sempre la stessa operazione.
Un classico esempio è quello del calcolo del fattoriale.
Infatti, il fattoriale di un numero n intero positivo è:
    -n*(n-1) se n!=0 (funzione ricorsiva)
    -1 se n=0 (valore base)
Vediamo l'algoritmo sia in modo iterativo (usando un ciclo) sia ricorsivo.*/

int interactiveFact(int num)
{
    /*Il metodo iterativo è più veloce ma, per problemi complessi, è più difficile da scrivere*/
    int i, res = 1;
    for (i = num; i > 0; i--)
    {
        res *= i;
    }
    return res;
}

int recursiveFact(int num)
{
    /*Il metodo ricorsivo è più lento ma più efficace con problemi complicati con implementazione facile*/
    /*P.S: Stessa cosa di scrivere num==0*/
    if (!num)
    {
        return 1;
    }
    else
    {
        return num * recursiveFact(num - 1);
    }
}

int main()
{
    int num, itRes, rcRes;

    printf("Inserisci un numero intero:\n");
    scanf("%d", &num);

    itRes = interactiveFact(num);
    rcRes = recursiveFact(num);

    printf("Fattoriale calcolato con metodo iterativo: %d\n", itRes);
    printf("Fattoriale calcolato con metodo ricorsivo: %d\n", rcRes);
    
    return 0;
}