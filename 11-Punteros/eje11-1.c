/******************************************************************************
Fundamentos de programación.
Punteros, ejemplo 11-1: punteros
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/

#include <stdio.h>

int main(void) {
    //Declarando variable y puntero
    int x;
    int *p;
    //Asignando puntero
    p = &x;
    //Asignando dato a variable
    x = 10;
    //imprimiendo contenido de variable
    printf("Contenido de variable:\n");
    printf("x = %d\n", x);
    //Asignando dato a puntero
    *p = 13;
    //imprimiendo contenido de variable
    printf("Contenido de variable, luego de manipular puntero:\n");
    printf("x = %d\n", x);
    return 0;
}