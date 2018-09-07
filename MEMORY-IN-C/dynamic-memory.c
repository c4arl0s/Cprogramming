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
