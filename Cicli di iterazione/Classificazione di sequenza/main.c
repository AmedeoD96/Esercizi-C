//
//  main.c
//  Classificazione di sequenza
//
//
/*Si scriva un programma per poter analizzare una sequenza di numeri. Dati N numeri interi letti da tastiera, si vogliono calcolare e stampare su schermo diversi risultati:
 • quanti sono i numeri positivi, nulli e nagativi
 • quanti sono i numeri pari e dispari
 • se la sequenza dei numeri inseriti è crescente, decrescente oppure nè crescente nè decrescente*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    int totale = 0, numero = 0, prec , positivi = 0, negativi = 0, nulli = 0, pari = 0, dispari = 0, n = 0;
    bool crescente = true, decrescente = true;
    
    printf("Quanti numeri voi inserire? ");
    scanf("%d", &totale);
    
    while (n < totale) {
        printf("Inserisci il numero %d: ", n+1);
        scanf("%d", &numero);
        
        if(numero == 0) {
            nulli++;
        }
        if (numero > 0) {
            positivi++;
        }else{
            negativi++;
        }
        
        
        if (numero % 2 == 0){
            pari++;
        }else
            dispari++;
        
        if(n>1){
            if(numero > prec){
                decrescente = false;
            } else {
                if (numero < prec) {
                    crescente = false;
                }else{
                    crescente = false;
                    decrescente = false;
                }
            }
        }
        prec = numero;
        n++;
    }
    printf("Hai inserito: %d numeri positivi, %d numeri negativi, %d numeri nulli, %d numeri pari e %d numeri dispari\n", positivi, negativi, nulli, pari, dispari);
    if (crescente) {
        printf("Sequenza crescente\n");
    }else if (decrescente){
        printf("Sequenza decrescente\n");
    }else{
        printf("Sequenza nè crescente nè decrescente\n");
    }
    return 0;
}
