/*
 * Supongamos ahora que queremos tener la suma pero además queremos que var1
 * se haga cero dentro de la función. Para eso haríamos lo siguiente:
 */

#include <stdio.h>

int suma(int *a, int b)
{
	int	c;

	c = *a + b;
	*a = 0;
	return c;
}

int main()
{
	int	var1, var2;

	var1 = 5;
	var2 = 8;

	printf("La suma es: %i y a=%i \n", suma(&var1, var2), var1);
}
