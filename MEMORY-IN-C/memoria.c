#include<stdio.h>

/* se declara una variable global de tipo entero */

int total;

/*se declara una funcion que devuelve el cuadrado del parametro*/

int cuadrado(int x)     
{
    return x*x;
}

/*se declara una funcion que suma el parametro x y y, y lo eleva al cuadrado */

int cuadrado_de_suma(int x,int y)
{
    int z=cuadrado(x+y);
    return z;
}

/* se declara una funcion principal */

int main()

{ 
    int a=4, b=8;
    total=cuadrado_de_suma(a,b);
    printf(" Programa que calcula el cuadrado de la suma de a y b \n");
    printf(" a=%d b=%d \n", a,b);
    printf("La salida es = %d \n", total);
}




