#include<stdio.h>

#define mi_maximo 11

int main ()
{
    char mi_arreglo[mi_maximo];

    printf(" Please enter your firts name: ");
 
    // fgets( char* , int, File *) */     
		// &mi_arreglo[0], el primer argumento es un apuntador al elemento que contiene el caracter 0*/
    // char *fgets(char *line, int maxline, FILE *fp) */

    fgets(mi_arreglo, mi_maximo, stdin);
    printf("Wellcome %s", mi_arreglo);
    return 0;
}

/* mi name is       -> total 11 bytes, caracter 0 al final, el byte 10 es caracter 0 (cero) */
 
