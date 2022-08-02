// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 01

#include <stdio.h>


int main()
{
	char input[22];
	int i = 0;

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

	// Buscar el final del string. Los strings en C terminan con un 0
	for(i = 0; i < 21; i++)
	{
		if (input[i] == 0)
			break;
	}

	// Mostrar la cantidad de letras
	printf("La palabra tiene %d letras\n", i);
	
	return 0;
}
