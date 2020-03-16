//
//  main.c
//  Somma di due numeri
//
//

#include <stdio.h>

/*Si scriva un programma che legga due valori interi e visualizzi la loro somma*/

int main(int argc, const char * argv[]) {
    int a, b;
    printf("SOMMA DI DUE NUMERI\nInserisci il primo addendo: ");
    scanf("%d", &a);
    printf("Inserisci il secondo addendo: ");
    scanf("%d", &b);
    printf("La somma dei due numeri è: %d\n", a+b);
    return 0;
}
