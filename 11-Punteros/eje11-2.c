/******************************************************************************
Fundamentos de programación.
Punteros, ejemplo 11-2: doble punteros y triple punteros
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/

#include <stdio.h>

int main(void) {
	int var;
	int *p;
	
	var = 123;
	
	//obteniendo la direccion de memoria de una variable
	printf("direccion de memoria de var: %p\n",&var);
	//obteniendo el contenido de *p
	printf("contenido de literal de *p: %p\n\n",p);
	p = &var;
	
    //obteniendo la direccion de memoria de una variable
	printf("direccion de memoria de var: %p\n",&var);
	//obteniendo el contenido literal de *p
	printf("contenido de *p: %p\n\n",p);
	
	//accediendo al Contenido de var
	printf("Contenido de var: %d\n",var);
	//accediendo al contenido de var usando como medio a *p
	printf("contenido de var usando como medio a *p: %d\n\n",*p);
	
	//¿Como obtener la direccion de memoria donde se guarda *p?
	int **pp;
	pp = &p;
	printf("direccion de memoria de *p: %p\n",pp);
	//accediendo al contenido de var usando como medio a **pp
	printf("contenido de var usando como medio a **pp: %d\n\n",**pp);	

	//¿Como obtener la direccion de memoria donde se guarda **pp?
	int ***ppp;
	ppp = &pp;
	printf("direccion de memoria de **pp: %p\n",ppp);
	//accediendo al contenido de var usando como medio a **pp
	printf("contenido de var usando como medio a **pp: %d\n\n",***ppp);	
	
	return 0;
}