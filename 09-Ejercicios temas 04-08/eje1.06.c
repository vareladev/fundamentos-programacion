/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.06:	
	Construir un programa que solicite del teclado un carácter que corresponda 
	con la etapa de vida de una persona y luego muestre un mensaje basándose en 
	la siguiente tabla:
		- P:	Primera Infancia (0-5 años)
		- I:	Infancia (6 - 11 años)
		- A:	Adolescencia (12 - 18 años)
		- J:	Juventud (14 - 26 años)
		- D:	Adultez (27- 59 años)
		- V:	Persona Mayor (60 años o mas) envejecimiento y vejez.
		- otro:	Error, entrada inválida.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    //declaración de variables 
	char etapa;
	
	//solicitando datos al usuario
    printf("Ingrese descriptor: ");
    scanf("%c",&etapa);
	
	//operando
	switch(etapa){
		case 'P':	printf("Primera Infancia (0-5 años).\n");	
					break;
		case 'I':	printf("Infancia (6 - 11 años).\n");	
					break;
		case 'A':	printf("Adolescencia (12 - 18 años).\n");	
					break;
		case 'J':	printf("Juventud (14 - 26 años).\n");	
					break;
		case 'D':	printf("Adultez (27- 59 años).\n");	
					break;
		case 'V':	printf("Persona Mayor (60 años o mas).\n");	
					break;
		default:	printf("Entrada inválida.\n");	
					break;
	}
	
    return 0;
}