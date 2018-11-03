/******************************************************************************
Fundamentos de programación. Estructuras de datos.
ejemplo 18-1:	
	Crear un programa en lenguaje C que reciba por medio de una estructura de datos 
	la fecha de nacimiento del usuario.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

/***
@struct fecha: Estructura de datos que guarda el mes, dia y año de una fecha 
***/
typedef struct fecha{
	int dia;
	int mes;
	int annio;
}fecha;

/***
@fn main: Función principal del programa.
***/
int main(void){
	//declaración de variables locales
    fecha nacimiento;
	
	//solicitando datos al usuario
	printf("Ingrese la fecha de su nacimiento: \n");
    printf("Ingrese el dia: ");
    scanf("%d",&nacimiento.dia);
    printf("Ingrese el mes: ");
    scanf("%d",&nacimiento.mes);
    printf("Ingrese el año: ");
    scanf("%d",&nacimiento.annio);
	
	//mostrando resultado
	printf("la fecha ingresada es: %d/%d/%d\n",nacimiento.dia, nacimiento.mes, nacimiento.annio);

	return 0;
}