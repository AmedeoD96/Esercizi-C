//
//  main.c
//  Quadrati perfetti
//
//
/*Si scriva un programma per il calcolo dei quadrati perfetti per una sequenza di numeri. Il programma deve prima leggere un numero inserito da tastiera, e quindi stampare i primi quadrati perfetti sino al quadrato del numero*/

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int numero = 0, n = 0, quadrato;
    
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);
    
    while (n <= numero) {
        quadrato = pow(n, 2);
        printf("Il quadrato del numero %d è %d\n", n, quadrato);
        n++;
    }
    return 0;
}
