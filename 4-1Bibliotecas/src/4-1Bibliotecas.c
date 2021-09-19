/*
 ============================================================================
Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
Utilizar la función PedirNumero de la ejercitación 3-4.
Por ejemplo:
5! = 5*4*3*2*1 = 120

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int PedirEntero(char mensaje[]);

int main(void) {
	setbuf(stdout, NULL);
	int resultado;
	resultado=PedirEntero("Ingrese entero a factorizar");

	printf("El resultado es: %d  ",resultado);
	return EXIT_SUCCESS;
}
int PedirEntero(char mensaje[])
{
	int numeroIngresado;
	int resultado;
	resultado=1;
	printf("%s",mensaje);
	scanf("%d",&numeroIngresado);

	for(int i=1;i<=numeroIngresado;i++)
	{
		resultado=resultado*i;
	}

	return resultado;
}
