/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.4:	
	Construya una función en C, que permita determinar si un número entero dado por el usuario
	es palíndromo. Un número es palíndromo si leído de izquierda a derecha o de derecha a
	izquierda se lee el mismo número, la función retornará 1 si el número es palíndromo y 0 en
	caso contrario. Ejemplo de números palíndromos: 1, 7, 11, 77, 121, 2332, 55055, 76567.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>

//macros
#define MAX 100

//función principal
int main(void){
    char numero[MAX];
    printf("Ingrese número: ");
    scanf("%s",numero);
    
    //definiendo longitud y creando nueva cadena
    int lon = strlen(numero);
    char numeroinvertido[lon+1];
    
    //invirtiendo cadena:
    int i,j;
    for(i = 0,j = lon-1; i<lon;i++,j--){
        numeroinvertido[i] = numero[j];
    }
    numeroinvertido[lon] = '\0';
    
    //verificando si el numero y el numero numeroinvertido son iguales
    int res = strcmp(numero,numeroinvertido);
    if(res==0){
        printf("El número es palindromo\n");
    }
    else{
        printf("El número no es palindromo\n");
    }
	
    return 0;
}

