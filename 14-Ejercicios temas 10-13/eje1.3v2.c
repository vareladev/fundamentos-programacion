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
        duplicada[i] = cadena[posicioncad1];
        duplicada[i+1] = cadena[posicioncad1];
        posicioncad1++;
    } 
    duplicada[longitud2] = '\0';
    
    printf("%s\n",duplicada);
    printf("\n");

    return 0;
}