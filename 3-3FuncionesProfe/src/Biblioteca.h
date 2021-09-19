/*
 * Biblioteca.h
 *
 *  Created on: 2 sept 2021
 *      Author: Ivan Fabella
 */
#include <stdio.h>
#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
/// \fn int PedirEntero(char[])
/// \brif  Pide un entero y lo retorna
/// \param mensaje El mensaje que se va a mostrar al pedir el numero
/// \return El entero ingresado
int PedirEntero(char mensaje[]);

/// @fn int PedirEnteroYValidar(char[], int, int)
/// @brief
/// @param mensaje
/// @param min
/// @param x
/// @return

int PedirEnteroYValidar(char mensaje[], int min, int max);

/// @fn int CalcularFactorial(int)
/// @brief
///
/// @param numeroIngresado
/// @return
int CalcularFactorial(int numeroIngresado);
#endif /* BIBLIOTECA_H_ */
