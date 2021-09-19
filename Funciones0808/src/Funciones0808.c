/*
 ============================================================================
 Name        : Funciones0808.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Bibliotecas.h"
#define T 5
#define INICIAL

void CargaVector(int vector[], int tam);
int BuscarMaximo(int vector[], int tam);
void MostrarVector(int vector[], int tam);
void MostrarIndicesDelValor(char mensaje[],int vector[], int tam, int ingreso);
void InicializarVector(int vector[], int tam, int valorInicial);
int main(void) {
	setbuf(stdout, NULL);
	int listaNumeros[T];//={5,8,6,3,4}hardcodeo
	int maximo;
	int valorIngresado;

	CargaVector(listaNumeros,T);

	maximo=BuscarMaximo(listaNumeros,T);

	valorIngresado=PedirEntero("Ingrese que valor de memoria quiere ver ");

	MostrarIndicesDelValor("Ingrese el valor de memoria que desea ver: ",listaNumeros,T,valorIngresado);

	MostrarVector(listaNumeros, T);

	printf("Maximo %d\n",maximo);

	return EXIT_SUCCESS;

}

/*void CargaVector(int vector[], int tam)
{
	int i ;
	for(i=0;i<tam;i++)
	{
		printf("Ingrese Numero\n");
		scanf("%d",&vector[i]);
	}
}*/
void CargaVector(int vector[], int tam)//carga Aleatoria
{
	int index ;
	char seguir;
	int auxiliar;
	do
	{
		auxiliar =PedirEntero("Ingrese un numero: ");
		index=PedirEntero("Ingrese la posicion",1,tam);
		vector[index-1]=auxiliar;

		printf("Desea seguir con otro?")
		fflush(stdin);
		scanf("%c",&seguir);
	}while(seguir=='s');
}
void InicializarVector(int vector[], int tam, int valorInicial)
{
	for(int i=0;i<T;i++)
			{
				listaNumeros[tam]=valorInicial;
			}
}


int BuscarMaximo(int vector[], int tam){
	int maximo;
	for(int i=0;i<T;i++)
	{
			if(i==0||vector[i]>maximo)
			{
				maximo=vector[i];
			}
	}
	return maximo;
}

void MostrarVector(int vector[], int tam)
{
	for(int i=0;i<tam;i++)
	{
		printf("%d\n",vector[i]);
	}
}

void MostrarIndicesDelValor(char mensaje[], int vector[], int tam, int ingreso)
{
	int i;

	for(i=0;i<tam;i++)
	{
		if(vector[i]==ingreso)
		{
			printf("El indice es  %d\n",i);
		}
	}
}
