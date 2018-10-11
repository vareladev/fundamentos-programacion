//librerias
#include <stdio.h>

//función principal
int main(void){
	//declaración de variables locales
	float numero;

	printf("Ingrese número: ");
	scanf("%f", &numero);

	if(numero < 0){
		numero = numero * -1;
	}

	printf("Valor absoluto: %.2f\n", numero);
	return 0;
}
