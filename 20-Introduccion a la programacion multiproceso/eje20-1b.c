/******************************************************************************
Fundamentos de programación. Introducción a la programación multiproceso.
ejemplo 20-1b:	
	Hacer un programa en lenguaje C que cree un hilo (pthread), Este hilo 
	estará encargado de contar de 1 a 5 con intervalos de tiempo de 1 segundo,
	Utilice pthread_join para esperar a que un hilo finalice su trabajo.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

//prototipos
void *cuenta5(void *arg);

/***
@fn main: Función principal del programa.
***/
int main(){
	//declaración de variable locales
	pthread_t h1;	
	
	/*declaración de un hilo:
	pthread_create necesita 4 parámetros:
		- El hilo que se ejecuta.
		- Una estructura con todos los atributos del hilo.
		- Una función que el hilo ejecutará.
		- Una variable de entrada para que el hilo reciba como parámetro*/
	pthread_create(&h1,NULL, cuenta5,NULL);

	/*Esperando a que el hilo finalice su tarea:
	pthread_join necesita 2 parámetros:
		- El hilo que se espera.
		- Una variable donde se recibirá un valor de retorno del hilo*/
	pthread_join (h1,NULL);
	printf("El hilo finalizó su tarea.\n");

	return 0;
}

/***
@fn cuenta5: Función con la estructura adecuada para un hilo, la tarea es
contar 5 unidades con un intervalo de tiempo de 1 segundo entre cada cuenta.
@return void.
***/
void *cuenta5(void *arg){
	int i;
	printf("Hilo 1: Realizando tarea: \n");
	for(i=1;i<=5;i++){
		sleep(1);	
		printf("%d\n",i);
	}
	pthread_exit(NULL);
}

