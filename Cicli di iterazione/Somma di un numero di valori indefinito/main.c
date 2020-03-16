//
//  main.c
//  Somma di un numero di valori indefinito
//
//
/*Si scriva un programma per calcolare la somma di un insieme di numeri inseriti da tastiera. Il programma deve:
 • leggere una sequenza di numeri
 • fermarsi non appena viene inserito il numero 0
 • visualizzare il valore corrispondente alla somma dei valori introdotti*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float somma = 0, num = 1;
    
    while (num != 0) {
        printf("Inserisci un numero. Inserisci 0 se vuoi terminare il programma: ");
        scanf("%f", &num);
        
        somma += num;
    }
    
    printf("La somma dei numeri inseriti è: %.2f\n", somma);
    
    return 0;
}
