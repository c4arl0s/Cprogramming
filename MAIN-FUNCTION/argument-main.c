#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
            
            printf("el numero de argumentos que ingresaste es: %d\n", argc);
            while(argc--)      
                printf("%s\n", *argv++);
            exit(EXIT_SUCCESS);
}
