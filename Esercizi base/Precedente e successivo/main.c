//
//  main.c
//  Precedente e successivo
//
//

/*Si scriva un programma che legga un valore intero e visualizzi il valore intero precedente e successivo*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num, prec, succ;
    printf("PRECEDENTE E SUCCESSIVO\nInserisci un numero: ");
    scanf("%d", &num);
    prec = num - 1;
    succ = num + 1;
    printf("Il numero precedente di quello inserito è: %d\nIl numero successivo a quello inserito è %d\n", prec, succ);
    return 0;
}
