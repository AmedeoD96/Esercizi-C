//
//  main.c
//  Elevamento a potenza
//
//

/*Si realizzi un programma che, dati due valori B (numero reale, detto base) ed E (numero intero positivo, detto esponente), calcoli e stampi il valore reale di "base elevato ad esponente". Non si utilizzi la funzione pow() ma si adoti il metodo delle moltiplicazioni successive*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int e, contatore = 0;
    float b, potenza = 1;
    printf("Inserisci la base: ");
    scanf("%f", &b);
    printf("Inserisci l'esponente: ");
    scanf("%d", &e);
    
    while (contatore < e) {
        potenza = b * potenza;
        contatore++;
    }
    
    printf("Risultato B^E: %f\n", potenza);
    return 0;
}
