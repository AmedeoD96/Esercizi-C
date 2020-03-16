//
//  main.c
//  Valore assoluto
//
//

/*Si scriva un programma che acquisisca da tastiera un numero e stampi il valore assoluto di tale numero*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num;
    printf("Inserisci un numero: ");
    scanf("%f", &num);
    
    if (num>=0) {
        printf("Il valore assoluto del numero inserito è: %f\n", num);
    }else {
        printf("Il valore assoluto del numero inserito è: %f\n", -num);
    }

    return 0;
}
