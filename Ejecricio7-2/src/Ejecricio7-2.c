/*

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

Ledesma Sergio

Ejercicio 7-2: Dados 3 vectores paralelos de tipo entero:
Cargar el vector A y B de manera secuencial.
El tercer vector C, deber? cargarse con el mayor de los elementos del mismo componente.
Mostrar los 3 vectores, ordenados de menor a mayor por el vector C


*******************************************************************************/
#include <stdio.h>
#define T 3

void CargarVectorSecuencial(int arrayA[],int arrayB[],int arrayC[],int tam);
void OrdenarVectores(int arrayA[],int arrayB[],int arrayC[],int tam);
void MostrarVectores(int arrayA[],int arrayB[],int arrayC[],int tam);


int main()
{
    int vectorA[T];
    int vectorB[T];
    int vectorC[T];

    printf("Ingresame lo' numerito' en el vector:");

    CargarVectorSecuencial(vectorA,vectorB,vectorC,T);
    OrdenarVectores(vectorA,vectorB,vectorC,T);
    MostrarVectores(vectorA,vectorB,vectorC,T);


    return 0;
}


void CargarVectorSecuencial(int arrayA[],int arrayB[],int arrayC[],int tam)
{
    int i;

    for(i = 0; i < tam; i++)
    {
        printf("\nIngrese el numero en la posicion %d:",i+1);
        scanf("%d",&arrayA[i]);

        printf("\nIngrese el numero en la posicion %d:",i+1);
        scanf("%d",&arrayB[i]);

        if(arrayA[i]>arrayB[i])
        {
            arrayC[i]=arrayA[i];
        }
        else
        {
            arrayC[i]=arrayB[i];
        }

    }

}

void OrdenarVectores(int arrayA[],int arrayB[],int arrayC[],int tam)
{
    int i;
    int j;
    int auxiliarArray;


    for(i = 0; i < tam-1; i++)
    {
        for(j = i+1; j < tam; j++)
        {
            if(arrayC[i] > arrayC[j])
            {
                auxiliarArray = arrayC[i];
                arrayC[i] = arrayC[j];
                arrayC[j] = auxiliarArray;

                auxiliarArray = arrayA[i];
                arrayA[i] = arrayA[j];
                arrayA[j] = auxiliarArray;

                auxiliarArray = arrayB[i];
                arrayB[i] = arrayB[j];
                arrayB[j] = auxiliarArray;
            }
        }
    }
}

void MostrarVectores(int arrayA[],int arrayB[],int arrayC[],int tam)
{
    int i;

    printf("\nVectores A, B y C:");

    for(i = 0; i < tam; i++)
    {
        printf("\n%d\t%d\t%d",arrayA[i],arrayB[i],arrayC[i]);


    }
}
