#include <stdio.h>
 
main(int argc, char *argv[])            /* argc numero de argumentos argcv es un apuntador de tipo caracter */
{
    int contador;
        
    printf("Number of command line arguments passed: %d\n", argc);
           
    for ( contador = 0 ; contador < argc ; contador++)
    printf("%d. Command line argument passed is %s\n", contador+1, argv[contador]);
    return 0;
}
