/******************************************************************************
Fundamentos de programación. Interaccion entre programa y GUI.
ejemplo 17-1:	
	Tic-Tac-Toe.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

//Macros
#define TAM 3
#define TRUE 1
#define FALSE 0

//prototipos de funciones
SDL_Surface * iniciar_sdl (int w, int h, char * titulo);
SDL_Surface * crear_fondo (SDL_Surface * screen);
void agregarImagen(SDL_Surface *img, int fil, int col, SDL_Surface * screen);
void drawLine(SDL_Surface *Screen, int x0, int y0, int x1, int y1, Uint32 pixel);
void putpixel(SDL_Surface *theScreen, int x, int y, Uint32 pixel);
int cargar_imagen ();
void dibujarTablero();
int validarEmpate();
int validarGanador(char token);
void inicializarTablero();
void verificarPosicion(int fila, int columna, int x, int y);
void jugarTurno(int x, int y);
void listener();

//variables globales
SDL_Event event;	//maneja los eventos del mouse
SDL_Surface * screen;	//ventana
SDL_Surface * canvas;	//lienzo
SDL_Surface * imagenX;	//token X 
SDL_Surface * imagen0;	//token 0
SDL_Surface * p1;	//indicador turno jugador 1
SDL_Surface * p2;	//indicador turno jugador 2
SDL_Surface * ganadorp1;	//indicador ganardor jugador 1	
SDL_Surface * ganadorp2;	//indicador ganardor jugador 2
SDL_Surface * empate;	//indicador empate
SDL_Surface * blanco;	//imagen que funciona como "borrador"
int turno=TRUE;		//bandera que indica el turno de cada jugador
int ganador = FALSE; //bandera que indica si el juego ha terminado
Uint32 pixel;	//pixel para dibujar lineas
char tablero[TAM][TAM];	//contenedor lógico del juego

/***
@fn main: Función principal del programa.
***/
int main(void){
	//cargando elementos gráficos.
	int imgload = cargar_imagen ();
	if (!imgload){
		exit (1);
	}
	
	//inicializando SDL 1.2
	screen = iniciar_sdl (450, 500, "Tic-Tac-Toe");
	if (! screen){
		exit (1);
	}

	//levantando un lienzo de trabajo (canvas)
	canvas = crear_fondo (screen);
	if (!canvas){
		exit (1);
	}

	//iniciando juego
	inicializarTablero();
	dibujarTablero();
	listener();
	
	return 0;
}

/***
@fn inicializarTablero: llena el tablero de dimensión 3x3 de espacios (' ').
@return void.
***/
void inicializarTablero(){
	int i,j; 
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			tablero[i][j] = ' ';
		}
	}
	return; 
}

/***
@fn dibujarTablero: dibuja linea por linea el tablero del juego.
@return void.
***/
void dibujarTablero(){
	drawLine(screen,  0, 150, 450, 150, pixel);
	drawLine(screen,  0, 300, 450, 300, pixel);
	drawLine(screen,  150, 0, 150, 450, pixel);
	drawLine(screen,  300, 0, 300, 450, pixel);
	drawLine(screen,  0, 450, 450, 450, pixel);
	agregarImagen(p1, 10, 470, screen);
	SDL_Flip(screen);
	return;
}

/***
@fn validarEmpate: Verifica si todas las casilla tienen algo diferente de ' ' para validar el empate.
@return entero que indica si hay empate (retorna 1) o si el juego continua (retorna 0).
***/
int validarEmpate(){
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<3 ; j++){
			if(tablero[i][j] == ' '){
				return FALSE;
			}
		}
	}
	return TRUE;
}

/***
@fn validarGanador: Verifica que si el token enviado tiene una linea continua de 3 repeticiones
en horizontal, vertical, diagonal o diagonal inversa que lo define como ganador.
@param token: Token a evaluar: 'X' o '0'
@return entero que indica si hay el token ha ganado (retorna 1) o si el juego continua (retorna 0).
***/
int validarGanador(char token){
	if(tablero[0][0] == token && tablero[0][1] == token && tablero[0][2] == token){
		drawLine(screen,  20, 75, 430, 75, pixel);
		SDL_Flip(screen);
		return TRUE;
	}
	if(tablero[1][0] == token && tablero[1][1] == token && tablero[1][2] == token){
		drawLine(screen,  20, 225, 430, 225, pixel);
		SDL_Flip(screen);
		return TRUE;
	}
	if(tablero[2][0] == token && tablero[2][1] == token && tablero[2][2] == token){
		drawLine(screen,  20, 375, 430, 375, pixel);
		SDL_Flip(screen);
		return TRUE;
	}
	if(tablero[0][0] == token && tablero[1][0] == token && tablero[2][0] == token){
		drawLine(screen,  75, 20, 75, 430, pixel);
		SDL_Flip(screen);
		return TRUE;
	}
	if(tablero[0][1] == token && tablero[1][1] == token && tablero[2][1] == token){
		drawLine(screen,  225, 20, 225, 430, pixel);
		SDL_Flip(screen);
		return TRUE;
	}
	if(tablero[0][2] == token && tablero[1][2] == token && tablero[2][2] == token){
		drawLine(screen,  375, 20, 375, 430, pixel);
		SDL_Flip(screen);
		return TRUE;
	}

	if(tablero[0][0] == token && tablero[1][1] == token && tablero[2][2] == token){
		drawLine(screen,  20, 20, 430, 430, pixel);
		SDL_Flip(screen);
		return TRUE;
	}
	if(tablero[2][0] == token && tablero[1][1] == token && tablero[0][2] == token){
		drawLine(screen,  20, 430, 430, 20, pixel);
		SDL_Flip(screen);
		return TRUE;
	}

	return FALSE;
}


