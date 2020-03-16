//
//  main.c
//  Generazione sequenza di numeri consecutivi
//
//
/*Un utente introduce da tastiera due numeri interi, chiamati "inizio" e "lun". Il programma deve stampare una serie di numeri interi consecutivi. La serie inizia al valore iizio ed è lunga lun elementi.
 Esempio:
 Inserisci inizio: 7
 Inserisci lun: 4
 La serie è: 7 8 9 10*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int inizio, lun, i;
    printf("Inseirisci inizio: ");
    scanf("%d", &inizio);
    printf("Inserisci lun: ");
    scanf("%d", &lun);
    
    printf("La serie è: ");
    
    for (i=0; i<lun; i++) {
        printf("%d ", inizio);
        inizio++;
    }
    printf("\n");
    return 0;
}
