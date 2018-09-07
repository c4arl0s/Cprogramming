/* The C library function int putc(int char, FILE *stream) writes a character (an unsigned char) specified by the argument char to the specified stream and advances the position indicator for the stream. */
/* PARAMETERS */
/* char − This is the character to be written. The character is passed as its int promotion. */
/* stream − This is the pointer to a FILE object that identifies the stream where the character is to be written. */
/* A stream represents a sequence of objects (usually bytes, but not necessarily so), which can be accessed in sequential order. Typical operations on a stream: */

#include <stdio.h>

int main () 
	{
   FILE *apuntador_de_archivo; 	/* declara un apuntador a un tipo archivo */
   int ch;		/* declara una variable de tipo entero */

   apuntador_de_archivo = fopen("file.txt", "w");	/* Inicializa fp apuntadndo al archivo file.txt */

   for( ch = 33 ; ch <= 100; ch++ ) 
	{
      putc(ch, apuntador_de_archivo);		
  }
   fclose(apuntador_de_archivo);	/* cierra el archivo */
   
   return(0);
  }