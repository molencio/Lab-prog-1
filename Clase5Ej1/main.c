#include <stdio.h>
#include <stdlib.h>
#include "C5lib.h"
#define QTY_FORARRAY 10


int main()
{
    int arrayInt[QTY_FORARRAY];
    int auxiliar;

    getArray(arrayInt, QTY_FORARRAY, auxiliar);
    printf("Estos son los diez numeros en orden que contiene el array\n");
    showArray(arrayInt, QTY_FORARRAY);
    averageArray(arrayInt, QTY_FORARRAY);
}
