/*
 * Fuentes.c
 *
 *  Created on: 10 sept 2021
 *      Author: Ivan Fabella
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "bibliteca.h"
#define MAXIMO 1000
#define MINIMO -1000
#define REPETIDOS 5


void CargarVectoresEnteros(int vector[], int tam){
	setbuf(stdout, NULL);
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
	setbuf(stdout, NULL);
	float numeroIngresado;
	int valido;

	do{

		printf("%s",mensaje);
		fflush(stdin);
		scanf("%f",&numeroIngresado);

		valido=ValidarEntero(numeroIngresado);

	}while(valido==0);


	return numeroIngresado;
}

int ValidarEntero(float validarNumero)
{
	setbuf(stdout, NULL);
	int aux;

	aux=validarNumero;

	if(validarNumero<MINIMO || validarNumero>MAXIMO)
	{
		printf("El numero ingresado no esta entre los valores correspondientes, intente nuevamente\n");
		return 0;
	}

	if(validarNumero>aux)
	{
		printf("Debe ingresar numeros enteros, no decimales\n");
		return 0;
	}

	return 1 ;
}

void BuscarPositivosNegativos(int vector[], int tam, int* refPositivos, int* refNegativos, int* refCeros)
{
	int cantidadPositivos;
	int cantidadNegativos;
	int cantidadCeros;
	cantidadCeros=0;
	cantidadNegativos=0;
	cantidadPositivos=0;
	int i;
	for(i=0;i<tam;i++)
	{
		if(vector[i]<0)
		{
			cantidadNegativos++;
		}
		else
		{
			if(vector[i]>0)
			{
				cantidadPositivos++;
			}
			else
			{
				cantidadCeros++;
			}
		}
	}//finFor
	*refPositivos=cantidadPositivos;
	*refNegativos=cantidadNegativos;
	*refCeros=cantidadCeros;
}

void MostrarNumero(int vector[], int tam)
{
	int i;
	i=0;
	printf("Los numeros ingresados son : \n");
	for(i=0;i<tam;i++)
	{
		printf("%d,\n",vector[i]);
	}
}

int SumarPares(int vector[],int tam)
{
	int i;
	int sumaPares;
	int validacionPar;
	sumaPares=0;

	for(i=0;i<tam;i++)
	{
		validacionPar=VerificarParidad(vector[i]);
		if(validacionPar==1)
		{
			sumaPares+=vector[i];
		}
	}

	return sumaPares;
}

int BuscarMayorImpar(int vector[], int tam,int* refMayorImpar)
{
	int maximoImpar;
	int validacionImpar;
	int i;
	int banderaPrimerImpar;
	banderaPrimerImpar=0;
	for(i=0;i<tam;i++)
	{
		/*if(!(vector[i]%2==0)&&(banderaPrimerImpar==0||vector[i]>maximoImpar))

		{
			maximoImpar=vector[i];
			banderaPrimerImpar=1;
		}*/

		validacionImpar=VerificarParidad(vector[i]);
		if(validacionImpar==0 && (banderaPrimerImpar==0||vector[i]>maximoImpar))
		{
			maximoImpar=vector[i];
			banderaPrimerImpar=1;
		}

	}
	*refMayorImpar=maximoImpar;

	return banderaPrimerImpar;
}

int VerificarParidad(int validarNumero)
{
	if(validarNumero%2==0)
	{
		return 1 ;
	}

	else
	{
		return 0;
	}
}

void ListarPares(int vector[], int tam)
{
	int i;
	int validacionPar;
	int flagPar;
	flagPar=0;
	for(i=0;i<tam;i++)
		{
			validacionPar=VerificarParidad(vector[i]);
			if(validacionPar==1)
			{
				printf("%d ",vector[i]);
				flagPar=1;
			}
		}
	if(flagPar==1)
	{
		printf("Lista de pares \n");
	}
}

void MostrarPosicionImpares(int vector[], int tam)
{
	int i;
	int validacionImpar;
	int flagImpar;
	flagImpar=0;

	for(i=0;i<tam;i++)
	{
		validacionImpar=VerificarParidad(vector[i]);
		if(validacionImpar==0)
		{
			printf(" %d,",i);
			flagImpar=1;
		}
	}
	if(flagImpar==1)
	{
		printf("Posicion de impares");
	}
}

/*
int NumerosRepetidos(int vector[], int tam )

{
	int i;
	int j;
	int aux[REPETIDOS];
	int paso;
	paso=0;

	for(i=0;i<tam-1;i++)
	{
		for(j=i+1;j<tam;j++)
		{
			if(vector[i]==vector[j])
			{
				aux[i]=vector[j];
			}
		}
	}//finFor Inicial

	return 0;
}

*/


