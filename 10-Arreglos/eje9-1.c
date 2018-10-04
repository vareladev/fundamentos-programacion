/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 9-1: 	Asignar valores a un arreglo de manera estatica y mostrar sus 
				elementos.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/

#include "stdio.h"

int main(){
    int arreglo[] = {1,2,3,4,5};
    
    printf("valor de la primera posicion del arreglo de datos: %d\n",arreglo[0]);
    printf("valor de la segunda posicion del arreglo de datos: %d\n",arreglo[1]);
    printf("valor de la ultima posicion del arreglo de datos: %d\n",arreglo[4]);
    printf("Mostrando todos los datos de un arreglo (recorriendo): \n");
    for(int i=0; i<5;i++){
        printf("valor: %d\n",arreglo[i]);
    }
    printf("Mostrando la longitud de un arreglo: \n");
    int longitud = sizeof(arreglo) / sizeof(int);
    printf("Longitud: %d\n",longitud);
    return 0;
}
