#include <stdio.h>
#include <stdlib.h>

int main()
{
		FILE *direccionMemoriaArchivo;   /* direccionMemoriaArchivo es un apuntador */

    /* abre un archivo escribible */
    direccionMemoriaArchivo = fopen ("archivo.txt", "w+");

    /* imprime dentro del archivo */
    fprintf(direccionMemoriaArchivo, "%s %s %s %d \n", "We", "are", "in", 2012);
		printf("\nImprime la direccion de direccionMemoriaArchivo: %u \n", (unsigned int)direccionMemoriaArchivo);
    /* cierra el archivo */        
    fclose(direccionMemoriaArchivo);
                   
    return(0);
}

// w+ Creates an empty file for writing. 
// If a file with the same name already exists, 
// its content is erased and the file is considered as a new empty file.*/
