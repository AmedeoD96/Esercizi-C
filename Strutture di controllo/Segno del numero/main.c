//
//  main.c
//  Segno del numero
//
//

/*Si realizzi un programma che acquisisca da tastiera un numero e stampi un mesasggio che indichi se tale numero sia positivo oppure negativo*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num;
    printf("Inserisci un numero: ");
    scanf("%f", &num);
    
    if(num >= 0){
        printf("Il numero inserito è positivo\n");
    }else {
        printf("Il numero inserito è negativo\n");
    }
    return 0;
}
