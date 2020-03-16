//
//  main.c
//  Cartellino del prezzo
//
//

/*Scrivere un programma che richieda all'utente il prezzo di un oggetto, e la percentuale di sconto ad esso applicata, e che stampi a video il cartellino con il prezzo (originale e scontato)*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float prezzo, prezzoScontato;
    float sconto;
    
    printf("CALCOLA SCONTO\nPrezzo: ");
    scanf("%f", &prezzo);
    printf("Sconto: ");
    scanf("%f", &sconto);
    
    prezzoScontato = prezzo - (prezzo * (sconto / 100));
    printf("\nCartellino\nPrezzo Originale: %.2f\nSconto applicato: %.2f\nPrezzo finale: %.2f\n", prezzo, sconto, prezzoScontato);
    return 0;
}
