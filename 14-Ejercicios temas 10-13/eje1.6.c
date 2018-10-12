/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.6:	
    Crear un programa en C, que solicite al usuario 5 datos enteros que serán guardados en un
    arreglo. El programa posteriormente creará otro arreglo de igual dimensión que el primero y
    guardará en cada una de sus posiciones el número factorial de cada número del arreglo inicial.
    Para calcular el factorial, cree una función que reciba como parámetro de entrada un número
    entero y retorne el factorial de dicho número.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//macros
#define TAM 5

//prototipos de funciones
int calcularfactorial(int n);

//función principal
int main(void){
    int numeros[TAM];
    int factoriales[TAM];
    
    //solicitando datos al usuario
    for (int i=0; i<TAM; i++){
        printf("Ingrese número %d: ", (i+1));
        scanf("%d",&numeros[i]);
    }
    
    //calculado factoriales
	for (int i=0; i<TAM; i++){
        factoriales[i] = calcularfactorial(numeros[i]);
    }
    
    //mostrado resultado
    for (int i=0; i<TAM; i++){
        printf("Factorial de %d: %d\n",numeros[i],factoriales[i]);
    }
    
	return 0;
}

int calcularfactorial(int n){
    int i = 1;
    int facto = 1;
    while(i <= n){
        facto = facto * i;
        i++;
    }
    return facto;
}
