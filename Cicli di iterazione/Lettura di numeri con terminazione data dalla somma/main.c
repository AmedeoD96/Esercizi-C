//
//  main.c
//  Lettura di numeri con terminazione data dalla somma
//
//
/*Si scriva un programma che legga da tastiera una serie di numeri interi fino a quando la somma di tutti i numeri introdotti fino a quel momento non supera il valore 1000. A quel punto, il programma stampa il valore del prodotto di tutti i numeri inseriti*/

#include <stdio.h>
#define SOMMA_MAX 1000

int main(int argc, const char * argv[]) {
    int num, somma = 0;
    
    do {
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        somma += num;
    } while (somma < SOMMA_MAX);
    printf("La somma dei numeri inseriti è: %d\n", somma);
    
    return 0;
}
