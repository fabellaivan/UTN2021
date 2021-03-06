/*
 ============================================================================
 Name        : 5-2VectoresV1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * Ejercicio 5-2:
Pedir el ingreso de 10 n?meros enteros entre -1000 y 1000.LISTO, FALTA VALIDAR SI ENTRA LETRA
Determinar:
Listado de los n?meros ingresados.LISTO
Cantidad de positivos y negativos.LISTO

Sumatoria de los pares.
El mayor de los impares.
Listado de los n?meros pares.
Listado de los n?meros de las posiciones impares.




Se deber?n utilizar funciones y vectores.

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "bibliteca.h"

#define T 5



int main(void) {
	setbuf(stdout, NULL);
	int listaNumeros[T];
	int cantidadPositivos;
	int cantidadNegativos;
	int cantidadCeros;
	int sumaPares;
	int mayorImpar;
	int validarSiHayImpares;

	CargarVectoresEnteros(listaNumeros,T);
	BuscarPositivosNegativos(listaNumeros,T, &cantidadPositivos, &cantidadNegativos, &cantidadCeros);
	//NumerosRepetidos(listaNumeros,T );


	printf("\n\nSe cargaron %d positivos, %d negativos y %d de ceros\n\n",cantidadPositivos,cantidadNegativos,cantidadCeros);
	MostrarNumero(listaNumeros,T);

	sumaPares=SumarPares(listaNumeros,T);
	if(sumaPares!=0)
	{
		printf("La suma de los pares es %d, \n",sumaPares);
	}


	ListarPares(listaNumeros, T);

	validarSiHayImpares=BuscarMayorImpar(listaNumeros, T,&mayorImpar);
	if(validarSiHayImpares==0)
	{
		printf("No se ingresaron numeros impares, por tanto, no hay mayor impar\n");
	}
	else
	{
		printf("\nEl mayor impar es %d\n",mayorImpar);
	}
	MostrarPosicionImpares(listaNumeros,T);

	return EXIT_SUCCESS;
}














