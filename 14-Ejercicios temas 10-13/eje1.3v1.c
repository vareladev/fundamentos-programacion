#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void){
    char cadena[MAX];
    
    printf("Ingrese frase o palabra:");
    scanf("%[^\n]s",cadena);
    
    //calculando longitud
    int longitud = strlen(cadena);
    
    //recorriendo cadena
    for (int i=0; i<longitud ; i++){
        printf("%c%c",cadena[i],cadena[i]);
    } 
    printf("\n");

    return 0;
}
