/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.13:	
	Crear un programa en lenguaje C que sea capaz de traducir a lenguaje Googlerese.
Autor: Manuel Callejas, Erick Varela. v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>

//macros
#define TAM 100

//función principal
int main(void){
    //declaración de variables.
    //alfabetos de conversión
	char alfabeto1[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alfabeto2[] = {'y','n','f','i','c','w','l','b','k','u','o','m','x','s','e','v','z','p','d','r','j','g','t','h','a','q'};
	
	char palabra[TAM];	
	int number;
	int lon;
	int lonA = strlen(alfabeto1);

    printf("¿Cuantas frases va a ingresar?: ");
	scanf("%d",&number);
	
	//Creando matriz para guardar las frases
	char cadenas[number][TAM];
	
	
	for(int i = 0; i < number; i++){
	    //limpiando buffer
		while(getchar() != '\n');
		//obteniendo frase
		scanf("%[^\n]s",palabra);
		lon = strlen(palabra);
		//recorriendo frase para encontrar alguan coincidencia
		for(int j = 0 ; j<lon ; j++){
		    //se busca letra por letra en el alfabeto1 y si se encuentra, se cambia por letra del alfabeto2.
			for(int k = 0 ; k<lonA; k++){
				if(palabra[j] == alfabeto1[k]){
					palabra[j] = alfabeto2[k];
					break;
				}
			}
		}
		strcpy(cadenas[i],palabra);
	}
	//Imprimiendo resultado.
	for(int i= 0; i<number;i++){
		printf("%s\n",cadenas[i]);
	}
	return 0;
}   