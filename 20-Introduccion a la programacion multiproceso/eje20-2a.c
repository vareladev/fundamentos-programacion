/******************************************************************************
Fundamentos de programación. Introducción a la programación multiproceso.
ejemplo 20-2a:	
	Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo 
	estará encargado de contar de 1 a 5, de 6 a 10 y de 11  15 respectivamente
	con intervalos de tiempo de 1 segundo entre cada cuenta.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

//prototipos
void *cuenta5a(void *arg);
void *cuenta5b(void *arg);
void *cuenta5c(void *arg);

/***
@fn main: Función principal del programa.
***/
int main(){
	//declaración de variable locales
	pthread_t h1;	
	pthread_t h2;
	pthread_t h3;
	
	//declaración de un hilo:
	pthread_create(&h1,NULL, cuenta5a,NULL);
	pthread_create(&h2,NULL, cuenta5b,NULL);
	pthread_create(&h3,NULL, cuenta5c,NULL);

	//Esperando a que los hilos finalicen su tarea
	pthread_join (h1,NULL);
	pthread_join (h2,NULL);
	pthread_join (h3,NULL);
	printf("Los hilos finalizaron su tarea.\n");

	return 0;
}

/***
@fn cuenta5a: Función con la estructura adecuada para un hilo, la tarea es
contar 5 unidades con un intervalo de tiempo de 1 segundo entre cada cuenta.
@return void.
***/
void *cuenta5a(void *arg){
	int i;
	printf("Hilo 1: Realizando tarea: \n");
	for(i=1;i<=5;i++){
		sleep(1);	
		printf("%d\n",i);
	}
	pthread_exit(NULL);
}

/***
@fn cuenta5b: Función con la estructura adecuada para un hilo, la tarea es
contar 5 unidades con un intervalo de tiempo de 1 segundo entre cada cuenta.
@return void.
***/
void *cuenta5b(void *arg){
	int i;
	printf("Hilo 1: Realizando tarea: \n");
	for(i=6;i<=10;i++){
		sleep(1);	
		printf("%d\n",i);
	}
	pthread_exit(NULL);
}

/***
@fn cuenta5c: Función con la estructura adecuada para un hilo, la tarea es
contar 5 unidades con un intervalo de tiempo de 1 segundo entre cada cuenta.
@return void.
***/
void *cuenta5c(void *arg){
	int i;
	printf("Hilo 1: Realizando tarea: \n");
	for(i=11;i<=15;i++){
		sleep(1);	
		printf("%d\n",i);
	}
	pthread_exit(NULL);
}
