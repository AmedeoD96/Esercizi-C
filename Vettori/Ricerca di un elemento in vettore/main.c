//
//  main.c
//  Ricerca di un elemento in vettore
//
//
/*Scrivere un programma che riceve in ingresso una sequenza di N numeri interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall'utente, ma il vettore può contenere al massimo 30 numeri. Terminato l'inserimento della sequenza di numeri, l'utente inserisci un valore di riferimento. Il programma deve indicare se tale valore di riferimento è contenuto nel vettore.*/

#include <stdio.h>
#include <stdbool.h>
#define MAX 30 //Dimensione massima del vettore

int main(int argc, const char * argv[]) {
    int n, i, numero;
    bool trovato = false;
    int vet[MAX];
    
    do {
        printf("Quanti numeri saranno inseriti? ");
        scanf("%d", &n);
    } while (n>MAX || n<=0);
    
    for (i=0; i<n; i++) {
        printf("Inserisc il numero %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    
    printf("I numri inseriti sono: ");
    for (i=0; i<n; i++) {
        printf("%d ", vet[i]);
    }
    
    printf("Inserisci un numero da trovare: ");
    scanf("%d", &numero);
    
    for (i=0; i<n && trovato == false; i++) {
        if (numero == vet[i]) {
            trovato = true;
        }
    }
    if (trovato) {
        printf("Il vettore contiene il numero %d\n", numero);
    }else
        printf("Il vettore non contiene il numero %d\n", numero);
    return 0;
}
