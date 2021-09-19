/*
 * IngresarValor.c
 *
 *  Created on: 8 sept 2021
 *      Author: Ivan Fabella
 */
#include <stdio.h>
#include <stdlib.h>
#include "Bibliotecas.h"

int PedirEntero(char mensaje[])
{
	int numeroIngresado;
	printf("%s",mensaje);
	scanf("%d",&numeroIngresado);


	return numeroIngresado;
}
