//
//  main.c
//  Equazione di secondo grado
//
//

/*Si realizzi un programma per risolvere equazioni di secondo grado. In particolare, data una generica equazione di secondo grado nella forma ax^2+bx+c=0 il programma determini le sue radici, se esistono. Si identifichino tutti i casi particolari e si stampino gli opportuni messaggi informativi*/

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float a, b, c, x1, x2, delta;
    
    printf("Inserisci il coefficiente a: ");
    scanf("%f", &a);
    printf("Inserisci il coefficiente b: ");
    scanf("%f", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%f", &c);
    
    if (a == 0){
        printf("Si tratta di un'equazione di primo grado\n");
        
        if(b != 0){
            x1 = -c/b;
            printf("L'equazione ha una sola soluzione = %.2f", x1);
        }else if (b == 0){
            printf("Equazione indeterminata. Ammette infinite soluzioni\n");
        }else
            printf("Equazione impossibile. Non ammette soluzioni\n");
        
    }else { //Ovvero a!=0
        delta = powf(b, 2) * 4*a*c;
        printf("Il valore del delta è: %.2f\n", delta);
        if (delta>0) {
            printf("L'equazione ha due soluzioni\n");
            x1 = (-b + sqrtf(delta)) / 2*a;
            x2 = (-b - sqrtf(delta)) / 2*a;
            printf("Le soluzioni dell'equazione sono\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
        }else if (delta == 0){
            printf("Una soluzione doppia\n");
            x1 = (-b) / 2*a;
            printf("Soluzione x1 = %.2f\n", x1);
        }else //Caso delta < 0
            printf("Non ci sono soluzioni\n");
    }
    
    return 0;
}
