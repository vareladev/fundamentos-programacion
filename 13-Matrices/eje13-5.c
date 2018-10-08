/******************************************************************************
Fundamentos de programación. Matrices.
ejemplo 13-5:	
	Programa en lenguaje C que pida al usuario una matriz A de dimensión NxN, y luego muestre
	cuantos numeros pares y cuantos numeros impares contiene la matriz, N debe ser solicitado
	al usuario también.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//Bloque de declaracion
	int N;
	int pares = 0;
	int impares = 0;

	//Solicitando N
	printf("Ingrese el tamaño de las matriz: ");
	scanf("%d",&N);

	//declarando matrices
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
			if(A[i][j]%2 == 0){
				pares++;
			}
			else{
				impares++;
			}
		}
	}

	//Mostrandor resultado
	printf("Total de pares: %d; Total de impares: %d\n",pares, impares);
   
	return 0;
}
