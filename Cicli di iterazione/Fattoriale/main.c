//
//  main.c
//  Fattoriale
//
//

/*Si scriva un programma che acquisisca un numero intero positivo N da tastiera e stampi il valore di N*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, risultato = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    while (n != 0) {
        risultato *= n;
        n--;
    }
    
    printf("Il fattoriale del numero inserito è: %d\n", risultato);
    return 0;
}
