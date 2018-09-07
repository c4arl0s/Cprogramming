/*El paso por referencia se hace utilizando apuntadores.*/
/* Se envía la dirección de memoria de la variable, por lo tanto los cambios que haga la función si afectan el valor de la variable. Ejemplo: */

#include <stdio.h>

void sumar_referencia(int *numero); /* declaracion prototipo de la función */
                                    /* donde el parametro pasado es un apuntador a la variable numero */
int main(void)
{

int numero = 57; /* definimos numero con valor de 57*/
        
printf("imprimimos el valor de la variable antes de entrar a la funcion: %d \n", numero);    
sumar_referencia(&numero); /* enviamos numero a la función / la direccion de numero */
printf("\nValor de numero dentro de main() es: %d \n", numero);
                    /* podemos notar que el valor de numero se modifica
                     *   * y que ahora dentro de main() también se ha modificado
                     *       * aunque la función no haya retornado ningún valor.
                     *           */
                    return 0;
}

void sumar_referencia(int *numero)
{
        *numero += 1; /* le sumamos 1 al numero */
        /* el valor de numero recibido se aumenta en 1
        *   * y se modifica dentro de la función
        *       */
        printf("\nValor de numero dentro sumar_referencia() es: %d", *numero);
        return;
}
