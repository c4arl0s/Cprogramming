/* Inclusión de archivos */
#include <stdio.h>

void holamundo(void) /* Función donde se ejecuta la lógica del programa */
{
        printf("Hola Mundo\n"); /* imprime la cadena */
            return; /* sale de la función */
}
 
int main(void) /* Función principal del programa */
{
        holamundo(); /* llamada a la función holamundo */
            return 0; /* sale del programa con código 0 (correcto) */
}
