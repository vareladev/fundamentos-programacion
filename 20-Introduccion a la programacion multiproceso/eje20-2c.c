/******************************************************************************
Fundamentos de programación. Introducción a la programación multiproceso.
ejemplo 20-2c:	
	Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo 
	estará encargado de contar de 1 a 5, de 6 a 10 y de 11  15 respectivamente
	con intervalos de tiempo de 1 segundo entre cada cuenta. El programa utilizará
	una sola función para los hilos con un parámetro de entrada, que representará 
	el inicio de la cuenta que debe realizar el hilo.
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
	pthread_t h2;
	pthread_t h3;
	int *ini = malloc(sizeof(int *));
	
	//declaración de un hilo:
	printf("Hilo 1: Realizando tarea: \n");
	*ini = 1;
	pthread_create(&h1,NULL, cuenta5,(void *)ini);
	pthread_join (h1,NULL);

	printf("Hilo 2: Realizando tarea: \n");
	*ini = 6;
	pthread_create(&h2,NULL, cuenta5,(void *)ini);
	pthread_join (h2,NULL);

	printf("Hilo 3: Realizando tarea: \n");
	*ini = 11;
	pthread_create(&h3,NULL, cuenta5,(void *)ini);
	pthread_join (h3,NULL);

	printf("Los hilos finalizaron su tarea.\n");

	return 0;
}

/***
@fn cuenta5a: Función con la estructura adecuada para un hilo, la tarea es
contar 5 unidades con un intervalo de tiempo de 1 segundo entre cada cuenta.
@return void.
***/
void *cuenta5(void *arg){
	int *inicio = (int*)arg;
	int i;
	for(i=*inicio;i<(*inicio+5);i++){
		sleep(1);	
		printf("%d\n",i);
	}
	pthread_exit(NULL);
}

