#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void){
    char cadena[MAX];
    
    printf("Ingrese frase o palabra:");
    scanf("%[^\n]s",cadena);
    
    //primer carácter
    printf("Primer carácter: %c\n",cadena[0]);
    //último carácter
    int longitud = strlen(cadena);
    printf("Último carácter: %c\n",cadena[longitud-1]);
    //Frase sin el primer carácter
    printf("La cadena de texto sin el primer carácter: ");
    for (int i=1; i<longitud ; i++){
        printf("%c",cadena[i]);
    } 
    printf("\n");
    //Frase sin el último carácter
    printf("La cadena de texto sin el último carácter: ");
    for (int i=0; i<longitud-1 ; i++){
        printf("%c",cadena[i]);
    } 
    printf("\n");

    return 0;
}