/***
@fn jugarTurno: delimita el espacio gráfico de la ventana para saber donde se hizo click.
@param x: posición x del ultimo click del mouse.
@param y: posición y del ultimo click del mouse.
@return void.
***/
void jugarTurno(int x, int y){
		if(x>0 && x<150 && y>0 && y<150){
			verificarPosicion(0, 0, 10,10);
		}
		else if(x>150 && x<300 && y>0 && y<150){
			verificarPosicion(0, 1, 160,10);
		}
		else if(x>300 && x<450 && y>0 && y<150){
			verificarPosicion(0, 2, 310,10);
		}
		else if(x>0 && x<150 && y>150 && y<300){
			verificarPosicion(1, 0, 10,160);
		}
		else if(x>150 && x<300 && y>150 && y<300){
			verificarPosicion(1, 1, 160,160);
		}
		else if(x>300 && x<450 && y>150 && y<300){
			verificarPosicion(1, 2, 310,160);
		}
		else if(x>0 && x<150 && y>300 && y<450){
			verificarPosicion(2, 0, 10,310);
		}
		else if(x>150 && x<300 && y>300 && y<450){
			verificarPosicion(2, 1, 160,310);
		}
		else if(x>300 && x<450 && y>300 && y<645000){
			verificarPosicion(2, 2, 310,310);
		}
	return;						
}

/***
@fn verificarPosicion: 	Verifica si en la casilla elegida por un jugador es posible colocar su token.
Si es así, dibuja el token del jugador en pantalla y verifica si con ese movimiento el jugador gana, 
hay empate o si el juego continua.
@param fila: fila del tablero principal a evaluar.
@param columna: columna del tablero principal a evaluar.
@param x: posición x donde se colocará el token.
@param y: posición y donde se colocará el token.
@return void.
***/
void verificarPosicion(int fila, int columna, int x, int y){
	char token;
	if(tablero[fila][columna] == ' '){
		if(turno){
			token = 'X';
			tablero[fila][columna] = token;
			agregarImagen(imagenX, x, y, screen);
			if(validarGanador(token)){
				ganador=TRUE;
				agregarImagen(blanco, 10, 470, screen);
				agregarImagen(ganadorp1, 10, 470, screen);
			}
			else if(validarEmpate()){
				agregarImagen(blanco, 10, 470, screen);
				agregarImagen(empate, 10, 470, screen);					
				ganador = TRUE;
			}
			else{
				agregarImagen(blanco, 10, 470, screen);
				agregarImagen(p2, 10, 470, screen);
			}
			turno = FALSE;
		}
		else{
			token = '0';
			tablero[fila][columna] = token;
			agregarImagen(imagen0, x, y, screen);
			if(validarGanador(token)){
				ganador=TRUE;
				agregarImagen(blanco, 10, 470, screen);
				agregarImagen(ganadorp2, 10, 470, screen);
			}
			else{
				agregarImagen(blanco, 10, 470, screen);
				agregarImagen(p1, 10, 470, screen);
			}
			turno = TRUE;
		}
	}

	return;
}

/***
@fn listener: loop donde se evaluan los eventos sobre la ventana GUI.
@return void.
***/
void listener(){
	int cx, cy; //guarda las posiciones 'x' y 'y' donde se hizó click con el mouse.
	while (SDL_WaitEvent (&event)){
		switch (event.type){
			case SDL_QUIT:
				SDL_FreeSurface (canvas);
				SDL_Quit();
				break;	
			case SDL_MOUSEBUTTONDOWN:	
				if(event.button.button == SDL_BUTTON_LEFT){
					cx = event.button.x;
					cy = event.button.y;
					if(!ganador){
						jugarTurno(cx, cy);
					}					
				}
			default:
				break;
		}
	}	
}

