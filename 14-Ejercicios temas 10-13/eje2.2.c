/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 2.1:	
    Construya un programa en lenguaje C, que dadas dos secuencias de caracteres en formato
    cadena de texto, que representan a números de máximo 16 bits en formato binario. Calcule su
    correspondiente suma en formato binario, y luego muestre la respuesta.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>

//macros
#define MAX 17

//prototipos de funciones
void limpiarbuffer();
char getcarry(char a, char b);
char getsum(char a, char b);

//función principal
int main(void){
    //entrada de usuario
    char input1[MAX];
    char input2[MAX];
    //sumandos de la operacion
    char s1[] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','\0'};
    char s2[] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','\0'};
    char res[] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','\0'};
    char car[] = {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','\0'};
    //longitud de la entrada del usuario
    int lons1;
    int lons2;
    
    //solicitando datos al usuario
    printf("ingrese sumando 1: ");
    scanf("%s",input1);
    limpiarbuffer();
    printf("ingrese sumando 2: ");
    scanf("%s",input2);
    limpiarbuffer();
    
    lons1 = strlen(input1);
    lons2 = strlen(input2);
    
    if(lons1>16 || lons2>16){
        printf("Error: el tamaño de los numeros no es soportado por el programa.\n");
    }
    
    //copiando entrada de usuario a sumandos
    int i;
    int j;
    for (i=lons1-1,j=15;i>=0;i--,j--){
        s1[j] = input1[i];
    }
    for (i=lons2-1,j=15;i>=0;i--,j--){
        s2[j] = input2[i];
    }
    
    char carry = '0';
    char resaux;
    for (i=15;i>=0;i--){
        //operando a carry con el sumando 1
        resaux = getsum(carry, s1[i]);
        carry = getcarry(carry, s1[i]);
        //operando a resaux con sumando s2
        res[i] = getsum(resaux, s2[i]);
        //verificando si ya hay algo en carro entonces no se toca 
        if (carry != '1'){
            carry = getcarry(resaux, s2[i]);
        }
        //llenado carry
        if(i!=0){
            car[i-1] = carry;    
        }
    }
    
    //mostrado operacion
    //carry
    printf("|");
    for (int i=0;i<16;i++){
        printf(" %C |",car[i]);
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
    //sumando1
    printf("|");
    for (int i=0;i<16;i++){
        printf(" %C |",s1[i]);
    }
    printf("\n");
    //sumando2
    printf("|");
    for (int i=0;i<16;i++){
        printf(" %C |",s2[i]);
    }
    printf("\n");
    printf("-----------------------------------------------------------------\n");
    //resultado
    printf("|");
    for (int i=0;i<16;i++){
        printf(" %C |",res[i]);
    }
    printf("\n");    
    
    

    
	return 0;
}


void limpiarbuffer(){
    while(getchar() != '\n');
}

char getsum(char a, char b){
    if((a=='0' && b=='0') || (a=='1' && b=='1')){
        return '0';
    }
    if((a=='1' && b=='0') ||(a=='0' && b=='1') ){
        return '1';
    }
}

char getcarry(char a, char b){
    if((a=='0' && b=='0') || (a=='1' && b=='0') || (a=='0' && b=='1')){
        return '0';
    }
    if(a=='1' && b=='1'){
        return '1';
    }
}
