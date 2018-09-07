/* Hello World */
/*
 * this gives include statement, brings in the header file stdio.h ,
 * located often on unix systems at the directory /usr/include/,
 * and includes  the printf() function, as well as others, snprintf, scanf,
 *  getchar, getline.
 *  In C, functions that are exported have their "signatures" - function name and
 *   parameter list -
 *   4 http://gcc.gnu.org/onlinedocs/gcc- 4.3.0/gcc/Debugging- Options.html
 *   22
 *       
 *       listed in header files for exporting, and then the same signatures are defined
 *        in another file,
 *        often of the same name, to be compiled once into an object file, and on unix
 *         systems often reside
 *         in /usr/lib/   with file names like stdlib.a  or stdlib.so , often as soft links
 *          to versioned files
 *          e.g. stdlib.1.3.so , */
#include <stdio.h>
/*
 *   this gives the standard library, which has functions
 *     such as rand() random number generation (e.g. for games)
 *       malloc() and free()  for dynamic heap memory allocation as opposed to stack
 *        memory allocation.
 *          stack memory can be allocated by declaring variables and arrays at the start
 *           of a function , including
 *             the main function, and will be destroyed when the function exits.
 *             */
#include <stdlib.h>
/*
 *  the next line is the standard expected function name "main" and argument list
 *   of the first function
 *    to be executed for this program when the compiled program is executed.
 *     the first argument is the number of arguments, and the second argument is an
 *      array of pointers to
 *       arrays of characters (strings) which contain arguments .e.g.  "-?" , "-v" ,
 *        "-c"
 *        */
int main(int n_args, char* args[]) {
    printf("\n Hello World! \n");     // outputs a string without formatting.
    exit(0);                    // stdlib.h function to exit with a code, if executed from say a bash shell script, 0 will be
                                //  returned  , which can be used inside a shell conditional if
                                //  statement. 
}
