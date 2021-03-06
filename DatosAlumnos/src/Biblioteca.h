/*
 * Biblioteca.h
 *
 *  Created on: 16 sept 2021
 *      Author: Ivan Fabella
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

void CargarAlumnos(int legajo[], char nombre[][50], float nota[], int edad[],int tam);
void MostarAlumnos(int legajo[], char nombre[][50], float nota[], int edad[],int tam);
void OrdenarAlumnosPorNota(int legajo[], char nombre[][50], float nota[],int edad[], int tam);
void OrdenarAlumnosPorNombre(int legajo[], char nombre[][50], float nota[],	int edad[], int tam);


#endif /* BIBLIOTECA_H_ */
