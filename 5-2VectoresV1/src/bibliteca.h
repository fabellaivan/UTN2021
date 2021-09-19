/*
 * bibliteca.h
 *
 *  Created on: 10 sept 2021
 *      Author: Ivan Fabella
 */

#ifndef BIBLITECA_H_
#define BIBLITECA_H_

void CargarVectoresEnteros(int vector[], int tam);
int PedirEntero(char mensaje[]);
int ValidarEntero(float validarNumero);
void BuscarPositivosNegativos(int vector[], int tam, int* refPositivos, int* refNegativos,int* refCeros);
void MostrarNumero(int vector[], int tam);
int SumarPares(int vector[],int tam);
int BuscarMayorImpar(int vector[], int tam,int* refMayorImpar);
int VerificarParidad(int validarNumero);
void ListarPares(int vector[], int tam);
void MostrarPosicionImpares(int vector[], int tam);
//int NumerosRepetidos(int vector[], int tam );
//void MostrarNumerosRepetidos(int vector[], int tam);


#endif /* BIBLITECA_H_ */

