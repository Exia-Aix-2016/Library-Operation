#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "multiplication.h"
#include "soustraction.h"

int main(void)
{
    printf("Hello world!\n");
    printf("test\n");

    printf("Release\n");

    printf("%d\n", addition(2,3));
	printf("%g\n", multi(2,3));
	printf("%g\n", soustraction(2,3));
    return 0;
}
