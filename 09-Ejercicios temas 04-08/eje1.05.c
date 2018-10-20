/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.05:	
	Un elevador tiene una capacidad M de kilogramos. Hacer un programa en 
	lenguaje C que pida al usuario la capacidad M del elevador y el peso de 5 
	personas en libras, el programa deberá convertir el peso de las personas 
	al equivalente en kilogramos y verificar si se sobrepasa el límite de 
	seguridad permitido.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    //declaración de variables 
	float capacidad;
	float p1,p2,p3,p4,p5;
	float sumapesos;
	
	//solicitando datos al usuario
    printf("Ingrese la capacidad del elevador: ");
    scanf("%f",&capacidad);
	printf("Ingrese el peso de la persona 1: ");
    scanf("%f",&p1);
	printf("Ingrese el peso de la persona 2: ");
    scanf("%f",&p2);
	printf("Ingrese el peso de la persona 3: ");
    scanf("%f",&p3);
	printf("Ingrese el peso de la persona 4: ");
    scanf("%f",&p4);
	printf("Ingrese el peso de la persona 5: ");
    scanf("%f",&p5);
	
	//operando
	sumapesos = p1 + p2 + p3 + p4 + p5;
	if(capacidad >= sumapesos){
		printf("Es seguro usar el elevador, soporta el peso de las 5 personas\n");
	}
	else{
		printf("Peligro! el peso del elevador se ha sobrepasado\n");
	}
	
    return 0;
}