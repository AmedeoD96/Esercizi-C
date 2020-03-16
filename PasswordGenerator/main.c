//
//  main.c
//  PasswordGenerator
//
//  Created by Amedeo D'Amelio on 15/12/2019.
//  Copyright © 2019 Amedeo D'Amelio. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!$£%&/()=?+*#";
    char *Password;
    int lenght;
    
    printf("Lunghezza password: ");
    scanf("%d", &lenght);
    
    //Intialize seed
    srand((unsigned)time(NULL));
    
    //Genero lo spazio di memoria per la password
    Password = (char *)calloc(lenght, sizeof(char));
    
    for (int i=0; i<lenght; i++) {
        Password[i] = charset[rand() % 75];
    }
    printf("\nPassword genarata: %s\n", Password);
    return 0;
}
