// Guia Strings Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 07

#include <stdio.h>
#include <string.h>
#include "scan_wrappers.h"

struct persona_t {

	char nombre[30];
	int edad;
};

int main()
{
	struct persona_t persona_ingresada;
	struct persona_t persona_masjoven;
	persona_masjoven.edad = -1;
	int i = 0;

	// Obtener la entrada del usuario
	for (i = 0; i < 5; i++)
	{
		printf("\nPersona %d:\n", i + 1);
		
		// Obtener nombre de la persona
		printf("Nombre: ");
		fgets(persona_ingresada.nombre, 30, stdin);

		// Eliminar el salto de linea
		for(int j = 0; j < 29; j++)
		{
			if(persona_ingresada.nombre[j] == '\n')
			{
				persona_ingresada.nombre[j] = 0;
				break;
			}
		}

		// Obtener edad de la persona
		printf("Edad: ");
		persona_ingresada.edad = scan_int();
		
		// Comparar si la persona recien ingresada es mas joven que las anteriores
		if(persona_ingresada.edad <= persona_masjoven.edad || persona_masjoven.edad == -1)
		{
			persona_masjoven.edad = persona_ingresada.edad;
			strcpy(persona_masjoven.nombre, persona_ingresada.nombre);
		}
	}

	// Mostrar en pantalla el nombre y edad de la persona mas joven
	printf("\n%s es la persona mas joven con una edad de %d\n", persona_masjoven.nombre,  persona_masjoven.edad);
	
	return 0;
}

