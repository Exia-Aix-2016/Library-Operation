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
    printf("nombre 1\n");
    scanf("%f", &a);
    printf("nombre 2\n");
    scanf("%f", &b);
    printf("addition : %g\n", addition(a,b));
	printf(" multiplication : %g\n", multi(a,b));
	printf("soustraction : %g\n", soustraction(a,b));
    system("pause");
    return 0;
}
