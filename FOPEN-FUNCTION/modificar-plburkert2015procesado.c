// lee un archivo, lo modifica y lo guarda en uno nuevo.
#include<stdio.h>

int main()
{
    FILE *fopen(), *direccionMemoriaArchivo;		// se declara un apuntador a archivo y un apuntador
		FILE *fopen(), *direccionMemoriaArchivoMod;	// se declara un apuntador a archivo donde se escribirá la nueva info.
		char caracter;

			printf("lee archivo, terminar con EOF \n");
      direccionMemoriaArchivo = fopen("plburkert2015procesado.txt","r");
			direccionMemoriaArchivoMod = fopen("pl-modificado-2015.txt","w");

			caracter = getc(direccionMemoriaArchivo);		// lee el primer caracter 
	
		while (caracter != EOF) 
    { 			if ( caracter == ' ') 				{ caracter=getc(direccionMemoriaArchivo); }
						else if (caracter == '\t')		{ caracter=getc(direccionMemoriaArchivo);	}				
						else 													{	putchar(caracter); fputc(caracter,direccionMemoriaArchivoMod); caracter=getc(direccionMemoriaArchivo); }
		}
		fclose(direccionMemoriaArchivoMod);   
		fclose(direccionMemoriaArchivo);										// cierra el archivo.
}

