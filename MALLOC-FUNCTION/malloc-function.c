#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char nombre[20], *apuntador_nombre;
	int longitud;
strcpy(nombre, "alejandro");

longitud=strlen(nombre); /* calculamos el numero de espacios */
printf("%i", longitud);	/* imprime el numero de espacios */

/* recordar que al calcular los espacios falta tomar en cuenta el caracter nulo */

apuntador_nombre= malloc((longitud+1)*sizeof(char));
strcpy=(apuntador_nombre, nombre);
printf("nombre: %s", apuntador_nombre);


return 0;
}
