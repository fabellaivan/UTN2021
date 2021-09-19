/*
 ============================================================================
 Name        : 3-5Funciones.c
Ejercicio 3-5:
	Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
	int Sumar1(int, int);
	int Sumar2(void);
	void  Sumar3(int, int);
	void Sumar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Sumar1(int numA, int numB);
int Sumar2(void);
void Sumar3(int numA, int numB);
void Sumar4(void);
int main(void) {
	setbuf(stdout, NULL);
	int respuesta;
	int segundaRespuesta;
	int primerNumero;
	int segundoNumero;

	respuesta = Sumar1(10,1);
	printf("La Suma1 es %d \n",respuesta);

	segundaRespuesta=Sumar2();
	printf("La suma2 es : %d\n", segundaRespuesta);

	printf("Ingrese un numero");
	scanf("%d",&primerNumero);
	printf("Ingrese segundo numero");
	scanf("%d",&segundoNumero);
	Sumar3(primerNumero, segundoNumero);

	Sumar4();

}
int Sumar1(int numA, int numB)
{
	int resultado;
	resultado=numA+numB;
	return resultado;
}
int Sumar2(void)
{
	int primerNumero;
	int segundoNumero;
	int respuesta;
	printf("Ingrese un numero");
	scanf("%d",&primerNumero);
	printf("Ingrese segundo numero");
	scanf("%d",&segundoNumero);
	respuesta=primerNumero+segundoNumero;
	return respuesta;
}
void Sumar3(int numA, int numB)
{
	int resultado;

	resultado=numA+numB;
	printf("La suma es %d \n",resultado);

}
void Sumar4()
{
	int primerNumero;
	int segundoNumero;
	int respuesta;
	printf("Ingrese un numero");
	scanf("%d",&primerNumero);
	printf("Ingrese segundo numero");
	scanf("%d",&segundoNumero);
	respuesta=primerNumero+segundoNumero;
	printf("la suma4 %d\n",respuesta);
}
