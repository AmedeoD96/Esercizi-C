//
//  main.c
//  Classificazione triangolo
//
//

/*Si scriva un programma che legga da tastiera i valori delle lunghezze dei tre lati di un triangolo (detti a, b, c) e determini:
 • se il triangolo è equilatero
 • se il triangolo è isoscele
 • se il triangolo è scaleno
 • se il triangolo è rettangolo*/

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float a, b, c, ipotenusa;
    
    printf("Inserisci lato 1: ");
    scanf("%f", &a);
    
    printf("Inserisci lato 2: ");
    scanf("%f", &b);
    
    printf("Inserisci lato 3: ");
    scanf("%f", &c);
    
    //Verifico se si tratta di un triangolo equilatero
    if (a == b && b == c) {
        printf("Triangolo equilatero\n");
    }
    
    //Verifico se si tratta di un triangolo scaleno
    if (a != b && b != c && a !=c) {
        printf("Triangolo scaleno\n");
    }
    
    //Verifico se si tratta di un triangolo isoscele
    if ((a == b) || (a == c) || (b == c)) {
        printf("Triangolo isoscele\n");
    }
    
    //Trovo ipotenusa e verifico se si tratta di un triangolo rettangolo
    if(a>b && a>c){
        ipotenusa = a;
        if(ipotenusa == pow(b, 2) * pow(c, 2)){
            printf("Triangolo rettangolo\n");
        }
    }else if (b>c){
        ipotenusa = b;
        if (ipotenusa == pow(c, 2) * pow(a, 2)){
            printf("Triangolo rettangolo\n");
        }
    }else{
        ipotenusa = c;
        if( ipotenusa == pow(a, 2) * pow(b, 2)){
            printf("Triangolo rettangolo\n");
        }
    }
    
    return 0;
}
