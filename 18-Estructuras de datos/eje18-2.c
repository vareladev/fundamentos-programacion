/******************************************************************************
Fundamentos de programación. Estructuras de datos.
ejemplo 18-2:	
	Crear un programa en lenguaje C que reciba por medio de una estructura de datos 
	el nombre de una persona, su dui y la fecha de nacimiento del usuario. Para la
	fecha de nacimiento del usuario basarse en la estructura creada en el ejercicio
	anterior
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//macros 
#define NAME 100
#define DUI 10

/***
@struct fecha: Estructura de datos que guarda el mes, dia y año de una fecha 
***/
typedef struct fecha{
	int dia;
	int mes;
	int annio;
}fecha;
/***
@struct persona: Estructura de datos que guarda el nombre, dui y fecha de 
				 nacimiento de una persona
***/
typedef struct persona{
	char nombre[NAME];
	char dui[DUI];
	fecha fechaNac;
}persona;

//prototipos de funciones
fecha obtenerFechaNac();

/***
@fn main: Función principal del programa.
***/
int main(void){
	//declaración de variables locales
	persona p;
    fecha fn;
	
	//Solicitando datos al usuario
	printf("Ingrese su DUI: ");
	scanf("%s",p.dui);	
	while(getchar()!='\n');
	printf("Ingrese su nombre: ");
	scanf("%[^\n]s",p.nombre);
	fn = obtenerFechaNac();
	p.fechaNac = fn;
	
	//mostrando datos obtenidos
	printf("Los datos ingresados son: \n");
	printf("nombre: %s\n",p.nombre);
	printf("DUI: %s\n",p.dui);
	printf("Fecha nacimiento: %d/%d/%d\n",p.fechaNac.dia,p.fechaNac.mes, p.fechaNac.annio);
	return 0;
}

/***
@fn obtenerFechaNac: Pide al usuario el dia, mes y año de nacimiento y guarda los datos en una
					 estructura de datos.
@return estructura de datos que contiene el dia, mes y año de nacimiento.
***/
fecha obtenerFechaNac(){
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

	return nacimiento;
}