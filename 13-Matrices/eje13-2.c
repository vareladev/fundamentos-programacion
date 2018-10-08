/******************************************************************************
Fundamentos de programación. Matrices.
ejemplo 13-2:	
	Programa en lenguaje C que pida al usuario dos matrices A yB de dimensión NxN cada una, y luego, muestre
	una matriz C con el resultado de realizar la suma A+B. N debe ser solicitado al usuario.
	la suma de dos matrices es la matriz que tiene en la posición fila i y columna j la suma de los elementos 
	de la misma posición en las matrices que sumamos, estas deben ser de la misma dimensión.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//Bloque de declaracion
	int N;

	//Solicitando N
	printf("Ingrese el tamaño de las matrices: ");
	scanf("%d",&N);

	//declarando matrices
	int A[N][N];
	int B[N][N];
	int C[N][N];

	//asignando valores a la matriz A:
	printf("Ingrese valores de la matriz A:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Ingrese A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	

	//asignando valores a la matriz B:
	printf("Ingrese valores de la matriz B:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Ingrese B[%d][%d]: ",i,j);
			scanf("%d",&B[i][j]);
		}
	}

	//Operando A+B:
	printf("Mostrando los valores de una matriz version 1:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	//Mostrandor resultado
	printf("\nMostrando el resultado de operar A+B::\n");
	for(int i=0;i<N;i++){
		printf("|");
		for(int j=0;j<N;j++){
			printf(" %d |",C[i][j]);
		}
		printf("\n");
	}
   
	return 0;
}
