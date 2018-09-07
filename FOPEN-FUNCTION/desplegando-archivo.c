#include <stdio.h>

/* Here is a small program that reads a file and display its contents on screen. */

void main()
{

FILE *fopen(), *fp;
char c, primer;

fp = fopen("burkert-2015-PL.txt","r");  /* fopen() shall return a pointer to the object controlling the stream. */
c = getc(fp) ;   /* getc functions is used to read a character from a file. In a C program, we read a character as follows. getc(fp) */
primer=c;        /* asignando el primer caracter a primer */
while(c != EOF) /* mientras c sea diferente de end of file EOF (End Of File) */
{
putchar(c);    /*The C library function int putchar(int char) writes a character (an unsigned char) specified by the argument char to stdout.*/
c = getc(fp);  /* devuelve un caracter desde un archivo y lo asigna a c*/ 
}    
fclose(fp);
printf("This is the first character: %c \n",primer);
}
