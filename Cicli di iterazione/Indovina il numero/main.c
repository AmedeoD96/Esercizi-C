//
//  main.c
//  Indovina il numero
//
//
/*Si scriva un programma per giocare al gioco "indovina un numero". Un primo utente inserisce da tastiera un numero segreto. Il secondo deve indovinare il numero, entro un massimo di 10 tentativi.
 Ad ogni tentativo l'utente inserisce il numero ipotizzato, ed il programma può rispondere "esatto", "troppo alto" "troppo basso". Allo scadere del decimo tentativo, se il numero non è stato indovinato, il programma stampa "hai perso". Nel caso in cui il numero venga indovinato, il programma termina senza chiedere ulteriori tentativi.*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    int nSegreto, numero, count;
    bool flag = false;
    
    printf("inserisci il numero segreto: ");
    scanf("%d", &nSegreto);
    
    count = 0;
    
    do {
        printf("Tentativo %d. Inserisci il numero: ", count+1);
        scanf("%d", &numero);
        
        if(numero == nSegreto){
            printf("Esatto\n");
            flag = true;
        }
        
        if (numero < nSegreto) {
            printf("Troppo basso\n");
        }else if (numero > nSegreto){
            printf("Troppo alto\n");
        }
        
        count++;
        
    } while (count<10 && flag == false);
    
    if (!flag) {
        printf("Hai perso\n");
    }
    return 0;
}
