#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int getArray (int arrayNum[], int cantNums, int auxiliar)
{
    int i;
    for (i=0;i<cantNums;i++)
    {
        auxiliar=getInt("Ingrese un numero\n");
        arrayNum[i]=auxiliar;
    }
    return 0;
}


int showArray (int arrayNum[], int cantNums)
{
    int i;
    for(i=0;i<cantNums;i++)
    {
        printf("%d\n", arrayNum[i]);
    }
    return 0;
}

float averageArray (int arrayNum[], int cantidad)
{
    int i;
    int sum=0;
    float average;
    for (i=0;i<cantidad;i++)
    {
        sum = sum+arrayNum[i];
    }
    average = sum/cantidad;
    printf("el promedio es %.2f\n", average);
    return average;
}
