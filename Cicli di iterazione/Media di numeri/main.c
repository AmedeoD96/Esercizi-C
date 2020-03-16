//
//  main.c
//  Media di numeri
//
//
/*Si scriva un programma per calcolare la media aritmetica di una serie di numeri inseriti da tastiera. L'introduzione di un valore particolare pari a 0 indica il termine del caricamento dei dati*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num = 1, somma = 0, media = 0;
    int count = 0;
    
    do {
        printf("Inserisci un valore: ");
        scanf("%f", &num);
        somma += num;
        
        if (num != 0) {
            count++;
        }
        
    } while (num != 0);
    
    media = somma/count;
    printf("La media dei numeri inseriti è: %.2f\n", media);
    
    return 0;
}
