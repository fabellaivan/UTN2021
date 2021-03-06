/*
 ============================================================================
 Name        : Anexo5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * Crear un Array de 5 elementos de tipo num?rico donde se cargar?n edades.
Agregar la funcionalidad para la opci?n 1 del Men? del ejercicio anterior utilizando funciones,
 es decir una funci?n que inicialice el Array.
Agregar la funcionalidad para la opci?n 2 del Men? utilizando funciones,
 es decir una funci?n que le pida edades al usuario para cargar
  el Array de forma secuencial.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define T 5
void MostrarMenu(void);
int PedirEdad(char mensaje[]);
void MostrarEdades(int vector[], int tam);
void CargarVectorEdades(int vector[], int tam);
int InicializarArray();

int main(void) {

	MostrarMenu();



	return EXIT_SUCCESS;
}
void MostrarMenu(void){

	setbuf(stdout, NULL);
	int opcion;
	int listaEdades[T];
	char salir;
	salir='n';

	do{

			printf("1-Inicializar\n");
			printf("2-Cargar\n");
			printf("3-Mostrar");
			printf("4-Calcular Promedio\n");
			printf("5-Ordenar\n");
			printf("6-salir");
			scanf("%d",&opcion);

			switch(opcion)
			{
		/*	case 1:
				printf("\nUd ha seleccionado la opcion 1 Inicializar\n");
				InicializarArray();
				break;
				*/
			case 2:
				printf("\nUd ha seleccionado Cargar\n");
				CargarVectorEdades(listaEdades, T);
				break;

			case 3:
				printf("\nUd ha seleccionado Mostrar\n");
				MostrarEdades(listaEdades,T);
				break;

			case 4:
				printf("\nUd ha seleciconado Calcular Promedio\n");
				break;

			case 5:
				printf("\nUd ha seleccioado Ordenar\n");
				break;

			case 6:
				printf("\ndesea salir\n ? ");
				fflush(stdin);
				scanf("%c",&salir);
				salir=tolower(salir);
				break;
			}

		}while(salir!='s');

}

/*int InicializarArray()
{
	int listaNumeros[T];

	return listaNumeros[T];
}*/

void CargarVectorEdades(int vector[], int tam)
{
	setbuf(stdout, NULL);
	int valorIngresado;
	int i ;

		for(i=0;i<tam;i++)
		{
			valorIngresado=PedirEdad("Ingrese edad\n");
			vector[i]=valorIngresado;
		}

}

int PedirEdad(char mensaje[])
{
	setbuf(stdout, NULL);
	int edadIngresada;

		printf("%s",mensaje);
		fflush(stdin);
		scanf("%d",&edadIngresada);
	return edadIngresada;
}

void MostrarEdades(int vector[], int tam)
{
	printf("Las edades ingresadas son : ");
	for(int i=0;i<tam;i++)
	{
		printf("%d,\n",vector[i]);
	}
}



