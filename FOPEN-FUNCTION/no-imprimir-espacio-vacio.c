// imprime un archivo txt

#include<stdio.h>

int main()
{
    FILE *fopen(), *direccionMemoriaArchivo;		// se declara un apuntador de archivo y un apuntador
		char caracter;

			printf("lee archivo, termina con EOF \n");
      direccionMemoriaArchivo = fopen("plburkert2015procesado.txt","r");
			caracter = getc(direccionMemoriaArchivo);		// lee el primer caracter 
// The getc() function reads a single character from the current stream position and advances the stream position to the next character. 
	while (caracter != EOF) 
    { 			if ( caracter == ' ')
						{	
							caracter=getc(direccionMemoriaArchivo);
							printf("aqui hay un espacio en blanco");
						}
						else if (caracter == '\t')
        		{
        		caracter=getc(direccionMemoriaArchivo);
						printf("aqui hay un tabulador");		
						}				
						else 
						{	putchar(caracter);
							caracter=getc(direccionMemoriaArchivo);
						}					
     }   
		fclose(direccionMemoriaArchivo);
}
