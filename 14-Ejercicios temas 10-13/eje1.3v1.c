/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.3v1:	
	Construya una función en C, que reciba una cadena de texto y devuelva una cadena con cada
	uno de los caracteres de la cadena inicial duplicados.
Autor: Erick Varela, v1.0.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void){
    char cadena[MAX];
    
    printf("Ingrese frase o palabra:");
    scanf("%[^\n]s",cadena);
    
    //calculando longitud
    int longitud = strlen(cadena);
    
    //recorriendo cadena
    for (int i=0; i<longitud ; i++){
        printf("%c%c",cadena[i],cadena[i]);
    } 
    printf("\n");

    return 0;
}
