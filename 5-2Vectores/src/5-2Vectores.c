/*
 ============================================================================
 Name        : Ejercicio5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * Ejercicio 5-2:
Pedir el ingreso de 10 n?meros enteros entre -1000 y 1000.
Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los n?meros ingresados.
Listado de los n?meros pares.
Listado de los n?meros de las posiciones impares.
Se deber?n utilizar funciones y vectores.

 */

#include <stdio.h>
#include <stdlib.h>
#define T 5

void CargarVectoresEnteros(int vector[], int tam);
int PedirEntero(char mensaje[]);
void CantidadPositivosNegativos(int vector[], int tam);
int BuscarMayorImpar(int vector[], int tam, int* refMaximo);


/*int SumarPares(...);

void ListarVectorEnteros(...);
void ListarNumerosPares(...);
void ListarNumerosEnPosicionImpar(...);
void MostrarCantidadDePositivosNegativos(...);
int verificarSigno(...);
int VerificarParImpar(...);

int ValidarEntero(...);
*/


int main(void) {
	setbuf(stdin, NULL);
	int maximoImpar;
	int listaNumeros[T]={2,4,2,6,2};
	int respuesta;

	respuesta=BuscarMayorImpar(listaNumeros,T,&maximoImpar);
	if(respuesta==1)
	{
		printf("El maximo impar es %d",maximoImpar);
	}
	else
	{
		printf("No se Ingreso numero impar");
	}


	//CargarVectoresEnteros(listaNumeros,T);
	//CantidadPositivosNegativos(listaNumeros, T);

	return EXIT_SUCCESS;
}
/*

void CargarVectoresEnteros(int vector[], int tam)
{
	int valorIngresado;
	int i ;
		for(i=0;i<tam;i++)
		{
			valorIngresado=PedirEntero("Ingrese numero entero entre -1000 y 1000\n");
			vector[i]=valorIngresado;
		}
}


int PedirEntero(char mensaje[])
{
	int numeroIngresado;
	int paso;

	do{
		printf("%s",mensaje);
		scanf("%d",&numeroIngresado);

		if(numeroIngresado<-1000 || numeroIngresado>1000)
		{
			printf("El numero ingresado no esta entre los valores correspondientes, intente nuevamente\n");
			paso=0;
		}

	}while(paso==0);

	return numeroIngresado;
}
*/

int BuscarMayorImpar(int vector[], int tam,int* refMaximo)
{
	int maximoImpar;
	int i;
	int banderaPrimerImpar;
	banderaPrimerImpar=0;
	for(i=0;i<tam;i++)
	{
		if(!(vector[i]%2==0)&&(banderaPrimerImpar==0||vector[i]>maximoImpar))
		{
			maximoImpar=vector[i];
			banderaPrimerImpar=1;
		}
	}
	*refMaximo=maximoImpar;

	return banderaPrimerImpar;
}


















