/*
 ============================================================================
 Name        : 4-2Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit ,
 * validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MinnimoF 32
#define MinnimoC 0
#define MaximoF 212
#define MaximoC 100

float Validaciones(char mensaje[],int min, int max);
float CambioDeTemperatura(float temperatura, char fareCel);

int main(void) {
	setbuf(stdout, NULL);
	float celcius;
	float fahrenheit;
	float fahrenCelcius;
	float celciusFahren;
	char temperatura;
	char continuar;
	do{
	printf("Que tipo de temperatura va a cargar ? f para Fah o c para Cel:   ");
	fflush(stdin);
	scanf("%c",&temperatura);
	temperatura=tolower(temperatura);

	switch(temperatura)
	{
	case 'c':
		celcius=Validaciones("Ingrese la Temperatura Celcius\n",MinnimoC,MaximoC);
		celciusFahren=CambioDeTemperatura(celcius,'c');
		printf("La temperatura celcius ingresada fue %f y en fahrenheit es %f\n\n",celcius,celciusFahren);
	break;
	case 'f':
		fahrenheit=Validaciones("Ingrese la Temperatura fahrenheit\n",MinnimoF,MaximoF);
		fahrenCelcius=CambioDeTemperatura(fahrenheit,'f');
		printf("La temoeratura en fahrenheit ingresada fue %f y en celcius es %f\n\n ",fahrenheit,fahrenCelcius);

	break;
	}

	printf("Desea continuar cargando temperaturas ? \n");
	fflush(stdin);
	scanf("%c",&continuar);
	continuar=tolower(continuar);
	}while(continuar=='s');



	return EXIT_SUCCESS;
}
float Validaciones(char mensaje[],int min, int max)
{
	float numeroIngresado;
	do{
		printf("%s",mensaje);
		scanf("%f",&numeroIngresado);
		if(numeroIngresado<min || numeroIngresado>max)
		{
			printf("\nLa temperatura ingresada no esta dentro de los valores correspondientes\n");
			numeroIngresado=0;
		}
	}while(numeroIngresado==0);

	return numeroIngresado;
}
float CambioDeTemperatura(float temperatura, char fareCel)
{
	float resultado;
	if(fareCel=='c')
	{
		resultado=(temperatura*1.8)+32;
	}
	else
	{
		resultado=0.55*(temperatura-32);
	}
	return resultado;
}
