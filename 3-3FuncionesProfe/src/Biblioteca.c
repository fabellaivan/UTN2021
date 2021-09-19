/*
 * Biblioteca.c
 *
 *  Created on: 2 sept 2021
 *      Author: Ivan Fabella
 */
#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
/// @fn int PedirEntero(char[])
/// @brief
///
/// @param mensaje
/// @return
int PedirEntero(char mensaje[])
{
	int numeroIngresado;
	printf("%s",mensaje);
	scanf("%d",&numeroIngresado);


	return numeroIngresado;
}
int PedirEnteroYValidar(char mensaje[], int min, int max)
{
	int numeroIngresado;
	printf("%s",mensaje);
	scanf("%d",&numeroIngresado);
	while(numeroIngresado >max || numeroIngresado<min)
	{
		printf("El valor ingresado debe ser entre %d y %d \n",min,max);
		scanf("%d",&numeroIngresado);
	}
	return numeroIngresado;
}

int CalcularFactorial(int numeroIngresado)
{
	int factorial;

	if(numeroIngresado==0)
	{
		factorial=1;
	}
	else
	{
		//n!=n*(n-1)!
		factorial = numeroIngresado*CalcularFactorial(numeroIngresado-1);
	}
	return factorial;
}


