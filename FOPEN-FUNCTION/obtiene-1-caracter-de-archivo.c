#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{

    FILE *fopen(), *direccionMemoriaArchivo;
    int caracter;

    printf("Se imprime solo el primer caracter del archivo plburkert2015procesado.txt\n");

    direccionMemoriaArchivo = fopen("plburkert2015procesado.txt","r");   /* abre archivo */
    caracter = getc(direccionMemoriaArchivo);              /* devuelve un caracter desde un archivo y lo asiga a c */
    putchar(caracter);
		printf("\n");                 											/** Imprime el primer caracter del archivo txt */ 
    fclose(direccionMemoriaArchivo);

}
