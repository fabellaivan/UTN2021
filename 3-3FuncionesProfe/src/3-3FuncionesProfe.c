/*
 ============================================================================
 Name        : 3-3FuncionesProfe.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);
	int edad;
	int nota;
	int numero;
	int factoriado;

	edad=PedirEnteroYValidar("Ingrese la edad: \n", 18, 90);
	nota=PedirEnteroYValidar("Ingrese Nota : \n",1,10);

	numero=PedirEntero("Ingrese Numero para factorizar: ");
	factoriado=CalcularFactorial(numero);
	printf("El factoriado:  %d ",factoriado);

	printf("La edad  ingresada es %d \n",edad);
	printf("La nota es %d\n",nota);
	return EXIT_SUCCESS;
}

