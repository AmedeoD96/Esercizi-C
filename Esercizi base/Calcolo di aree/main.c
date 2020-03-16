//
//  main.c
//  Calcolo di aree
//
//

/*Si scriva un programma che, dato un numero reale D immesso da tastira, calcoli e stampi:
 1 - L'area del quadrato di lato D
 2 - L'area del cerchio di diametro D
 3 - L'area del triangolo equilatero di lato D*/

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float d, areaQuadrato, areaCerchio, areaTriangoloEquilatero;
    const float costanteTriangolo = sqrtf(3)/4;
    
    printf("CALCOLA AREE DI QUADRATO, CERCHIO E TRIANGOLO EQUILATERO, DATO UN NUMERO\n Inserisci un numero: ");
    scanf("%f", &d);
    
    areaQuadrato = pow(d, 2);
    areaCerchio = (M_PI * pow(d, 2)) / 4;
    areaTriangoloEquilatero = costanteTriangolo * pow(d, 2);
    
    printf("Area quadrato = %.2f\nArea cerchio = %.2f\nArea triangolo = %.2f\n", areaQuadrato, areaCerchio, areaTriangoloEquilatero);
    
    return 0;
}
