// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 05

#include <stdio.h>


int main()
{
	char input[22];
	char vocales[11] = "aeiouAEIOU";
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

	// Contar la cantidad de vocales que contiene la palabra ingresada
	// comparando con un string que contiene todas las vocales
	for(i = 0; i < 21; i++)
	{
		if(input[i] == 0)
			break;

		for(int j = 0; j < 10; j++)
		{
			if(input[i] == vocales[j])
				cantidad++;
		}
	}

	// Mostrar en pantalla la cantidad de vocales encontradas
	printf("La palabra contiene %d vocales\n", cantidad);
	
	return 0;
}

