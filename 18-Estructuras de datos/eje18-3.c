/******************************************************************************
Fundamentos de programación. Estructuras de datos.
ejemplo 18-3:	
	Crear un programa en lenguaje C que solicite al usuario dos puntos del plano
	cartesiano. Luego, el programa procederá a calcular cual punto esta mas cerca
	del origen (0,0). Para guardar las coordenadas 'x' y 'y' de cada punto utilizar 
	estructuras de datos.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <math.h>

/***
@struct punto: Estructura de datos que guarda las coordenadas 'x' y 'y' de un punto
			   en el plano cartesiano.
***/
typedef struct punto{
	int x;
	int y;
}punto;

//prototipos de funciones
float calcularDistancia(punto p);

/***
@fn main: Función principal del programa.
***/
int main(void){
	//declarando variables locales
	punto A;
	punto B;
	float distanciaA;
	float distanciaB;

	//Solicitando datos al usuario
	printf("Punto A: \n");
	printf("Ingrese x: ");
	scanf("%d", &A.x);
	printf("Ingrese y: ");
	scanf("%d", &A.y);
	printf("Punto B: \n");
	printf("Ingrese x: ");
	scanf("%d", &B.x);
	printf("Ingrese y: ");
	scanf("%d", &B.y);

	//calculando distancias
	distanciaA = calcularDistancia(A);
	distanciaB = calcularDistancia(B);
	
	if(distanciaA>distanciaB){
		printf("El punto B(%d,%d) esta más cerca del origen.\n",B.x,B.y);
	}
	else if(distanciaA<distanciaB){
		printf("El punto A(%d,%d) esta más cerca del origen.\n",A.x,A.y);
	}
	else if(distanciaA==distanciaB){
		printf("El punto A(%d,%d) y B(%d,%d) estan a la misma distancia del origen.\n",A.x,A.y,B.x,B.y);
	}
	return 0;
}

/***
@fn calcularDistancia: Calcula la distancia de un punto al origen (0,0).
@param p, estructura de datos que contiene las coordenadas 'x' y 'y' de un punto
@return distancia de un punto en el plano cartesiano al origen.
***/
float calcularDistancia(punto p){
	float c1;
	float c2;
	c1 = pow(p.x,2);
	c2 = pow(p.y,2);
	float d = sqrt(c1 + c2);
	return d;
}






