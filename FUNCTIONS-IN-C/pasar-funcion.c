#include <stdio.h>

void imprimir();
void ejecutar(void());

int main()
{
        ejecutar(imprimir); // sends address of print
        return 0;
}

void imprimir()
{
        printf("Hello! \n");
}

void ejecutar(void f()) // receive address of print
{
        f();
}
