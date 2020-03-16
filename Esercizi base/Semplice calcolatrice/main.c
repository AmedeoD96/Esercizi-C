//
//  main.c
//  Semplice calcolatrice
//
//

/*Si scriva un programma capace di compiere le 4 operazioni (somma, sottrazione, moltiplicazione e divisione) tra due numeri reali inseriti da tastiera. Dopo che sono stati inseriti i due numeri, detti A e B, il programma dovrà visualizzare i quattro valori A+B, A-B, A*B, A/B. Si ipotizzi che sia B≠0 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float a, b, risultato;
    
    printf("SEMPLICE CALCOLATRICE\nInserisci il primo numero: ");
    scanf("%f", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);
    
    //somma
    risultato = a + b;
    printf("La somma è: %.2f\n", risultato);
    
    //sottrazione
    risultato = a - b;
    printf("La sottrazione è: %.2f\n", risultato);
    
    //moltiplicazione
    risultato = a*b;
    printf("La moltiplicazione è: %.2f\n", risultato);
    
    //divisione
    risultato = a/b;
    printf("La divisione è. %.2f\n", risultato);
    
    
    return 0;
}
