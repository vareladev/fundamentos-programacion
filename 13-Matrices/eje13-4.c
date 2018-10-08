/******************************************************************************
Fundamentos de programación. Matrices.
ejemplo 13-4:	
	Programa en lenguaje C que pida al usuario una matriz A de dimensión NxN, y luego muestre
	la suma de los elementos que se encuentran en una pocisión par dentro de la matriz
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//Bloque de declaracion
	int N;
	int suma = 0;

	//Solicitando N
	printf("Ingrese el tamaño de las matriz: ");
	scanf("%d",&N);

	//declarando matriz
	int A[N][N];

	//asignando valores a la matriz A:
	printf("Ingrese valores de la matriz A:\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Ingrese A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	//Operando:
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if((i+j)%2 == 0){
				suma = suma + A[i][j];
			}
		}
	}

	//Mostrandor resultado
	printf("\nLa suma de los elementos en posición par es:%d\n",suma);
   
	return 0;
}
