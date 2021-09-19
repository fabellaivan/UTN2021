/*
 ============================================================================
Ejercicio 6-1:
Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int varA;
	int varB;
	int varAux;
	varA=5;
	varB=10;
	printf("%d %d  1er :\n",varA,varB);
	varAux=varA;
	varA=varB;
	varB=varAux;
	printf("%d %d 2do :\n",varA,varB);
	return EXIT_SUCCESS;
}
