/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 2.1:	
    Escribir un programa en C que solicite varios datos de entrada: La primera línea de los valores
    de entrada es un entero T (1 <= T <= 15) que denota cuantos valores de entrada van a haber
    para calcular su relación. Luego, Cada una de las siguientes líneas contiene dos enteros A y
    B (1<=A<=1000 y 1<=B<=1000).
    Por cada línea de entrada se produce una línea de salida. Esta línea contiene cualquiera de
    los operadores relacionales “<”,”>” o “=”, el cual indica la relación que es apropiada para los
    dos números dados.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//macros
#define MAX 20

//prototipos de funciones
char validar(char c[]);
void limpiarbuffer();

//función principal
int main(void){
    int N;
    char cadena[MAX];
	
    //solicitando dimensiones de matrices al usuario
    printf("Ingrese cuantas comparaciones hará: ");
    scanf("%d",&N);

    //declarando arreglos de respuestas
    char respuestas[N];
	
    //solicitando datos al usuario
    for (int i=0; i<N; i++){
        limpiarbuffer();
        printf("Ingrese cadena de comparación (ej. '8 13'): ");
        scanf("%[^\n]s",cadena);
        respuestas[i] = validar(cadena);
    }

    //mostrando respuestas:
    for (int i=0; i<N; i++){
        printf("%c\n",respuestas[i]);
    }
	return 0;
}

char validar(char c[]){
    int lon = strlen(c);
	char aux1[MAX/2];
	char aux2[MAX/2];
	int banderaEspacio = 0;
	int pos = 0;
	for(int i = 0; i<lon;i++){
	    if(c[i] != ' '){
	        if (banderaEspacio == 0){
		        aux1[pos] = c[i];
		        pos++;
		    }
		    else{
		        aux2[pos] = c[i];
		        pos++;
		    }
	    }
	    else{
	        aux1[pos] = '\0';
	        pos = 0;
	        banderaEspacio = 1;
	    }
	}
	aux2[pos] = '\0';
	
	//convirtiendo numeros y comparando
	int a = atoi(aux1);
	int b = atoi(aux2);
	char res;
	if(a > b){
	    res = '>';
	}
	else if(a < b){
	    res = '<';
	}
	else{
	    res = '=';
	}
	return res;
}

void limpiarbuffer(){
    while(getchar() != '\n');
}
