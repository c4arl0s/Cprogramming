// imprime un archivo txt

#include<stdio.h>

int main()
{
    FILE *fopen(), *direccionMemoriaArchivo;		/* se declara un apuntador de archivo y un apuntador */
		char caracter;
		int numeroLineas=0;

      direccionMemoriaArchivo = fopen("pl-modificado-2015.txt","r");
			caracter = getc(direccionMemoriaArchivo); 

	while (caracter != EOF) 
    {
        caracter=getc(direccionMemoriaArchivo);
				if (caracter == '\n') {numeroLineas++; printf("\n linea %d ", numeroLineas);}	
		}
        fclose(direccionMemoriaArchivo);
}				/* end of program */

