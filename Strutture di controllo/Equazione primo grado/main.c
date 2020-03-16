//
//  main.c
//  Equazione primo grado
//
//

/*Data l'equazione ax+b=0 con a e b inseriti da tastiera, scrivere un programma per determinare il valore di x, se esiste, che risolve l'equazione*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float a, b, x;
    printf("Risolutore di equazioni di tipo ax+b=0\nInserisci a: ");
    scanf("%f", &a);
    printf("Inserisci b: ");
    scanf("%f", &b);
    
    b = -b; //Cambio di segno. Equivale a portare il numero al secondo membro dell'equazione
    
    if (a != 0) {
        x = b/a;
        printf("Il valore di x è: %.2f\n", x);
    }else {
        
        if(b == 0){
            printf("Equazione indeterminata. Ammette infinite soluzioni\n");
        }else{
            printf("Equazione impossibile. Non ammette soluzioni\n");
        }
    }
    
    return 0;
}
