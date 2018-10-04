/******************************************************************************
Fundamentos de programación.
Punteros, ejemplo 11-3: Programa que calcula el cuadrado de un numero usando
funciones y punteros.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/

#include <stdio.h>

int raiz(int n);
void raizv2(int *n);

int main(void) {
    int numero;
	printf("ingrese numero: ");
	scanf("%d",&numero);
	
	//paso de parámetros por valor.
	int respuesta = raiz(numero);
	printf("el numero ingresado elevado al cuadrado es: %d\n",respuesta);
	
	//paso de parámetros por referencia.
	int *p = &numero;
	raizv2(p);
	printf("el numero ingresado elevado al cuadrado es: %d\n",numero);
	return 0;
}

int raiz(int n){
    int res = n * n;
    return res;
}
void raizv2(int *n){
    *n = (*n)*(*n);
}