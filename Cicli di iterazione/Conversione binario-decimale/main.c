//
//  main.c
//  Conversione binario-decimale
//
//
/*Si scriva un programma che converta un numero binario in un numero decimale. Il numero binario è rappresentato su N bit, e il valore di N è inserito da tastiera. L'utente inserisce le cifre del numero bianrio un bit alla volta, partendo dal bit meno significativo. Il programma visualizzerà il numero decimale corrispondente.*/

#include <stdio.h>
#include <math.h>

#define BASE 2

int main(int argc, const char * argv[]) {
    int n, bit, peso = 0, numero = 0;
    
    printf("Immetti il numero di bit del numero binario: ");
    scanf("%d", &n);
    
    while (peso < n) {
        printf("Immetti la cifra binaria 2^%d: ", peso);
        scanf("%d", &bit);
        
        numero += bit * pow(BASE, peso);
        peso++;
    }
    
    printf("Il numero decimale corrispondente è: %d\n", numero);
    
    return 0;
}
