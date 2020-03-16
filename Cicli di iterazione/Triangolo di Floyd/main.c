//
//  main.c
//  Triangolo di Floyd
//
//
/*Scrivere un programma per la rappresentazione del triangolo di Floyd. Il triangolo di Floyd è un triangolo rettangolo che contiene numeri naturali, definito riempendo le righe del triangolo con numeri consecutivi e partendo da 1 nell'angolo in alto a sinistra.
 Esempio:
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, riga = 0, colonna, cifra = 1;
    
    printf("Inserisci il numero: ");
    scanf("%d", &n);
    
    while (riga < n) {
        colonna = 0;
        while (colonna <= riga) {
            printf("%d ", cifra);
            colonna++;
            cifra++;
        }
        printf("\n");
        riga++;
    }
    return 0;
}
