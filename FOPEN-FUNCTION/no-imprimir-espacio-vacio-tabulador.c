// imprime un archivo txt

#include<stdio.h>

int main()
{
    FILE *fopen(), *direccionMemoriaArchivo;		// se declara un apuntador de archivo y un apuntador
		char caracter;

			printf("read file, terminate with EOF \n");
      direccionMemoriaArchivo = fopen("plburkert2015procesado.txt","r");
			caracter = getc(direccionMemoriaArchivo);		// lee el primer caracter 

			// The getc() function reads a single character from the current stream position and advances the stream position to the next character. 

		while (caracter != EOF) 
    	{ 			if ( caracter == ' ')												// verifica si es un espacio en blanco
						{	
							caracter=getc(direccionMemoriaArchivo);		// obten el siguiente caracter
						}
						else if (caracter == '\t')									// verifica si es un tabulador
        		{
        		caracter=getc(direccionMemoriaArchivo);			// obten el siguiente caracter
						}				
						else 
						{	putchar(caracter);												// imprime el caracter que no es espacio en blanco ni tabulador
							caracter=getc(direccionMemoriaArchivo);		// obtiene el siguiente caracter
						}
					
     	}   
		fclose(direccionMemoriaArchivo);										// cierra el archivo.
}

