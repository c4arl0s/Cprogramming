// imprime un archivo txt

#include<stdio.h>

int 
main()
{
	FILE           *fopen(), *direccionMemoriaArchivo;	/* se declara un
								 * apuntador de archivo
								 * y un apuntador */
	char		caracter;
	int		numeroLineas = 0;

	direccionMemoriaArchivo = fopen("pl-modificado-2015.txt", "r");
	caracter = getc(direccionMemoriaArchivo);

	//The getc() function reads a single character from the current stream position and advances the stream position to the next character.
	while           (caracter != EOF) {
		if (caracter == ':') {
			caracter = getc(direccionMemoriaArchivo);
			while (caracter != '\n') {
				caracter = getc(direccionMemoriaArchivo);
			}
		} else {
			putchar(caracter);
			caracter = getc(direccionMemoriaArchivo);
		}
	}
	fclose(direccionMemoriaArchivo);
}				/* end of program */
