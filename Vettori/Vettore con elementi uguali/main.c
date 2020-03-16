//
//  main.c
//  Vettore con elementi uguali
//
//
/*Scrivere un programma che riceve in ingresso una sequenza di N numeri interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall'utente, ma il vettore può contenere al massimo 30 numeri. Terminato l'inserimento della sequenza di numeri, il programma deve verificare se gli elementi del vettore sono tutti uguali tra loro*/

#include <stdio.h>
#include <stdbool.h>
#define MAX 30
int main(int argc, const char * argv[]) {
    int vet[MAX], n, numero;
    bool flag = true;
    
    do {
        printf("Quanti numeri saranno inseriti? ");
        scanf("%d", &n);
    } while (n>MAX && n<=0);
    
    for (int i=0; i<n; i++) {
        printf("Inserisci il numero %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    numero = vet[1];
    for (int i = 0; i<n && flag == true; i++) {
        if(numero == vet[i]){
            flag = true;
        }else{
            flag = false;
        }
    }
    
    if (flag) {
        printf("Vettore di elementi uguali\n");
    }else
        printf("Vettore di elementi diversi\n");
    
    return 0;
}
