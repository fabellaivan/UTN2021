/*
 ============================================================================
 Name        : 5-1Vectores.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
Ejercicio 5-1:
Pedir el ingreso de 5 n?meros. Mostrarlos y calcular la sumatoria de los mismos.
*/
#include <stdio.h>
#include <stdlib.h>
#define T 5
void CargaNumero(int vector[], int tam);
void MostrarNumero(int vector[], int tam);
void MostrarSuma(int vector[], int tam);
int main(void) {
	setbuf(stdout, NULL);
	int listaNumeros[T];//={5,8,6,3,4}hardcodeo

	CargaNumero(listaNumeros,T);
	MostrarNumero(listaNumeros, T);
	MostrarSuma(listaNumeros,T);
	return EXIT_SUCCESS;
}
void CargaNumero(int vector[], int tam)
{
	int i ;
	for(i=0;i<tam;i++)
	{
		printf("Ingrese Numero\n");
		scanf("%d",&vector[i]);
	}
}
void MostrarNumero(int vector[], int tam)
{
	for(int i=0;i<tam;i++)
	{
		printf("%d\n",vector[i]);
	}
}
void MostrarSuma(int vector[], int tam)
{
	int sumatoria;
	sumatoria=0;

	for(int i=0;i<tam;i++)
	{
		sumatoria=sumatoria+vector[i];
	}
	printf("\nLa suma es : %d\n",sumatoria);
}






