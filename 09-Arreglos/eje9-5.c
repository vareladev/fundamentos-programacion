/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 9-5:	crear un programa en C, que pida al usuario N numeros, 
				y luego determinar cuantos son pares; Validar que los datos
				ingresados por el usuario deben ser menores o iguales a 100.
				Utilice funciones para completar la tarea.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include "stdio.h"

#define TRUE 1
#define FALSE 0

//prototipos
int obtenerDato(void);
int validarDato(int dato);
void llenarArreglo(int *a, int N);
int contarPares(int *a, int N);
void mostrarResultado(int pares);

int main(void){
	int N;
	N = obtenerDato();
	
	if(validarDato(N)){
		int arreglo[N];
		llenarArreglo(arreglo, N);
		int pares;
		pares = contarPares(arreglo, N);
		mostrarResultado(pares);
	}
	else{
		printf("Dato no válido!\n");
		return 0;
	}

	return 0;
}


//obtener dato;
int obtenerDato(void){
	int N;
	printf("¿cuantos numeros ingresará?: ");
	scanf("%d",&N);
	return N;
}

int validarDato(int dato){
	if(dato < 0 || dato > 100){
		return FALSE;
	}
	else{
		return TRUE;
	}
}

void llenarArreglo(int *arreglo, int N){
	//llenando valores
	int i;
	for(i=0; i<N; i++){
	    printf("numero: %d: ",i);
		scanf("%d",&arreglo[i]);
	}
}

int contarPares(int *arreglo, int N){
	//busqueda y conteo
	int pares = 0;
	int i;
	for(i=0; i<N; i++){
		if(arreglo[i]%2 == 0 ){
			pares++;
		}
	}
	return pares;
}

void mostrarResultado(int pares){
	//mostrando resultado
	printf("la cantidad de pares es: %d",pares);
}










