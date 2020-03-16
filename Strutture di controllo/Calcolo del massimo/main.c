//
//  main.c
//  Calcolo del massimo
//
//
/*Si scriva un programma che acquisica due numeri interi e:
 • determini, stampando un messaggio opportuno quale dei due numeri (il primo o il secondo) sia il maggiore
 • stampi il valore di tale numero*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero; ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("Il numero più grande è il primo. Il suo valore è: %d", num1);
    }else{
        printf("Il numero più grande è il secondo. Il suo valore è: %d", num2);
    }
    return 0;
}
