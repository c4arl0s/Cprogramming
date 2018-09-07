/* El paso por valor envía una copia de los parámetros a la función por lo tanto los cambios que se hagan en ella no son tomados en cuenta dentro de la función main(). */

#include<stdio.h>

void sumar_valor(int numero); /* prototipo de la función */

int main(void)
{
        int numero = 57; /* definimos numero con valor de 57*/
        int valor;

        printf("valor de numero antes de pasar a la funcion (numero=57): %d \n", numero);
        
        sumar_valor(numero); /* enviamos numero a la función */

        printf("Valor de numero dentro de main() es: %d \n", numero);
                    /* podemos notar que el valor de numero se modifica
                     *   * sólo dentro de la función sumar_valor pero en la principal
                     *       * número sigue valiendo 57 
                     *           */

        return 0;
}

void sumar_valor(int numero)
{
        numero++; /* le sumamos 1 al numero */
        /* el valor de número recibido se aumenta en 1
        *   * y se modifica dentro de la función sumar_valor()
        *       */
        printf("Valor de numero dentro sumar_valor() es: %d\n", numero);
        /* aqui no retornamos ningun valor */
}

