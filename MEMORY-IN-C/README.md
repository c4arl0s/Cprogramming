When C was created, in 1972, computers were much slower. Most programs were written in assembly. C came along as a better assembly allowing programmers to manipulate memory directly with pointers. Programmers worked much closer to the machine and had to understand how memory worked to make their programs efficient.

Memory can be though of as an array of bytes where each address is on index in the array and holds 1 byte. If a computer has 4K of memory, it would have 4096 addresses in the memory array. How operating systems handle memory is much more complex than this, but the analogy provides an easy way to think about memory to get started.

Let’s say our computer has 4K of memory and the next open address is 2048. We declare a new char variable i = ‘a’. When the variable gets declared, enough memory is set aside for its value from unused memory. The variable name is linked to the starting address in memory. Our char i has a value ‘a’ stored at the address 2048. Our char is a single byte so it only takes up index 2048. If we use the & operator on our variable it would return the address 2048. If the variable was a different
type, int for instance, it would take up 4 bytes and use up elements 2048-2051 in the array. Using the & would still return 2048 though because the int starts at that index even though it takes up 4 bytes. Let’s look at an example.

```c

 
Pull requests
Issues
Marketplace
Explore
 
@c4arl0s 
c4arl0s
/
Cprogramming
 Watch 0
 Star 0
 Fork 0
 Code  Issues 0  Pull requests 0  Actions  Projects 0  Wiki  Security  Insights  Settings
Branch: master 
Cprogramming/MEMORY-IN-C/dynamic-memory.c
Find file Copy path
@c4arl0s c4arl0s Add files via upload
6da0560 on Sep 7, 2018
1 contributor
42 lines (35 sloc)  1.12 KB
RawBlameHistory
    
#include <stdlib.h>
#define TAMANO_INICIAL 10 
#define BUCKET_SIZE 5

static int conteo_datos;	/* how many ints we have stored */
static int tamano_datos;	/* how many ints we *can* store in this block */
static int *datos;		/* the block of datos, itself */

int main(void)
{
	void agrega_datos(int nuevos_datos);	/* function prototypec */
	int	i;

	/* first, initialize the datos area: */
	conteo_datos = 0;
	tamano_datos = TAMANO_INICIAL;
	datos = malloc(tamano_datos *sizeof(int));	/* allocate initial area */

	/* now add a bunch of datos */
	for (i = 0; i < 23; i++) {
		agrega_datos(i);
	}
	return 0;
}

void agrega_datos(int nuevos_datos)
{
	/* if conteo_datos == tamano_datos, the area is full and needs to be realloc()'d before we can add another: */

	if (conteo_datos == tamano_datos) 
    {
		/* we 're full up, so add a bucket */
        tamano_datos += BUCKET_SIZE;
		datos = realloc(datos, tamano_datos * sizeof(int));
	}
	    /* now store the data */
		* (datos + conteo_datos) = nuevos_datos;

    /* the above line could have used array notation, like so: */
	/* data[conteo_datos] = nuevos_datos; */
        conteo_datos++;
}
´´´



