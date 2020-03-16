//
//  main.c
//  Calcolo del massimo a 3
//
//
/*Si scriva un programma che acquisisca tre numeri interi e:
 • Determini stampando un messaggio opportuno quale dei tre (il primo, il secondo, il terzo) sia maggiore
 • Stampi il valore di tale numero
 
 Trascurare il caso in cui i numeri siano uguali*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c;
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    
    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);
    
    if (a>b && a>c){
        printf("Il numero più grande è il primo. Il suo valore è: %d\n", a);
    }else if (b>c){
        printf("Il numero più grande è il secondo. Il suo valore è: %d\n", b);
    }else
        printf("Il numero più grande è il terzo. Il suo valore è: %d\n", c);
    
    return 0;
}
