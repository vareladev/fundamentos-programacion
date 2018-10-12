/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.9:	
    Construya un programa en lenguaje C que pida al usuario una matriz de números enteros
    de longitud NxN, y valide si la matriz es simétrica o no.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    int N;
    
    //solicitando dimensiones de matrices al usuario
    printf("Ingrese dimensión para la matriz A: ");
    scanf("%d",&N);

    //declarando matriz
    int matriz[N][N];
    
    //solicitando datos al usuario
    printf("Ingrese datos de la matriz: \n");
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            printf("Ingrese matriz[%d][%d]: ", i,j);    
            scanf("%d",&matriz[i][j]);
        }
    }

    //validando si la matriz es simetrica
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if(i != j){
                if(matriz[i][j] != matriz[j][i]){
					printf("las matrices NO es simetrica.\n");
					return 0;
				}
            }  
        }
    }    
    
    //si se termina de recorrer quiere decir la matriz es simetrica
    printf("las matriz es simetrica.\n");
	return 0;
}

