/******************************************************************************
Fundamentos de programación. Introducción a GUI.
ejemplo 16-1:	
	Levantando una ventana grafica en SDL 1.2
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

//prototipos de funciones
SDL_Surface * iniciar_sdl (int w, int h, char * titulo);

//variables globales
SDL_Event event; 
SDL_Surface * screen;

/***
@fn main: Función principal del programa.
***/
int main(void){
	//inicializando SDL 1.2
	screen = iniciar_sdl (640, 480, "Mi primera ventana gráfica usando SDL 1.2");
	if (! screen){
		exit (1);
	}

	//manejo de los eventos que suceden en la ventana
	while (SDL_WaitEvent (&event)){
		switch (event.type){
			case SDL_QUIT: //cerrar la ventana 
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
	
	if (!screen){
		printf ("%s\n", SDL_GetError ());
		return NULL;
	}
	
	return screen;
}
