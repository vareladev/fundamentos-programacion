/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 2.1:	
	Hacer un programa en C que dado un número N impar y positivo (validar 
	que el dato ingresado cumpla con las características solicitadas), Muestre 
	al usuario la siguiente forma:
		Ingrese N: 5
		Mosaico:
		++++++++++
		++++__++++
		+++____+++
		++______++
		+________+
		+________+
		++______++
		+++____+++
		++++__++++
		++++++++++
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//declaración de variables locales
	int N;
	int bajo;
	int plus;
	
	//solicitando datos al usuario
	printf("Ingrese N: ");
	scanf("%d", &N);

	//validando que el número sea impar y positivo
	if(N<=0 && (N%2==0)){
		printf("Error: el dígito debe ser mayor a 9.\n");
		return 0;
	}
	
	//realizando cálculos
	for(int i=0, k=N; i<N ; i++, k--){
	    plus = k;
	    bajo = i;
		for(int j=0; j<N ; j++){
			if(plus>0){
			    printf("+");    
			    plus--;
			}
			else{
			    printf("_");
			}
		}
		for(int j=0; j<N ; j++){
		    if(bajo>0){
			    printf("_");    
			    bajo--;
			}
			else{
			    printf("+");
			}
		}
		printf("\n");
	}
	for(int i=0, k=1; i<N ; i++, k++){
	    plus = k;
	    bajo = N-k;
	    for(int j=0; j<N ; j++){
	        if(plus>0){
			    printf("+");    
			    plus--;
			}
			else{
			    printf("_");
			}
	    }
	    for(int j=0; j<N ; j++){
	        if(bajo>0){
			    printf("_");    
			    bajo--;
			}
			else{
			    printf("+");
			}
	    }
	    printf("\n");
	}
	return 0;
}