/***
@fn iniciar_sdl: configura y levanta una ventana en SDL, además coloca el titulo en la ventana.
@param w: Ancho de la ventana a configurar.
@param h: Alto de la ventana a configurar.
@param titulo: Mensaje a colocar en la barra de titulo.
@return devuelve un puntero a SDL_Surface, es decir una forma de acceso a la ventana levantada.
***/
SDL_Surface * iniciar_sdl (int w, int h, char * titulo){
	int flags = SDL_SWSURFACE;
	SDL_Surface * screen;

	if (SDL_Init (SDL_INIT_VIDEO) == -1){
		printf ("%s\n", SDL_GetError ());
		return NULL;
	}

	atexit (SDL_Quit);

	SDL_WM_SetCaption (titulo, NULL);
	screen = SDL_SetVideoMode (w, h, 16, flags);
	
	if (! screen){
		printf ("%s\n", SDL_GetError ());
		return NULL;
	}
	return screen;
}

/***
@fn crear_fondo: configura y levanta el lienzo de trabajo.
@param screen: Surface de la ventana principal
@return devuelve un puntero a SDL_Surface, que funcionará como lienzo de trabajo.
***/
SDL_Surface * crear_fondo (SDL_Surface * screen){
	SDL_Surface * tmp;
	Uint32 color = SDL_MapRGB (screen->format, 255, 255, 255);
	tmp = SDL_DisplayFormat (screen);
	if (! tmp)
	{
		printf ("%s\n", SDL_GetError ());
		return NULL;
	}

	SDL_FillRect (tmp, NULL, color);
	SDL_BlitSurface (tmp, NULL, screen, NULL);
	SDL_Flip (screen);
	
	return tmp;
}

/***
@fn agregarImagen: agrega una imagen al lienzo y lo refresca.
@param img: puntero a SDL_Surface que representa la imagen a colocar en pantalla.
@param fil: coordenada y (en pixeles) donde se colocará la imagen.
@param col: coordenada x (en pixeles) donde se colocará la imagen.
@param screen: lienzo donde se colocará la imagen.
@return void.
***/
void agregarImagen(SDL_Surface *img, int x, int y, SDL_Surface * screen){
	SDL_Rect destino;
	destino.x=x;
	destino.y=y;
	SDL_BlitSurface(img, NULL, screen, &destino);
	SDL_Flip(screen);
}

/***
@fn cargar_imagen: Carga en memoria todos los elementos gráficos a utilizar en la ventana.
@return  entero que indica si hay las imagenes pudieron ser cargadas (retorna 1) o no (retorna 0).
***/
int cargar_imagen (){
	imagenX = IMG_Load ("img/X.png");
	imagen0 = IMG_Load ("img/0.png");
	p1 = IMG_Load ("img/p1.png");
	p2 = IMG_Load ("img/p2.png");
	ganadorp1 = IMG_Load ("img/ganadorp1.png");
	ganadorp2 = IMG_Load ("img/ganadorp2.png");
	empate = IMG_Load ("img/empate.png");
	blanco = IMG_Load ("img/blanco.png");
	if (!imagenX || !imagen0 || !p1 || !p2 || !ganadorp1 || !ganadorp2 || !empate || !blanco){
		printf ("%s\n", SDL_GetError ());
		return FALSE;
	}
	return TRUE;
}

/***
@fn putpixel: dibuja un pixel en pantalla.
@param screen: Donde será dibujado el pixel.
@param x: coordenada x (en pixeles) donde se colocará el pixel.
@param y: coordenada y (en pixeles) donde se colocará el pixel.
@param pixel: El pixel que será dibujado.
@return void.
***/
void putpixel(SDL_Surface *screen, int x, int y, Uint32 pixel) {
    int byteperpixel = screen->format->BytesPerPixel;

    Uint8 *p = (Uint8*)screen->pixels + y * screen->pitch + x * byteperpixel;

	// Adress to pixel
    *(Uint32 *)p = pixel;
}

/***
@fn drawLine: dibuja una linea en pantalla.
@param screen: Donde será dibujado la linea.
@param x0: coordenada x inicial (en pixeles) donde se colocará la linea.
@param y0: coordenada y inicial (en pixeles) donde se colocará la linea.
@param x1: coordenada x inicial (en pixeles) donde se colocará la linea.
@param y1: coordenada y inicial (en pixeles) donde se colocará la linea.
@param pixel: El pixel que será dibujado a lo largo de la linea.
@return void.
***/
void drawLine(SDL_Surface *Screen, int x0, int y0, int x1, int y1, Uint32 pixel) {
	int i;
    double x = x1 - x0; 
	double y = y1 - y0; 
	double length = sqrt( x*x + y*y ); 
	double addx = x / length; 
	double addy = y / length; 
	x = x0; 
	y = y0; 
	
	for ( i = 0; i < length; i += 1) { 
		putpixel(Screen, x, y, pixel ); 
		x += addx; 
		y += addy; 
		
	} 
}
