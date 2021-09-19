/*
 ============================================================================
 Name        : 3-3Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IngresarEntero(void);

int main(void) {
	setbuf(stdout, NULL);
	int a;
	a=IngresarEntero();
	printf("El numero ingresado es %d ",a);

	return EXIT_SUCCESS;
}
int IngresarEntero(void)
{
	int numero;
	printf("Ingrese Numero\n");
	scanf("%d",&numero);
	return numero;
}
