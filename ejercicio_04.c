// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 04

#include <stdio.h>


int main()
{
	char input[22];
	int i = 0;
	int cantidad = 0;

	// Obtener la entrada del usuario
	printf("Ingrese una palabra:\n");
	fgets(input, 22, stdin);

	// Eliminar el salto de linea
	for(i = 0; i < 21; i++)
	{
		if(input[i] == '\n')
		{
			input[i] = 0;
			break;
		}
	}

	// Detectar si hay mas de 20 caracteres
	if(i == 21)
	{
		fputs("Error: La palabra ingresada tiene mas de 20 letras\n", stderr);
		return -1;
	}

	// Contar la cantidad de letras 'a' que contiene la palabra ingresada
	for(i = 0; i < 21; i++)
	{
		if(input[i] == 0)
			break;

		if(input[i] == 'a')
			cantidad++;
	}

	// Mostrar en pantalla la cantidad de letras encontradas
	printf("La palabra contiene %d 'a' minusculas\n", cantidad);
	
	return 0;
}

