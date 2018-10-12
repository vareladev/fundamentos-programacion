/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.7:	
    Crear un programa en lenguaje C que dada una matriz de enteros de dimensiones 5x5
    ingresada por el usuario, cuente cuántos ceros aparecen en la matriz ingresada. 
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//macros
#define TAM 5

//función principal
int main(void){
    int matriz[TAM][TAM];
    int contadorceros = 0;
    
    //solicitando datos al usuario
    for (int i=0; i<TAM; i++){
        for (int j=0; j<TAM; j++){
            printf("Ingrese M[%d][%d]: ", i,j);    
            scanf("%d",&matriz[i][j]);
        }
    }
    
    //calculado cuantos ceros hay en la matriz
	for (int i=0; i<TAM; i++){
        for (int j=0; j<TAM; j++){
            if(matriz[i][j] == 0){
                contadorceros++;
            }
        }
    }
    
    //mostrando resultado:
    printf("En la matriz hay %d ceros.\n",contadorceros);

	return 0;
}