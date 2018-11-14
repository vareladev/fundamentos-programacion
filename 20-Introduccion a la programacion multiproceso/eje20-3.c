/******************************************************************************
Fundamentos de programación. Introducción a la programación multiproceso.
ejemplo 20-3:	
	Crear un programa en lenguaje C que genere un número aleatorio entre 1 y 1000,
	el usuario deberá adivinar cual número es, para ello el programa facilitará pistas
	e informará al usuario si el número ingresado es menor o mayor al número oculto.
	Al final del juego se debe indicar al usuario cuanto tiempo tardó en encontrar 
	la respuesta correcta.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>

//macros
#define BLOCK 1000
#define TRUE 1
#define FALSE 0

//prototipos de funciones
void play(int rnd);
void *checktime(void *arg);
int generaternd();

//variables globales
int juegoFin = FALSE; //bandera que indica si el juego ha finalizado

/***
@fn main: Función principal del programa.
***/
int main(){
	//variables locales
	pthread_t h1;
	double *diff_t;
	int resultado;
	
	//generando numero
	int rnd = generaternd();
	
	//Creando hilo
	pthread_create(&h1,NULL, checktime,NULL);

	//inicia el juego!
	play(rnd);
    printf("Bien! el numero era: %d\n",rnd);
	juegoFin = TRUE;
	
	//Esperando la respuesta del hilo: cuento tiempo duró el juego
	pthread_join (h1,(void*)&diff_t);
	printf("has tardado: %.2lf segundos en encontrar la respuesta.\n",*diff_t);
	return 0;
}

/***
@fn generaternd: Función que genera un numero aleatorio.
@return número generado de manera aleatoria.
***/
int generaternd(){
    srandom(time(NULL));
    return rand() % BLOCK;
}

/***
@fn play: Función que genera un numero aleatorio.
@param rnd: número generado de manera aleatoria que representa la respuesta del juego.
@return void.
***/
void play(int rnd){
    int n;
    while(TRUE){
        printf("Ingrese numero: ");
        scanf("%d", &n);
        if(n == rnd){
            return;
        }
        if(n<rnd){
            printf("el número oculto es mayor\n");
        }
        if(n>rnd){
            printf("el número oculto es menor\n");
        }
    }
}

/***
@fn play: Función con formato adecuado para hilos, su tarea es controlar cuanto tiempo tomó al usuario
a encontrar la respuesta correcta en el juego.
@param *arg: Argumento de entrada de un hilo, es este juego no se utiliza.
@return tiempo en segundos que tardo el usuario en encontrar la respuesta correcta.
***/
void *checktime(void *arg){
	time_t start_t, end_t;
	double *diff_t = malloc(sizeof(double));

	time(&start_t);

	while (!juegoFin){
		sleep(0.5);
	}

	time(&end_t);

	*diff_t = difftime(end_t, start_t);
    pthread_exit((void *)diff_t);

}
