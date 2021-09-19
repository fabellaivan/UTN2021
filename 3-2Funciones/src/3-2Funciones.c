/*
 ============================================================================
 Name        : 3-2Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int ParImpar(numero);

int main(void) {
	setbuf(stdout, NULL);
	int a;
	a=ParImpar(7);

	if(a==1)
	{
		printf("Es par");

	}else
	{
		printf("Es impar");
	}
	return EXIT_SUCCESS;
}
int ParImpar(numero){
	int resultado;

	resultado=numero%2;

	if(resultado==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
