/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.5:	
	Construya un programa que reciba desde el teclado dos arreglos A y B de longitudes N y M
	respectivamente, El programa creará un arreglo C de longitud N+M y asignará cada valor de
	los arreglos A y B al arreglo C de manera consecutiva.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>

//macros
#define MAX 100

//función principal
int main(void){
    int lon1,lon2;
    
    printf("Ingrese cuantos elementos tiene el primer arreglo: ");
    scanf("%d",&lon1);
    
    int arreglo1[lon1];
    printf("Ingrese datos del primer arreglo: ");
    for(int i=0;i<lon1;i++){
        printf("dato %d: ",i);
        scanf("%d",&arreglo1[i]);
    }
    
    printf("Ingrese cuantos elementos tiene el segundo arreglo: ");
    scanf("%d",&lon2);
    
    int arreglo2[lon2];
    printf("Ingrese datos del segundo arreglo: ");
    for(int i=0;i<lon2;i++){
        printf("dato %d: ",i);
        scanf("%d",&arreglo2[i]);
    }
    
    int arreglo3[lon1+lon2];
    
    int posarreglo3 = 0;
    for(int i = 0; i<lon1; i++){
        arreglo3[posarreglo3] = arreglo1[i];
        posarreglo3++;
    }
    for(int i = 0; i<lon2; i++){
        arreglo3[posarreglo3] = arreglo2[i];
        posarreglo3++;
    }
    
    int lon3 = lon1 + lon2;
    for(int i = 0; i<lon3; i++){
        printf("%d",arreglo3[i]);
    }
	
    return 0;
}


