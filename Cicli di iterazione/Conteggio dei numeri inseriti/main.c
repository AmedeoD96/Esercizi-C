//
//  main.c
//  Conteggio dei numeri inseriti
//
//
/*Un utente inserisce da tastiera una serie di numeri interi positivi, ed il termine della serie è indicato dall'inserimento del valore -1. Il programma, al termine dell'inserimento, deve stampare quanti numeri pari l'utente aveva inserito e quanti numeri in totale sono stati inseriti.*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num = 0, count = 0, pari = 0;
    
    while (num != -1) {
        printf("Inserisci un numero (-1 per terminare): ");
        scanf("%d", &num);
        
        if (num != -1){
            count++;
            if (num % 2 == 0) {
                pari++;
            }
        }
    }
    
    printf("Numeri totali inseriti: %d\nNumeri pari inseriti: %d\n", count, pari);
    
    
    return 0;
}
