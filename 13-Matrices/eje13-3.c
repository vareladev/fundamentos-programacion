/******************************************************************************
Fundamentos de programación. Matrices.
ejemplo 13-3:	
	Programa en lenguaje C que pida al usuario una matriz A de dimensión NxN, y luego, muestre
	la matriz transpuesta de A. N debe ser solicitado al usuario.
	se llama matriz traspuesta de A a la matriz que se obtiene cambiando ordenadamente las filas por las columnas.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//Bloque de declaracion
	int N;

	//Solicitando N
	printf("Ingrese el tamaño de la matriz: ");
	scanf("%d",&N);

	//declarando matriz
	int A[N][N];
	int B[N][N];

	//asignando valores a la matriz A:
	printf("Ingrese valores de la matriz A:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Ingrese A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	//Transponiendo A:
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			B[i][j] = A[j][i];
		}
	}

	//Mostrandor resultado
	printf("\nMatriz A transpuesta:\n");
	for(int i=0;i<N;i++){
		printf("|");
		for(int j=0;j<N;j++){
			printf(" %d |",B[i][j]);
		}
		printf("\n");
	}
   
	return 0;
}
