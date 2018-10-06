/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12.1-1:	
	Encriptacion googlere.
Autor: Manuel Callejas, Oct 2018. v1.0.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){
	char alfabeto1[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char alfabeto2[] = {'y','n','f','i','c','w','l','b','k','u','o','m','x','s','e','v','z','p','d','r','j','g','t','h','a','q'};
	char palabra[50];	

	int number;
	int lon;
	int lonA = strlen(alfabeto1);

	scanf("%d",&number);
	
	char cadenas[number][50+1];
	
	
	for(int i = 0; i < number; i++){
		while(getchar() != '\n');
		scanf("%[^\n]s",palabra);
		lon = strlen(palabra);
		for(int j = 0 ; j<lon ; j++){
			for(int k = 0 ; k<lonA; k++){
				if(palabra[j] == alfabeto1[k]){
					palabra[j] = alfabeto2[k];
					break;
				}
			}
		}
		strcpy(cadenas[i],palabra);
//		cadenas[i] = palabra;
//		printf("%s\n",palabra);
	}
	for(int i= 0; i<number;i++){
		printf("%s\n",cadenas[i]);
	}
	return 0;
}   
