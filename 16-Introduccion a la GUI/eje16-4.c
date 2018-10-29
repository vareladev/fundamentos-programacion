/******************************************************************************
Fundamentos de programación. Introducción a GUI.
ejemplo 16-4:	
	Levantando una ventana grafica en SDL 1.2, escribiendo texto en una ventana gráfica.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>

//prototipos de funciones
SDL_Surface * iniciar_sdl (int w, int h, char * titulo);
SDL_Surface * crear_fondo (SDL_Surface * screen);
void xyTextoFC(SDL_Surface *screen,int x,int y,const char *t, TTF_Font *f,SDL_Color c);
TTF_Font * cargar_fuente();

//variables globales
SDL_Event event;
SDL_Surface * screen;
SDL_Surface * canvas;		
SDL_Color BLACK = {0,0,0};	
SDL_Color WHITE = {255,255,255}; 

/***
@fn main: Función principal del programa.
***/
int main(void){
	//inicializando SDL 1.2
	screen = iniciar_sdl (640, 480, "Configurando lienzo");
	if (! screen){
		exit (1);
	}

	//levantando un lienzo de trabajo (canvas)
	canvas = crear_fondo (screen);
	if (!canvas){
		exit (1);
	}
	
	//cargar fuente
	TTF_Font *font = NULL;
	font = cargar_fuente();
	if(!font){
		exit (1);
	}
	//escribiendo sobre pantalla
	xyTextoFC(screen,0,0,"fundamentos de programacion",font,BLACK);
	xyTextoFC(screen,0,30,"escribiendo texto en pantalla utilizando SDL",font,BLACK);
	
	//manejo de los eventos que suceden en la ventana
	while (SDL_WaitEvent (&event)){
		switch (event.type){
			case SDL_QUIT: 	//cerrar la ventana 
				SDL_FreeSurface (canvas);
				SDL_Quit();
				break;	
			default:
				break;
		}
	}

	return 0;
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
	if (!tmp){
		printf ("%s\n", SDL_GetError ());
		return NULL;
	}

	SDL_FillRect (tmp, NULL, color);
	SDL_BlitSurface (tmp, NULL, screen, NULL);
	SDL_Flip (screen);
	
	return tmp;
}


/***
@fn cargar_fuente: configura y carga la fuente de texto a utilizar en la ventana.
@return devuelve un puntero a TTF_Font, que es un acceso a la fuente cargada.
***/
TTF_Font * cargar_fuente(){
	if(TTF_Init() < 0){
		printf("Error al iniciar SDL_ttf: %s", SDL_GetError());
		return NULL;
	}
	TTF_Font *font=NULL;
	font = TTF_OpenFont("arial.ttf", 30);
	if (!font) {
		printf( "Error al cargar una fuente: %s.\n", SDL_GetError() );
		return NULL;
	}
	return font;
}

/***
@fn xyTextoFC: Escribe cadenas de texto en una ventana gráfica.
@param screen: Surface de la ventana principal.
@param y: coordenada y (en pixeles) donde se colocará el texto.
@param x: coordenada x (en pixeles) donde se colocará el texto.
@param t: cadena de texto a escribir en pantalla.
@param f: fuente a utilizar.
@param t: color del texto.
@return void.
***/
void xyTextoFC(SDL_Surface *screen,int x,int y,const char *t, TTF_Font *f,SDL_Color c){
	int ancho,alto;
	SDL_Rect rect;
	SDL_Surface *text=NULL;
	text=TTF_RenderText_Solid(f,t,c);
	if(text==NULL) return;
	rect.x=x;
	rect.y=y;
	TTF_SizeText(f,t,&ancho,&alto);
	SDL_BlitSurface(text,NULL,screen,&rect);
	SDL_UpdateRect(screen,x,y,ancho,alto);
	SDL_FreeSurface(text);
}
