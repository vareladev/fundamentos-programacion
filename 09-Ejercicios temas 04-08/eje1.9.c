//librerias
#include <stdio.h>

//Macros
#define TRUE 1

//función principal
int main(void){
	//declaración de variables locales
	float numero;

	//solicitando datos hasta que el usuario ingrese cero
	while(TRUE){
		printf("Ingrese número: ");
		scanf("%f", &numero);

		if(numero == 0){
			break;
		}

		if(numero < 0){
			numero = numero * -1;
		}

		printf("Valor absoluto: %.2f\n", numero);
	}

	printf("finalizando programa...\n");
	return 0;
}
