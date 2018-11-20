/******************************************************************************
Fundamentos de programación. Funciones.
ejemplo 8-1:	
	Crear un programa en lenguaje C que pida al N numeros enteros y positivos,
	para calcular el promedio de los N números ingresados; El usuario terminará 
	el proceso de registro de datos ingresando un número negativo.
Autor: Erick Varela. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//macros
#define TRUE 1

//prototipos de funciones
void printRes(float r);
float calcularavg(int s, int c);
int getint ();

/***
@fn main: Función principal del programa.
***/
int main(void){
    int n;
    int contador = 0; 
    int suma = 0;
    
    while(TRUE){
        n = getint();
        if(n <= 0){
            break;
        }
        suma = suma + n;
        contador++;
    }
    
    float res = calcularavg(suma, contador);
    printRes(res);

    return 0;
}

/***
@fn printRes: Imprime el resultado de la operación.
@param r, resultado a imprimir.
@return void.
***/
void printRes(float r){
    printf("El resultado es: %.2f",r);
    return;
}

/***
@fn calcularavg: Calcula promedio.
@param s, datos sumados a promediar.
@param c, cantidad de datos a promediar.
@return promedio s/c.
***/
float calcularavg(int s, int c){
    return (float) s / c;
}

/***
@fn getint: Solicita un dato al usuario.
@return num, número entero solicitado al usuario.
***/
int getint (){
    int num;
    printf("ingrese numero: ");
    scanf("%d",&num);
    return num;
}
