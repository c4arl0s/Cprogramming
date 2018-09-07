#include <stdio.h>

int main ()
{
        FILE *direccionMemoriaArchivo;
        int c;
            
        direccionMemoriaArchivo = fopen("file.txt","r");
        
        while(1)
        {
            c = fgetc(direccionMemoriaArchivo);
            if( feof(direccionMemoriaArchivo) )
                { 
                    break ;
                }
            printf("%c \n", c); /* imprime letra a letra el archivo file.txt */
        printf("\nlets print el valor de direccionMemoriaArchivo: %u \n", (unsigned int)direccionMemoriaArchivo);                                        }
            fclose(direccionMemoriaArchivo);
				                      
        return(0);
}
