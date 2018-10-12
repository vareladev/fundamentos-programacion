/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.12:	
	Construir un programa en lenguaje C, que verifique si la matriz ingresada por el usuario es un
	cuadrado mágico. El programa pedirá al usuario la longitud N de la m y N^2 elementos
	para llenar la m.
	Un cuadrado mágico es una matriz NxN donde la suma de todos los elementos de las filas,
	columnas, diagonal y diagonal inversa da como resultado el mismo valor.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    int N;
	
    //solicitando dimensiones de matrices al usuario
    printf("Ingrese dimensiones para la matriz: ");
    scanf("%d",&N);

    //declarando m
    int m[N][N];
	
    //solicitando datos al usuario
    printf("Ingrese datos de la m: \n");
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            printf("Ingrese m[%d][%d]: ", i,j);    
            scanf("%d",&m[i][j]);
        }
    }

	//calculando diagonal principal
	int diasum = 0;  
    for (int i=0; i<N; i++){ 
        diasum += m[i][i]; 
	}
	//calculando diagonal inversa
	int invsum = 0;  
    for (int i=0,j=(N-1); i<N; i++,j--){ 
        invsum += m[i][j]; 
	}
	//si la suma de la diagonal inversa no es igual a la suma de la diagonal no es cuadrado magico
	if(diasum != invsum){
		printf("No es un cuadrado mágico :(\n");
		return 0;
	}
	//calculando suma de filas
	int filasum;
    for (int i=0; i<N; i++){
        filasum = 0;      
        for (int j=0; j<N; j++){ 
            filasum += m[i][j]; 
		}
        //verificando si la suma obtenida en cada fila es igual a la de la diagonal principal
		if(filasum != diasum){
			printf("No es un cuadrado mágico :(\n");
			return 0;
		}
    } 
	//calculando suma de columnas
	int colsum;
    for (int j=0; j<N; j++){
        colsum = 0;      
        for (int i=0; i<N; i++){ 
            colsum += m[i][j]; 
		}
        //verificando si la suma obtenida en cada columna es igual a la de la diagonal principal
		if(colsum != diasum){
			printf("No es un cuadrado mágico :(\n");
			return 0;
		}
    } 
	
	//si llegamos hasta acá, todas las validaciones se cumplieron, es un cuadrado magico.
	printf("Es un cuadrado mágico!!!\n");

	return 0;
}


