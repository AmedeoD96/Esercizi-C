//
//  main.c
//  Divisori di un numero
//
//
/*Sia dato un numero intero positivo N inserito da tastiera. Si scriva un programma che calcoli i numeri interi che sono divisori (con resto uguale a zero) di N. Dire inoltre se N è un numero primo*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i, count = 0;
    
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++) {
        if (n%i == 0){
            printf("Un divisore di %d, è: %d\n", n, i);
            count++;
        }
    }
    if (count == 2) {
        printf("Il numero è primo\n");
    }else {
        printf("Il numero non è primo\n");
    }
    return 0;
}
