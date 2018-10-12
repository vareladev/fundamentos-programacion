/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.11:	
	Construya un programa en lenguaje C que pida una matriz de números enteros de longitud
	NxM, y dos números A y B donde 0 <= A < N y 0 <= B < N, luego, el programa intercambiará
	la fila A por la fila B y la fila B por la fila A respectivamente.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    int N;
	int M;
	int A;
	int B;
    
    //solicitando dimensiones de matrices al usuario
    printf("Ingrese número de filas para la matriz A: ");
    scanf("%d",&N);
	printf("Ingrese número de columnas para la matriz A: ");
    scanf("%d",&M);

    //declarando matriz
    int matriz[N][M];
    int aux;
	
    //solicitando datos al usuario
    printf("Ingrese datos de la matriz: \n");
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            printf("Ingrese matriz[%d][%d]: ", i,j);    
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Cambiar fila: ");
    scanf("%d",&A);
	printf("Por fila: ");
    scanf("%d",&B);
	
	if((A<0 || A>=N) || (B<0 || B>=N)){
		printf("Datos ingresados son incorrectos\n");
		return 0;
	}
	
    //Guardando fila B al arreglo auxiliarcopiando fila A a fila B
    for (int j=0; j<M; j++){
			aux = matriz[B][j];
			matriz[B][j] = matriz[A][j];
			matriz[A][j] = aux;
    }
	
	
    //validando si la matriz es simetrica
	printf("Matriz resultante:\n");
    for (int i=0; i<N; i++){
		printf("|");
        for (int j=0; j<M; j++){
				printf(" %d |",matriz[i][j]);
        }
		printf("\n");
    }    

	return 0;
}

