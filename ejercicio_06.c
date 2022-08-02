// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 06

#include <stdio.h>


int main()
{
	char input[22];
	int i = 0;
	int cantidad[256] = {0};
	int mas_veces = 0;

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

	// Contar la cantidad de veces que aparece cada letra en la palabra ingresada
	// Se utiliza un vector en el que cada posicion corresponde a un caracter de la tabla ASCII
	for(i = 0; i < 21; i++)
	{
		if(input[i] == 0)
			break;

		cantidad[input[i]]++;
	}

	for(i = 0; i < 255; i++)
	{
		if (cantidad[mas_veces] <= cantidad[i])
			mas_veces = i;
	}

	// Mostrar en pantalla la cantidad de vocales encontradas
	printf("La letra %c, con %d ocurrencias, es la que mas aparece\n", mas_veces,  cantidad[mas_veces]);
	
	return 0;
}

