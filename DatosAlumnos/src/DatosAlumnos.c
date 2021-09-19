/*
 ============================================================================
 Name        : DatosAlumnos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Biblioteca.h"

#define TAM 5

int main(void)
{
	setbuf(stdout, NULL);
	//Modelo de datos
	int legajo[TAM] =
	{ 1000, 1001, 1002, 1003, 1004 };
	int edad[TAM] =
	{ 22, 26, 35, 41, 25 };
	float nota[TAM] =
	{ 9, 6, 4, 2, 7 };
	char nombre[TAM][50] =
	{ "Maria", "Luis", "Juan Carlos", "Ana", "Martin" };
	char email[][];

	//CargarAlumnos(legajo, nombre, nota, edad, TAM);
	OrdenarAlumnosPorNombre(legajo, nombre, nota, edad, TAM);
	MostarAlumnos(legajo, nombre, nota, edad, TAM);

	return EXIT_SUCCESS;
}

