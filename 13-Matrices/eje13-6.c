/******************************************************************************
Fundamentos de programación. Matrices.
ejemplo 13-6:	
	Programa de facturación v1.
	Crear un programa en lenguaje C que cree una factura, para ello solicitará al 
    usuario una lista de productos, el precio unitario de cada producto y la 
    cantidad comprada por el cliente, el programa luego mostrará el detalle de
    los datos ingresados, se pueden ingresar hasta un máximo de 10 productos, es
    necesario utilizar una matriz de cadenas de texto.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//macros
#define MAXLEGHT 50
#define LIST 10
#define COLS 4

//variable globales:
int contadorLista;
float sumadorPrecio;
char factura[LIST][COLS][MAXLEGHT];
char respuesta[2];
int unidades;
float precio;
float subtotal;

//prototipos de funciones
void limpiarbuffer();
void imprimefactura();

//función principal
int main(void){
	sumadorPrecio = 0;
	contadorLista = 0;
	
	do{
	    printf("ingrese nombre del producto: ");
	    scanf("%[^\n]s",factura[contadorLista][0]);
	    
	    printf("¿Cuantas unidades lleva?: ");
	    scanf("%s",factura[contadorLista][1]);
	    limpiarbuffer();
	    
	    printf("¿Cuantas vale cada unidad?: $");
	    scanf("%s",factura[contadorLista][2]);
	    limpiarbuffer();
	    
	    //convirtiendo unidades y precio a entero y flotante respectivamente
	    unidades = atoi (factura[contadorLista][1]);
	    precio = atof (factura[contadorLista][2]);
	    //calculado subtotal
	    subtotal = unidades * precio;
	    //guardando el subtotal
	    sumadorPrecio = sumadorPrecio + subtotal;
	    sprintf(factura[contadorLista][3], "%.2f", subtotal);
	    
	    //¿ingresar otro producto?
		printf("¿Desea ingresar otro producto? (si/no): ");
		scanf("%s",respuesta);
		limpiarbuffer();
		
		//si se agrega otro producto se prepara el siguiente indice
		contadorLista++;
	}while (strcmp(respuesta,"si") == 0);
	
	//mostrar la factura
	imprimefactura();
	
	return 0;
}

void limpiarbuffer(){
    while (getchar() != '\n');
}

void imprimefactura(){
    printf("\n\n----------------  FACTURA  -----------------\n");
    printf(" N | producto\t\t| precio | total\n");
    printf("--------------------------------------------\n");
    for(int i=0;i<contadorLista;i++){
        printf("  %s  | %s\t\t| $%s \t| $%s\t\n",factura[i][1],factura[i][0],factura[i][2],factura[i][3]);
    }
    printf("--------------------------------------------\n");
    printf(" TOTAL\t\t\t\t   $%.2f\n",sumadorPrecio);
}
