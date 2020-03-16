//
//  main.c
//  Numeri di Fibonacci
//
//

/*Scrivere un programma che calcoli e stampi i primi N numeri della serie di Fibonacci, con N inserito da tastiera*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, nuovoTermine, prec1, prec2, numTermini;
    
    printf("Inserisci n: ");
    scanf("%d", &n);
    
    prec1 = 1;
    prec2 = 1;
    nuovoTermine = 1;
    numTermini = 0;
    
    while (numTermini < n) {
        if(numTermini >=2){
            nuovoTermine = prec1 + prec2;
            prec2 = prec1;
            prec1 = nuovoTermine;
        }
        printf("%d ", nuovoTermine);
        numTermini++;
    }
    printf("\n");
    return 0;
}
