#include<stdio.h>

int	potencia(int m, int n);

/* test power function */

main()
{
	int	i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, potencia(2, i), potencia(-3, i));
	return 0;
}

/* power:  raise base to n-th power; n >= 0 */

int potencia(int base, int n)
{
	int	i, p;
	p = 1;

	for (i = 1; i <= n; ++i)
		p = p * base;
	
    return p;
}
