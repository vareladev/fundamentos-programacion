/******************************************************************************
Fundamentos de programación. Listas enlazadas simples.
ejemplo 19-1:	
	Crear un programa en lenguaje C que muestre al usuario un menú con las siguientes
	opciones: 
		0 - salir
		1 - agregar nodo a la lista
		2 - mostrar lista
		3 - eliminar nodo por posicion
	En la opción 1 el programa pide al usuario una variable de tipo int, e ingresa la
	la variable a una lista enlazada simple. La opción 2 muestra la lista. La opción 3
	solicita al usuario una posición para eliminar el dato de la lista en la posición
	ingresada, la opción 0 termina el programa.
Autor: Erick Varela, v1.0.
***********************************************s********************************/
//librerias
#include <stdio.h>
#include <stdlib.h>

//estructuras de datos
typedef struct nodo{
	int dato;
	struct nodo *sig;
} nodo;

//prototipos de funciones
void menu();
nodo *crearNodo ();
void agregarNodo(nodo *n);
void mostrarLista();
void eliminarxpos();

//variables globales
nodo *lista=NULL;
int siguiente = 1;
 
//función principal 
int main(){
	//variables locales
    int opcion;
    nodo *nuevo=NULL;
    
	while(siguiente){
	    menu();
	    printf("Ingrese opción: ");
	    scanf("%d",&opcion);
	    switch(opcion){
    	    case 0: printf("Saliendo...\n");
    	            siguiente = 0;
    	            break;
            case 1: nuevo = crearNodo();
                    agregarNodo(nuevo);
                    break;
            case 2: mostrarLista();
                    break;
            case 3: eliminarxpos();
                    break;
            default:printf("Opción inválida.\n");
                    break;
	    }
	}
	
    return 0;
}

/***
@fn menu: Muestra las diferentes opciones del menú.
@return void.
***/
void menu(){  	
	printf("***************** MENU *****************\n");
	printf("\t0 - salir\n");
	printf("\t1 - agregar nodo a la lista\n");
	printf("\t2 - mostrar lista\n");
	printf("\t3 - eliminar nodo por posicion\n");
	printf("***************** MENU *****************\n");
}

/***
@fn crearNodo: Crear un nuevo nodo y reserva memoria para guardar sus datos, ademas solicita el
dato a guardar.
@return puntero a una estructura de datos de tipo nodo.
***/
nodo *crearNodo (){
    int d;
	nodo *nuevo=NULL;
	nuevo=(nodo *)malloc(sizeof(nodo));
	if(nuevo==NULL){
        printf("Error asignando memoria.\n");
        exit(0);
    }
    printf("ingrese dato: ");
    scanf("%d",&d);
    nuevo->dato = d;
    nuevo->sig = NULL;
    return nuevo;
}

/***
@fn agregarNodo: agrega un nuevo nodo a la lista enlazada.
@param nodo *n: Puntero a una estructura de datos de tipo nodo, y represente el nodo a agregar en la lista.
@return void.
***/
void agregarNodo(nodo *n){
    if(lista==NULL){ //lista vacia
    	lista = n;
    }
    else{ //lista no vacia
        nodo *saltanodos=lista;
    	while(saltanodos->sig != NULL){
    		saltanodos = saltanodos->sig;
    	}
    	saltanodos -> sig = n;
    }    
}

/***
@fn mostrarLista: Muestra en pantalla los datos contenidos en la lista.
@return void.
***/
void mostrarLista(){
	printf("contenido de la lista: \n");
	nodo *saltanodos=lista;
	while(saltanodos != NULL){
		printf("|%d|->",saltanodos->dato);
		saltanodos = saltanodos->sig;
	}
	printf("null\n");
}

/***
@fn eliminarxpos: Solicita al usuario una entero que representa una posición en la lista, si encuentra esa
posición procede a eliminar el nodo, la función define a la posición cero como la primera posición.
@return void.
***/
void eliminarxpos(){
    int pos;
    
    //primera validación. ¿la lista está vacia? si es así no hay nada que eliminar.
    if(lista==NULL){ 
		printf("lista vacia, no se puede eliminar ningún elemento.\n");
		return;
	}
	
	printf("¿Ingrese que posición desea eliminar? (primer elemento: posición 0): ");
	scanf("%d",&pos);
	
	//¿es el elemento en la posición 0 el que se quiere eliminar?
    if(pos==0){ 
        lista = lista->sig;
        printf("El elemento en la posición %d ha sido eliminado.\n",pos);
        mostrarLista();
        return;
    }
    else{
        int evaluador = 1;
        nodo *saltanodos=lista;
        nodo *auxiliar=lista;
        
        
        saltanodos = saltanodos->sig;
        
        while(saltanodos != NULL){
            if(pos==evaluador){
                auxiliar->sig = saltanodos->sig;
                printf("El elemento en la posición %d ha sido eliminado.\n",pos);
                mostrarLista();
                return;
            }
            else{
                auxiliar=saltanodos;
                saltanodos=saltanodos->sig;
                evaluador++;
            }
        }
        
        printf("La posición ingresada no es válida.\n");
    }
}
