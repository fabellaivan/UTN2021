/*
 * Fuente.c
 *
 *  Created on: 16 sept 2021
 *      Author: Ivan Fabella
 */
#include "Biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

float IngresarFlotante(char mensaje[])
{
	float numeroIngresado;
	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}
int IngresarEntero(char mensaje[])
{
	int numeroIngresado;
	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}

int getString(char cadena[], char mensaje[], int tam)
{
	char auxiliarString[1000];
	int retorno;
	retorno = 0;
	if (cadena != NULL && mensaje != NULL)
	{
		retorno = 1;
		printf(mensaje);
		fflush(stdin);
		gets(auxiliarString);
		while (strlen(auxiliarString) > tam)
		{
			printf("Reingrese: ");
			fflush(stdin);
			gets(auxiliarString);
		}
		strcpy(cadena, auxiliarString);
	}
	return retorno;
}

void OrdenarAlumnosPorNombre(int legajo[], char nombre[][50], float nota[],	int edad[], int tam)
{
	int auxiliarInt;
	float auxiliarFloat;
	char auxiliarString[50];
	for (int i = 0; i < tam - 1; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if (strcmp(nombre[i], nombre[j]) > 0) //Criterio de ordenamiento
			{
				auxiliarFloat = nota[i];
				nota[i] = nota[j];
				nota[j] = auxiliarFloat;

				auxiliarInt = edad[i];
				edad[i] = edad[j];
				edad[j] = auxiliarInt;

				auxiliarInt = legajo[i];
				legajo[i] = legajo[j];
				legajo[j] = auxiliarInt;

				strcpy(auxiliarString, nombre[i]);
				strcpy(nombre[i], nombre[j]);
				strcpy(nombre[j], auxiliarString);

			}
		}
	}
}

void OrdenarAlumnosPorNota(int legajo[], char nombre[][50], float nota[],
		int edad[], int tam)
{
	int auxiliarInt;
	float auxiliarFloat;
	char auxiliarString[50];
	for (int i = 0; i < tam - 1; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if (nota[i] < nota[j]) //Criterio de ordenamiento
			{
				auxiliarFloat = nota[i];
				nota[i] = nota[j];
				nota[j] = auxiliarFloat;

				auxiliarInt = edad[i];
				edad[i] = edad[j];
				edad[j] = auxiliarInt;

				auxiliarInt = legajo[i];
				legajo[i] = legajo[j];
				legajo[j] = auxiliarInt;

				strcpy(auxiliarString, nombre[i]);
				strcpy(nombre[i], nombre[j]);
				strcpy(nombre[j], auxiliarString);

			}
		}
	}
}


void CargarAlumnos(int legajo[], char nombre[][50], float nota[], int edad[],
		int tam)
{
	for (int i = 0; i < tam; i++)
	{
		legajo[i] = IngresarEntero("Ingrese el legajo: ");
		edad[i] = IngresarEntero("Ingrese edad: ");
		nota[i] = IngresarFlotante("Ingrese la nota: ");
		getString(nombre[i], "Ingrese el nombre: ", 50);
	}
}
void MostarAlumnos(int legajo[], char nombre[][50], float nota[], int edad[],
		int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("%4d\t%-20s %4d\t%4.2f\n", legajo[i], nombre[i], edad[i],
				nota[i]);
	}
}


