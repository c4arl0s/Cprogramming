#include <stdio.h>

int suma(int a, int b)
{
	return a + b;
}

int main()
{
	int	var1, var2;
	var1 = 5;
	var2 = 8;
	printf("La suma es : %i\n", suma(var1, var2));
}

/* Bien aquí hemos pasado a la función los parámetros 'a' y 'b' (que no podemos modificar) y nos devuelve la suma de ambos. */
