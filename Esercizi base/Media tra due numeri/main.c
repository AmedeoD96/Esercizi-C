//
//  main.c
//  Media tra due numeri
//
//

/*Si scirva un programma che legga due valori interi e visualizzi la loro media aritmetica*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    float risultato;
    printf("MEDIA TRA DUE NUMERI\nInserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    risultato = (num1 + num2) / 2;
    printf("La media artimetica è: %.2f\n", risultato); //Usando .2f limito le cifre decimali a 2
    return 0;
}
