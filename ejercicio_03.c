// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 03

#include <stdio.h>


int main()
{
	char input[2][22];
	int i = 0;
	int comp = 1;

	// Obtener la entrada del usuario
	printf("Ingrese la primera palabra:\n");
	fgets(input[0], 22, stdin);
	
	printf("Ingrese la segunda palabra:\n");
	fgets(input[1], 22, stdin);

	for(int j = 0; j < 2; j++)
	{
		// Eliminar el salto de linea
		for(i = 0; i < 21; i++)
		{
			if(input[j][i] == '\n')
			{
				input[j][i] = 0;
				break;
			}
		}

		// Detectar si hay mas de 20 caracteres
		if(i == 21)
		{
			fputs("Error: La palabra ingresada tiene mas de 20 letras\n", stderr);
			return -1;
		}
	}

	// Comparar los strings
	for(i = 0; i < 21; i++)
	{
		if (input[0][i] == 0 && input[1][i] == 0)
			break;

		if (input[0][i] != input[1][i])
		{
			comp = 0;
			break;
		}
	}

	// Mostrar en pantalla si los strings son iguales o distintos	
	if (comp == 1)	
	{
		printf("Los strings son iguales\n");
	}
	else
	{
		printf("Los strings son distintos\n");
	}

	return 0;
}

