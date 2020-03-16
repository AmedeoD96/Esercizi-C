//
//  main.c
//  Massimo e minimo
//
//
/*Si scriva un programma per calcolare il valore massimo e minimo di un insieme di N numeri inseriti da tastiera. Il programma deve leggere il valore di N, ed in seguito deve leggere una sequenza di N numeri. A questo punto il programma deve stampare il massimo ed il minimo tra i numeri inseriti*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i;
    float num, min = 0.0, max = 0.0;
    
    printf("Quanti numeri vuoi immettere? ");
    scanf("%d", &n);
    
    for (i = 0; i<n; i++) {
        printf("Inserisci il numero %d: ", i+1);
        scanf("%f", &num);
        if (i == 0) {
            min = num;
            max = num;
        }
        if (min > num) {
            min = num;
        }
        if (max < num) {
            max = num;
        }
    }
    
    printf("Il valore minimo inserito è: %f\nIl valore massimo inserito è: %f\n", min, max);
    return 0;
}
