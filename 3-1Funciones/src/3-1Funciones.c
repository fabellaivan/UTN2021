/*
 ============================================================================
 Name        : 3-1Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void MostrarFlotante(float numero);
int main(void) {
	setbuf(stdout, NULL);
	float flotante;
	flotante=3.15;
	MostrarFlotante(flotante);
}
MostrarFlotante(float numero)
{
	printf("El flotante es %.3f", numero);
}
