/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12.1-1:	
	Duplicar una cadena de texto.
Autor: Manuel Callejas, Oct 2018. v1.0.
*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main(void){

	char palabra[100];
	printf("Ingrese una palabra para duplicar: ");
	scanf("%s",palabra);

	int lon=strlen(palabra); 
	int lon2=(lon*2)+1;
	char palabra2[lon2];

	int i=0;
	int j=0;

	for(j;j<lon2;j=j+2){
		palabra2[j]=palabra[i];
		palabra2[j+1]=palabra[i];
		i++;
	}

	printf("La palabra duplicada es: %s\n",palabra2);

return 0;
}





