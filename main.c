#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "multiplication.h"
#include "soustraction.h"

int main(void)
{
    float a = 0.0, b = 0.0;
    printf("Hello world!\n");
    printf("test\n");
    printf("Release\n");
    //On demande les nombre à l'utilisateur.
    printf("Saisissez vos nombres \n");
    printf("nombre 1\n");
    scanf("%f", &a);
    printf("nombre 2\n");
    scanf("%f", &b);

    printf("addition : %f\n", addition(a,b));
	printf(" multiplication : %f\n", multi(a,b));
	printf("soustraction : %f\n", soustraction(a,b));
    system("pause");
    return 0;
}
