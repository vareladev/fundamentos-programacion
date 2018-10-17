/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 2.4:	
	Implementar en lenguaje C el siguiente algoritmo:
		- Este algoritmo funciona solo con matrices cuadradas de longitud impar.
		- Colocar n (con N=1) al centro de la última fila
		- El siguiente elemento (n=2) será colocado 1 columna y 1 fila después, ignorando los
		  bordes de la matriz.
		- Si la casilla a colocar el siguiente valor está llena o si estas en la casilla inferior
		  derecha (casilla con coordenada (i,j) más alto) la secuencia sigue será una casilla
		  arriba.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//Función principal
int main(void){
    //declaración de variables
    int N; //dimensión de la matriz;
    int fil; //indicador de fila a llenar
    int col; //indicador de columna a llenar
    int cont = 1; //para llenar matriz
    
    printf("Ingrese tamaño de la matriz: ");
    scanf("%d",&N);
    
    //validando si el número ingresado es positivo y entero
    if(N<0 || N%2==0){
        printf("La dimensión de la matriz debe ser un número positivo e impar\n");
        return 0;
    }
    
    //creando matriz
    int matriz[N][N];
    //llenando la matriz de 0s para tener un indicador si la casilla ya se lleno
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matriz[i][j] = 0;
        }    
    }
    //definiendo posición inicial
    fil = N-1; //se comienza desde la ultima fila
    col = N/2; // se comienza de la columna central
    
    //recorriendo matriz para llenarla
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            //llenando matiz
            matriz[fil][col] = cont;
            //aumentando valor de indices y contador
            cont++;
            fil++;
            col++;
            //¿acabo de llenar la ultima casilla?
            if(fil==N && col==N){
                fil-=2;
                col--;
            }
            //¿se ha igualado algun indice al limite N?
            if(fil==N){
                fil = 0;
            }
            if(col==N){
                col = 0;
            }
            //¿ya existe numero en la nueva posicion?
            if(matriz[fil][col]  != 0){
                fil-=2;
                col--;
            }            
        }    
    }
    
    //imprimiendo matriz
    printf("Resultado: \n")
    for(int i=0;i<N;i++){
        printf("|");
        for(int j=0;j<N;j++){
            printf("%d|",matriz[i][j]);
        }    
        printf("\n");
    }
    
    return 0;
}
