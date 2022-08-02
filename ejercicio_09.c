// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 09

#include <stdio.h>
#include <ctype.h>

int main()
{
	char input[12];
	char output[12];
	char c;
	int i = 0;

	// Obtener la entrada del usuario
	printf("Ingrese una palabra:\n");
	fgets(input, 12, stdin);

	// Eliminar el salto de linea
	for(i = 0; i < 11; i++)
	{
		if(input[i] == '\n')
		{
			input[i] = 0;
			break;
		}
	}

	// Detectar si hay mas de 20 caracteres
	if(i == 11)
	{
		fputs("Error: La palabra ingresada tiene mas de 10 letras\n", stderr);
		return -1;
	}

	// Encriptar con "Codigo Cesar" la palabra ingresada
	for(i = 0; i < 11; i++)
	{
		// Terminar cuando se llega al final de la palabra
		if (input[i] == 0)
			break;

		// Convertir cualquier letra minuscula a mayuscula	
		c = toupper(input[i]);
	
		// Si la letra es anterior o es 'W', solo se le suma 3 para encriptar
		if (c <= 'W')
			output[i] = c + 3;

		// Si la letra es 'X', 'Y' o 'Z', se suman de a una las posiciones hasta que sea 'Z' y luego se vuelve a la 'A'
		else
		{
			for(int j = 3; j != 0; j--)
			{			
				c++;
				if (c == 'Z' + 1)	
					c = 'A';
			}

			output[i] = c;
		}
	}

	// Mostrar en pantalla la palabra encriptada con "Codigo Cesar"
	printf("%s\n", output);
	
	return 0;
}

