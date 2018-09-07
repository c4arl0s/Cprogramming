// Open, Read and close a file: reading string by string */
// char *fgets(char *str, int n, FILE *stream) 

# include <stdio.h>
int main()
{
 				 
	FILE *direccionMemoriaArchivo ;			// declara un apuntador al archivo
  char caracteres[1000] ;

	printf( "Opening the file plburkert2015procesado.txt in read mode" ) ;
  direccionMemoriaArchivo = fopen( "plburkert2015procesado.txt", "r" ) ;		// inicializa el apuntador declarado al archivo.

  if ( direccionMemoriaArchivo == NULL )
			{
        printf( "\nCould not open file test.c" ) ;
        return 1;
      }
  printf( "\nReading the file plburkert2015procesado.txt\n" ) ;

   while( fgets ( caracteres, 1000, direccionMemoriaArchivo ) != NULL )		// fgets retorna un apuntador de tipo caracter, por eso lo puede comparar con NULL
      {
				printf( "%s" , caracteres ) ;
        printf("\nClosing the file burkert2015procesado.txt\n") ;
        fclose(direccionMemoriaArchivo) ;
			}

      return 0;
}