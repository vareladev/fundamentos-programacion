/******************************************************************************
Fundamentos de programación. Funciones.
ejemplo 8-2:	
	Crear un programa en lenguaje C que genere un número aleatorio entre 1 y 1000,
	luego, el programa solicitará al usuario adivinar el número oculto, otorgando
	pistas de tal manera que el usuario sepa si el número ingresado es menor o mayor
	al número oculto.
Autor: Erick Varela. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"
#include "time.h"
#include "stdlib.h"

//macros
#define BLOCK 1000
#define TRUE 1

//prototipos de funciones
int generaternd();
void play(int rnd);

/***
@fn main: Función principal del programa.
***/
int main(){
    int rnd = generaternd();
    
    play(rnd);
    printf("Bien! el numero era: %d\n",rnd);
    return 0;
}

/***
@fn generaternd: genera un número aleatorio.
@return número aleatorio generado.
***/
int generaternd(){
    srandom(time(NULL));
    return rand() % BLOCK;
}

/***
@fn play: pregunta por N números al usuario y válida si el número ingresado
es igual al número objetivo, si el resultado de la evaluación es negativa,
la función indica si el número ingresado en mayor o menor al número oculto.
@param rnd, número aleatorio utilizado como respuesta del juego.
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
            printf("numero ingresado es menor\n");
        }
        if(n>rnd){
            printf("numero ingresado es mayor\n");
        }
    }
}