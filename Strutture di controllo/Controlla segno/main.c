//
//  main.c
//  Controlla segno
//
//

/*Scrivere un programma che legga da tastiera un numero e che stampi:
 • se il numero è positivo stampi: ****
 • se il numero è negativo stampi: $$$$ */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num;
    
    printf("Inserisci un numero: ");
    scanf("%f", &num);
    
    if (num>=0) {
        printf("****\n");
    }else {
        printf("$$$$\n");
    }
    return 0;
}
