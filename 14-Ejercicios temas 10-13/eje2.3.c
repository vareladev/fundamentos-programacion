/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 2.3:	
	Construir una simulación de "el juego de la vida" en C; El programa pedirá al 
	usuario tres datos de entrada:
	 -	Un número entero y positivo N con 20<=N<=40 para la malla.
	 -	La cantidad de celulas iniciales. (El programa generará sus coordenadas de 
		manera aleatoria.
	 -	El número de iteraciones de la simulación.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <time.h>

//Función principal
int main(void){
	//declaración de variables:
    int dim; //dimensión de matriz
	int ejemplares; //cantidad de celulas iniciales
	int iteraciones; //cantidad de iteraciones de la simulación
	
	//entrada de datos iniciales:
    printf("Ingrese tamaño del ambiente: ");
    scanf("%d",&dim);
    printf("Ingrese cuantos ejemplares habrán inicialmente: ");
    scanf("%d",&ejemplares);
    printf("Ingrese cuantas iteraciones de la simulación desea realizar: ");
    scanf("%d",&iteraciones);
    
    //validando datos iniciales
    if(dim<20 || dim>40 || ejemplares>(dim*dim)){
        printf("Datos ingresados no válidos.\n");
        return 0;
    }
    
    //creando matriz principal y auxiliar
    int N = dim+2;
    int env[N][N];
    int temp[N][N];
    
    //llenando de ceros ambas matrices
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            env[i][j] = 0;
            temp[i][j] = 0;
        }
    }
    
    //generando ejemplares aleatorios
    int rcont = 0;
    int rfil, rcol;
    srand(time(NULL));
    do{
        rfil=(rand()%(N-1));
        rcol=(rand()%(N-1));
        if(rfil>0 && rcol>0){
             env[rfil][rcol] = 1;
             rcont++;
        }
    }while(rcont<=ejemplares);
    
    //imprimiendo matriz inicial
    printf("Inicial: \n");
    for(int i=1;i<(N-1);i++){
        printf("|");
        for(int j=1;j<(N-1);j++){
            printf(" %d |",env[i][j]);
        }
        printf("\n");
    }
    
    //iniciando simulación
    int poblacion;
    for(int ite=0;ite<iteraciones;ite++){
        //evaluando todos los elemenos menos las orillas
        for(int i=1;i<(N-1);i++){
            for(int j=1;j<(N-1);j++){
                poblacion = 0;
                //contando la poblacion en la matriz interna
                if(env[i-1][j-1]==1)
                    poblacion++;
                if(env[i][j-1]==1)
                    poblacion++;
                if(env[i+1][j-1]==1)
                    poblacion++;
                if(env[i-1][j]==1)
                    poblacion++;
                if(env[i-1][j+1]==1)
                    poblacion++;
                if(env[i][j+1]==1)
                    poblacion++;
                if(env[i+1][j+1]==1)
                    poblacion++;
                if(env[i+1][j]==1)
                    poblacion++;
                    
                //evaluando si la celula vive o muere según la población de celulas que la rodean
                if(env[i][j]==1){ //celula viva
                    if(poblacion>3 || poblacion<=1){ //si la poblacion es mayor a 3 o menor a 1...
                        temp[i][j]=0;   //la celula muere
                    }
                    if(poblacion==2 || poblacion==3){ //si la poblacion es igual a 2 o 3...
                        temp[i][j]=1; //la celula sigue viva
                    }
                    
                }
                else{ //celula muerta
                    if(poblacion==3){ //si la población es igual a 3...
                        temp[i][j]=1; //una celula nace
                    }
                    else{
                        temp[i][j]=0; //caso contrario sigue muerta
                    }
                }
            }
        }
        
        //copiando environment temp a env y colocando ceros en temp
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                env[i][j] = temp[i][j];
                temp[i][j] = 0;
            }
        }
        
        //imprimiendo matriz
        printf("resultado iteración %d: \n",(ite+1));
        for(int i=1;i<(N-1);i++){
            printf("|");
            for(int j=1;j<(N-1);j++){
                printf(" %d |",env[i][j]);
            }
            printf("\n");
        }
    }
   

    return 0;
}