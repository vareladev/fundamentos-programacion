/******************************************************************************
Fundamentos de programación. Matrices.
ejemplo 13-1:	
	Declaración y asignación de una matriz.
Autor: Erick Varela, v1.0.
*******************************************************************************/

#include <stdio.h>

#define N 3

//función principal
int main(void){
	//Declarando matriz 3x3;
	int matriz[N][N];

	int contador = 0;
	//asignando valores a una matriz
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			matriz[i][j] = contador;
			contador++;
		}
	}
	
	//Mostrando los valores de una matriz version 1
	printf("Mostrando los valores de una matriz version 1:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Posicion (i,j)=%d\n",matriz[i][j]);
		}
	}

	//Mostrando los valores de una matriz version 2
	printf("\nMostrando los valores de una matriz version 2:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Posicion (%d,%d)=%d\n",i,j,matriz[i][j]);
		}
	}

	//Mostrando los valores de una matriz version 3
	printf("\nMostrando los valores de una matriz version 3:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}

	//Mostrando los valores de una matriz version 4
	printf("\nMostrando los valores de una matriz version 4:\n");
	for(int i=0;i<N;i++){
		printf("|");
		for(int j=0;j<N;j++){
			printf(" %d |",matriz[i][j]);
		}
		printf("\n");
	}
   
	return 0;
}
