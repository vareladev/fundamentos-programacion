/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12.1-1:	
	Teoria de punteros/arreglos.
Autor: Manuel Callejas, Oct 2018. v1.0.
*******************************************************************************/

#include <stdio.h>
int main (void){
	
	int N=25;
	int *p;
	int **dp;
	dp=&p;
	p=&N;

	printf("dp esta guardado en la direccion: %p\n",&dp);

	printf("p apunta a un sector de memoria que contiene el valor: %d\n",*p);
	printf("dp apunta a un sector de memoria que contiene el valor: %d\n",**dp);
	printf("p esta guardado en la direccion: %p\n",&p);
	printf("N esta guardado en la direccion: %p\n",p);
	printf("p apunta a la direccion: %p\n",p);	
return 0;
}
