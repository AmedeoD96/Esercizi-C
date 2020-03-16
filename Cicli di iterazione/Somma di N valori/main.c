//
//  main.c
//  Somma di N valori
//
//

/*Si scriva un programma per calcolare la somma di un insieme di N numeri inseriti da tastiera. Il programma deve leggere inizialmente il valore di N. In seguito il programma legge gli N numeri e infine ne visualizza la somma*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float somma = 0, num;
    int n, i;
    
    printf("Quanti numeri vuoi sommare? ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        printf("Inserisci il numero %d: ", i+1);
        scanf("%f", &num);
        somma += num;
    }
    printf("La somma dei numeri inseriti è: %.2f\n", somma);
    
    return 0;
}
