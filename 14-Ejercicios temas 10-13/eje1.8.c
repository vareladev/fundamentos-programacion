/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.8:	
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
    int filasA, filasB, colsA, colsB;
    
    //solicitando dimensiones de matrices al usuario
    printf("Ingrese cantidad de filas para la matriz A: ");
    scanf("%d",&filasA);
    printf("Ingrese cantidad de columnas para la matriz A: ");
    scanf("%d",&colsA);
    printf("Ingrese cantidad de filas para la matriz B: ");
    scanf("%d",&filasB);
    printf("Ingrese cantidad de columnas para la matriz B: ");
    scanf("%d",&colsB);

    //validando si el tamaño es igual, no tiene sentido seguir si no es asi:
    if((filasA != filasB) || (colsA != colsB)){
        printf("las matrices NO son iguales.\n");
        return 0;
    }
    
    //declarando matrices
    int A[filasA][colsA];
    int B[filasB][colsB];
    
    //solicitando datos al usuario
    printf("Ingrese datos de la matriz A: \n");
    for (int i=0; i<filasA; i++){
        for (int j=0; j<colsA; j++){
            printf("Ingrese A[%d][%d]: ", i,j);    
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Ingrese datos de la matriz B: \n");
    for (int i=0; i<filasB; i++){
        for (int j=0; j<colsB; j++){
            printf("Ingrese B[%d][%d]: ", i,j);    
            scanf("%d",&B[i][j]);
        }
    }

    
    //validando si los datos son iguales
    for (int i=0; i<filasA; i++){
        for (int j=0; j<colsA; j++){
            if(A[i][j] != B[i][j]){
                printf("las matrices NO son iguales.\n");
                return 0;
            }  
        }
    }    
    
    //si se termina de recorrer quiere decir que todos los elementos son iguales
    printf("las matrices son iguales.\n");
	return 0;
}

