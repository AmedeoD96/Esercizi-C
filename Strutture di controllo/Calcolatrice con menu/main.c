//
//  main.c
//  Calcolatrice con menu
//
//
/*Si scriva un programma che implementi una semplice calcolatrice in grado di compiere le 4 operazioni fondamentali tra numeri interi. Il programma presenti un semplice menù da cui l'utente indichi (con un numero tra 1 e 4) l'operazione da svolgere. In seguito il programma acquisirà da tastiera i due operandi e stamperà il risultato dell'operazione*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int op1, op2, menu, risultato;
    printf("Quale operazione vuoi effettuare\n1-Addizione\n2-Sottrazione\n3-Moltiplicazione\n4-Divisione\n");
    scanf("%d", &menu);
    switch (menu) {
        case 1:
            printf("Inserisci il primo numero: ");
            scanf("%d", &op1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &op2);
            risultato = op1+op2;
            printf("La somma a+b è: %d", risultato);
            break;
        case 2:
            printf("Inserisci il primo numero: ");
            scanf("%d", &op1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &op2);
            risultato = op1-op2;
            printf("La sottrazione a-b è: %d", risultato);
            break;
        case 3:
            printf("Inserisci il primo numero: ");
            scanf("%d", &op1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &op2);
            risultato = op1*op2;
            printf("La moltiplicazione a*b è: %d", risultato);
            break;
        case 4:
            printf("Inserisci il primo numero: ");
            scanf("%d", &op1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &op2);
            risultato = op1/op2;
            printf("La divisione a/b è: %d", risultato);
            break;
        default:
            printf("Opzione non valida\n");
            break;
    }
    return 0;
}
