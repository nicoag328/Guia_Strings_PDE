// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 08

#include <stdio.h>
#include <string.h>

int main()
{
	char nombre[30];
	char primer_nombre[30];

	// Obtener el nombre de la primer persona
	fgets(nombre, 30, stdin);

	// Eliminar el salto de linea
	for(int j = 0; j < 29; j++)
	{
		if(nombre[j] == '\n')
		{
			nombre[j] = 0;
			break;
		}
	}

	strcpy(primer_nombre, nombre);	
	
	// Obtener el resto de los nombres
	while(1)
	{
		// Obtener nombre de la persona
		fgets(nombre, 30, stdin);

		// Eliminar el salto de linea
		for(int j = 0; j < 29; j++)
		{
			if(nombre[j] == '\n')
			{
				nombre[j] = 0;
				break;
			}
		}

		// Terminar el ingreso
		if(strcmp(nombre, "FIN") == 0)
			break;

		// Comparar si la persona recien ingresada se posiciona antes en el orden alfabetico
		if(strcmp(nombre, primer_nombre) < 0)
			strcpy(primer_nombre, nombre);
	}

	// Mostrar en pantalla la primera persona segun el orden alfabetico
	printf("%s es la primera persona segun el orden alfabetico\n", primer_nombre);
	
	return 0;
}

