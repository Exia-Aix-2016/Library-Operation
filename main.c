#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "multiplication.h"
#include "soustraction.h"
//release V2
int main(void)
{
    float a = 0.0, b = 0.0;
    /*OUTDATED
     *
     * printf("Hello world!\n");
       printf("test\n");
       printf("Release\n");
     */
    //Affichage introduction

    printf("===============================================\n\n");
    printf("GitProject EXIA A1 Aix en provence\n");
    printf("Program - Calculator\n");
    printf("Credit : Hugo, Batiste, Mandel\n");
    printf("Licence MIT\n");
    printf("===============================================\n\n");
    
    //On demande les nombre à l'utilisateur.
    printf("Saisissez vos nombres \n");
    printf("nombre 1 : ");
    scanf("%f", &a);
    printf("nombre 2 : ");
    scanf("%f", &b);

    int choix;

   //On choisit le type d'opération que l'on rentre dans "choix"
    printf("Type d'operation :\n");
    printf("1. addition\n");
    printf("2. multiplication\n");
    printf("3. soustraction\n");
    scanf("%d", &choix);

    //Selection 
    switch (choix) {
        case 1:
            printf("resultat : %g\n", addition(a, b));
            break;
        case 2:
            printf(" resultat : %g\n", multi(a, b));
            break;
        case 3:
            printf("resultat : %g\n", soustraction(a, b));
            break;



    }

    system("pause");

    return 0;
}

// Test Rebase