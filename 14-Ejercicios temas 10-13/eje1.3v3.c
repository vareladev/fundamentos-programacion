/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.3v3:	
	Construya una función en C, que reciba una cadena de texto y devuelva una cadena con cada
	uno de los caracteres de la cadena inicial duplicados.
Autor: Erick Varela, v1.0.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void){
    char cadena[MAX];
    
    //obteniendo datos
    printf("Ingrese frase o palabra:");
    scanf("%[^\n]s",cadena);
    
    //calculando longitud
    int longitud = strlen(cadena);
    
    //creando segunda cadena de texto con el doble de espacio
    int longitud2 = longitud * 2;
    char duplicada[longitud2+1];
    
    int posicioncad1 = 0;
    //recorriendo la segunda cadena y obteniendo cada posicion de la primera cadena
    for (int i=0; i<longitud2 ; i=i+2){
        for(int j=0;j<2;j++){
            duplicada[i+j] = cadena[posicioncad1];
        }
        posicioncad1++;
    } 
    duplicada[longitud2] = '\0';
    
    printf("%s\n",duplicada);
    printf("\n");

    return 0;
}