/*
 ============================================================================
 Name        : MenuDeOpcionesParaTP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	do
	{
		printf("1. Alta\n");
		printf("2. Baja\n");
		printf("3. Modificar\n");
		printf("4. salir\n");
		printf("Elija una opcion");
		scanf("%d",&opcion);

		switch(opcion)
		{
		case 1:
			printf("Alta");
			break;
		case 2:
			printf("Baja");
			break;
		case 3:
			printf("Modificar");
			break;
		}
	}while(opcion!=4);
	return EXIT_SUCCESS;
}
