#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "multiplication.h"
#include "soustraction.h"

int main(void)
{
    int a = 0, b = 0;
    printf("Hello world!\n");
    printf("test\n");
    printf("Release\n");
    //On demande les nombre à l'utilisateur.
    printf("Saisissez vos nombres \n");
    printf("nombre 1\n");
    scanf("&d", &a);
    printf("nombre 2\n");
    scanf("&d", &b);

    printf("addition : %f\n", addition(a,b));
	printf(" multiplication : %f\n", multi(a,b));
	printf("soustraction : %f\n", soustraction(a,b));
    system("pause");
    return 0;
}
