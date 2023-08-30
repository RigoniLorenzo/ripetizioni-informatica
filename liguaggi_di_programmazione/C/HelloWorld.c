/*Prima di tutto, dobbiamo scrivere le librerie di cui abbiamo bisogno*/
/*Per poter stampare e leggere da terminale, abbiamo bisogno
di includere la libreria stdio.h (che sta per standard input/output)*/
#include <stdio.h>

/*Funzione main: funzione speciale perchè è la prima che viene eseguita*/
/*"int main()" si dice firma della funzione*/
int main() {

    /*Stampiamo con il comando printf*/
    printf("Hello world!"); 
    /*ATTENZIONE: in C, come in tutti i linguaggi compilati, le istruzioni devono terminare con
    un ;, altrimenti il programma non verrà neanche compilato*/

    /*Il return è un comando che serve a far ritornare qualcosa alla funzione*/
    /*ATTENZIONE: si può ritornare solo un valore dello stesso tipo di quello dichiarato
    nella firma della funzione (nel nostro caso un int, ovvero un intero)*/
    return 0;
}