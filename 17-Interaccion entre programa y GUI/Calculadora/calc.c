//Imagenes tomadas de https://www.flaticon.com/

//Compilar calculadora:         gcc calc.c -o calc -lSDL -lSDL_image -lSDL_ttf -lm

//Librerias
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<string.h>

//Macros
#define TRUE 1
#define FALSE 0
#define SIZE 6

//prototipos de funciones
SDL_Surface * iniciar_sdl (int w, int h, char * titulo);
SDL_Surface * crear_fondo (SDL_Surface * screen);
int cargar_imagen ();
void drawLine(SDL_Surface *Screen, int x0, int y0, int x1, int y1, Uint32 pixel);
void putpixel(SDL_Surface *screen, int x, int y, Uint32 pixel);
void dibujarCalc();
void agregarImagen(SDL_Surface *img, int x, int y, SDL_Surface * screen);
void listener();
char detectarTecla(int x, int y);
TTF_Font * cargar_fuente();
void xyTextoFC(SDL_Surface *screen,int x,int y,const char *t, TTF_Font *f,SDL_Color c);
void tratarDatos(char tecla);
void calcular();
void clear();
void resultDisplay();
void guardar();

//variables globales
SDL_Event event;	//maneja los eventos del mouse
SDL_Surface * screen;	//ventana
SDL_Surface * canvas;	//lienzo
SDL_Color BLACK = {0,0,0};	//color negro
Uint32 pixel;	//pixel para dibujar lineas
float resultado = 0;  //resultado del calculo
int decimal = FALSE; //bandera para limitar uso de decimales
int decimal1 = 0; //posicion del punto decimal en operando 1
int decimal2 = 0; //posicion del punto decimal en operando 2 
int count1 = 0; //contador de numeros ingresados en operando 1
int count2 = 1; //contador de numeros ingresados en operando 2
int change = FALSE; //bandera para cambiar al llenado de operando 2
int sign1 = FALSE; //bandera para señalar si operando 1 es negativo
int sign2 = FALSE; //bandera para señalar si operando 2 es negativo
int o1[SIZE] = {0}; //operando 1
int o2[SIZE] = {0}; //operando 2
char resultadoString[SIZE*4]; //resultado 
TTF_Font *font = NULL; //font
char operation[SIZE*4] = {0}; //operacion entera
int operationCount = 0; //contador operacion entera
int operationType = 0; //tipo de operacion a efectuar
FILE * memoria; //memoria
FILE * temp; //memoria temporal
FILE * indice; //contador de memoria
int countMem = 0; //contador de memoria
char dataBase[10][SIZE*4]; //guarda 10 resultados
int cursor = 9; //maneja el resultado mostrado
//Imagenes 
SDL_Surface * number0;
SDL_Surface * number1;
SDL_Surface * number2;
SDL_Surface * number3;
SDL_Surface * number4;
SDL_Surface * number5;
SDL_Surface * number6;
SDL_Surface * number7;
SDL_Surface * number8;
SDL_Surface * number9;
SDL_Surface * plus;
SDL_Surface * minus;
SDL_Surface * division;
SDL_Surface * multiply;
SDL_Surface * down;
SDL_Surface * up;
SDL_Surface * equal;
SDL_Surface * cancel;
SDL_Surface * point;
SDL_Surface * white;

int main(int argc, char const *argv[])
{
	//cargando elementos gráficos.
	int imgload = cargar_imagen ();
	if (!imgload){
		exit (1);
	}

	//inicializando SDL 1.2
	screen = iniciar_sdl (400, 490, "Calculadora");
	if (! screen){
		exit (1);
	}

	//levantando un lienzo de trabajo (canvas)
	canvas = crear_fondo (screen);
	if (!canvas){
		exit (1);
	}

	//cargar fuente
	font = cargar_fuente();
	if(!font){
		exit (1);
	}

	//creando interfaz de la calculadora
	dibujarCalc();

	//busca el contador de memoria guardado en indice.txt
	indice = fopen("indice.txt", "r");
	if (indice != NULL)
	{
		fscanf (indice, "%d", &countMem);
	}
	fclose(indice);
	
	//iniciar calculadora
	listener();

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
@fn cargar_imagen: Carga en memoria todos los elementos gráficos a utilizar en la ventana.
@return  entero que indica si hay las imagenes pudieron ser cargadas (retorna 1) o no (retorna 0).
***/
int cargar_imagen (){
	number0 = IMG_Load("Images/number.png");
	number1 = IMG_Load ("Images/number-1.png");
	number2 = IMG_Load ("Images/number-2.png");
	number3 = IMG_Load ("Images/number-3.png");
	number4 = IMG_Load ("Images/number-4.png");
	number5 = IMG_Load ("Images/number-5.png");
	number6 = IMG_Load ("Images/number-6.png");
	number7 = IMG_Load ("Images/number-7.png");
	number8 = IMG_Load ("Images/number-8.png");
	number9 = IMG_Load ("Images/number-9.png");
	plus = IMG_Load ("Images/plus.png");
	minus = IMG_Load("Images/minus.png");
	division = IMG_Load ("Images/division.png");
	multiply = IMG_Load ("Images/multiply.png");
	up = IMG_Load ("Images/up.png");
	down = IMG_Load ("Images/down.png");
	equal = IMG_Load ("Images/equal.png");
	cancel = IMG_Load("Images/cancel.png");
	point = IMG_Load("Images/point.png");
	white = IMG_Load("Images/white.png");
	if (!number1 || !number2 || !number3 || !number4 || !number5 || !number6 || !number7 || !number8 || !number9 || !plus || !minus || !multiply || !division || !equal || !down || !up || !white){
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

/***
@fn dibujarCalc: dibuja interfaz de la calculadora.
@return void.
***/
void dibujarCalc(){
	drawLine(screen, 0, 140, 400, 140, pixel);
	agregarImagen(up, 20, 145, screen);
	agregarImagen(down, 120, 145, screen);
	agregarImagen(cancel, 270, 145, screen);
	agregarImagen(number7, 20, 215, screen);
	agregarImagen(number8, 120, 215, screen);
	agregarImagen(number9, 220, 215, screen);
	agregarImagen(division, 320, 215, screen);
	agregarImagen(number4, 20, 285, screen);
	agregarImagen(number5, 120, 285, screen);
	agregarImagen(number6, 220, 285, screen);
	agregarImagen(multiply, 320, 285, screen);
	agregarImagen(number1, 20, 355, screen);
	agregarImagen(number2, 120, 355, screen);
	agregarImagen(number3, 220, 355, screen);
	agregarImagen(minus, 320, 355, screen);
	agregarImagen(number0, 20, 425, screen);
	agregarImagen(point, 145, 460, screen);
	agregarImagen(equal, 220, 425, screen);
	agregarImagen(plus, 320, 425, screen);
	xyTextoFC(screen,10,70,"=",font,BLACK);
	SDL_Flip(screen);
	return;
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
				cx = event.button.x;
				cy = event.button.y;	
				tratarDatos(detectarTecla(cx, cy));		
			default:
				break;
		}
	}	
}

/***
@fn detectarTecla: Detecta la tecla presionada en la calculadora.
@param x: posición x del ultimo click del mouse.
@param y: posición y del ultimo click del mouse.
@return void.
***/
char detectarTecla(int x, int y){
		if(x>0 && x<100 && y>140 && y<210){
			return 'u';
		}
		else if(x>100 && x<200 && y>140 && y<210){
			return 'd';
		}
		else if(x>200 && x<400 && y>140 && y<210){
			return 'c';
		}
		else if(x>0 && x<100 && y>210 && y<280){
			return '7';
		}
		else if(x>100 && x<200 && y>210 && y<280){
			return '8';
		}
		else if(x>200 && x<300 && y>210 && y<280){
			return '9';
		}
		else if(x>300 && x<400 && y>210 && y<280){
			return '/';
		}
		else if(x>0 && x<100 && y>280 && y<350){
			return '4';
		}
		else if(x>100 && x<200 && y>280 && y<350){
			return '5';
		}
		else if(x>200 && x<300 && y>280 && y<350){
			return '6';
		}
		else if(x>300 && x<400 && y>280 && y<350){
			return 'x';
		}
		else if(x>0 && x<100 && y>350 && y<420){
			return '1';
		}
		else if(x>100 && x<200 && y>350 && y<420){
			return '2';
		}
		else if(x>200 && x<300 && y>350 && y<420){
			return '3';
		}
		else if(x>300 && x<400 && y>350 && y<420){
			return '-';
		}
		else if(x>0 && x<100 && y>420 && y<490){
			return '0';
		}
		else if(x>100 && x<200 && y>420 && y<490){
			return '.';
		}
		else if(x>200 && x<300 && y>420 && y<490){
			return '=';
		}
		else if(x>300 && x<400 && y>420 && y<490){
			return '+';
		}					
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
	font = TTF_OpenFont("Calculator.ttf", 30);
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

/***
@fn tratarDatos: Determina las funciones de cada tecla ingresada y muestra la operacion en la pantalla
@param tecla: Tecla ingresada en la calculadora
@return void.
***/
void tratarDatos(char tecla)
{
	//mostrar resultados
	if (tecla == 'u' && cursor > 0)
	{
		cursor--;
		agregarImagen(white, 0, 70, screen);
		xyTextoFC(screen,10,70,"=",font,BLACK);
		xyTextoFC(screen,40,70,dataBase[cursor],font,BLACK);
	}
	if (tecla == 'd' && cursor < 9)
	{
		cursor++;
		agregarImagen(white, 0, 70, screen);
		xyTextoFC(screen,10,70,"=",font,BLACK);
		xyTextoFC(screen,40,70,dataBase[cursor],font,BLACK);
	}
	//numeros negeativos
	if (tecla == '-' && change == FALSE && sign1 == FALSE && operationCount == 0)
	{
		sign1 = TRUE;
		operation[operationCount] = tecla;
		xyTextoFC(screen,20,10,operation,font,BLACK);
		operationCount++;
	}	
	if (count2 == 0 && sign2 == FALSE && tecla == '-' && operationType != 0)
	{
		sign2 = TRUE;
		operation[operationCount] = tecla;
		xyTextoFC(screen,20,10,operation,font,BLACK);
		operationCount++;
	}
	//decimales
	else if (tecla == '.' && decimal == FALSE)
	{
		if (change == FALSE && count1 < SIZE - 1)
		{
			decimal = TRUE;
			decimal1 = count1;
			operation[operationCount] = tecla;
			xyTextoFC(screen,20,10,operation,font,BLACK);
			operationCount++;
		}
		else if(count2 < SIZE - 1)
		{
			decimal = TRUE;
			decimal2 = count2;
			operation[operationCount] = tecla;
			xyTextoFC(screen,20,10,operation,font,BLACK);
			operationCount++;
		}
	}
	//numeros enteros
	else if (tecla >= '0' && tecla <= '9')
	{
		if (change == FALSE && count1 < SIZE)
		{
			operation[operationCount] = tecla;
			xyTextoFC(screen,20,10,operation,font,BLACK);
			operationCount++;
			o1[count1] = (int)tecla - 48;
			count1++;
		}
		else if(change == TRUE && count2 < SIZE)
		{
			operation[operationCount] = tecla;
			xyTextoFC(screen,20,10,operation,font,BLACK);
			operationCount++;
			o2[count2] = (int)tecla - 48;
			count2++;
		}
	}
	//operacion realizada
	else if (count1 > 0 && change == FALSE && (tecla == '+' || tecla == '-' || tecla == '/' || tecla == 'x'))
	{
		operation[operationCount] = ' ';
		operationCount++;
		switch(tecla)
		{
			case '/':
			operationType = 1;
			break;
			case 'x':
			operationType = 2;
			break;
			case '-':
			operationType = 3;
			break;
			case '+':
			operationType = 4;
			break;
			default:
			break;
		}	
		operation[operationCount] = tecla;
		xyTextoFC(screen,20,10,operation,font,BLACK);
		operationCount++;
		operation[operationCount] = ' ';
		operationCount++;
		change = TRUE;
		decimal = FALSE;
		count2 = 0;
	}
	//fin de la operacion
	else if (change == TRUE && tecla == '=' && count2 > 0)
	{
		calcular();
		resultDisplay();
		guardar();
		clear();
	}
	else if (tecla == 'c')
	{
		clear();
	}
	return;
}

/***
@fn calcular: Transforma los operandos en numeros y realiza la operacion
@return void
***/
void calcular()
{
	float a = 0; float b = 0;
	int power = 0;
	//operando 1
	for (int i = count1 - 1; i >= 0; i--)
	{
		a += o1[i] * pow(10, power);
		power++;
	}
	power = 0;
	//operando 2
	for (int i = count2 - 1; i >= 0; i--)
	{
		b += o2[i] * pow(10, power);
		power++;
	}
	//aplicando decimal 
	unsigned int number_of_digits1 = 0; int atemp = a;
	unsigned int number_of_digits2 = 0; int btemp = b;
	if (decimal1 != 0)
	{
		do {
	     	++number_of_digits1; 
	     	atemp /= 10;
		} while (atemp);

		a /= pow(10, number_of_digits1 - decimal1);
	}	
	if (decimal2 != 0)
	{
		do {
	     	++number_of_digits2; 
	     	btemp /= 10;
		} while (btemp);
		b /= pow(10, number_of_digits2 - decimal2);
	}

	//signo de operando 1
	if (sign1 == TRUE)
	{
		a *= -1;
	}
	//signo de operando 2
	if (sign2 == TRUE)
	{
		b *= -1;
	}
	//tipo de operacion
	switch(operationType)
		{
			case 1:
			resultado = a/b;
			break;
			case 2:
			resultado = a*b;
			break;
			case 3:
			resultado = a-b;
			break;
			case 4:
			resultado = a+b;
			break;
			default:
			break;
		}	
	
	return;
}


/***
@fn clear: Borra la pantalla de operacion y reinicia las variables para tratar la proxima operacion
@return void
***/
void clear()
{
	count1 = 0;
	count2 = 1;
	sign1 = FALSE;
	sign2 = FALSE;
	change = FALSE;
	decimal = FALSE;
	decimal1 = 0;
	decimal2 = 0;
	operationCount = 0;
	operationType = 0;
	resultado = 0;
	memset(o1, 0, SIZE);
	memset(o2, 0, SIZE);
	memset(operation, 0, SIZE*4);
	agregarImagen(white, 0, 0, screen);
	return;
}

/***
@fn resultDisplay: Muestra el resultado de la operacion en la pantalla
@return void
***/
void resultDisplay()
{
	agregarImagen(white, 0, 70, screen);
	sprintf(resultadoString, "%f", resultado);
	xyTextoFC(screen,10,70,"=",font,BLACK);
	xyTextoFC(screen,40,70,resultadoString,font,BLACK);
	cursor = 9;
	return;
}

/***
@fn guardar: Guarda cada resultado ingresado en un archivo y maneja la memoria de la calculadora
@return void
***/
void guardar()
{
	//guarda el resultado obtenido
	char buffer[SIZE*4] = {0};
	memset(dataBase, 0, sizeof(dataBase[0][0]) * 10 * SIZE*4);
	if (countMem < 10)
	{
		memoria = fopen("memoria.txt", "a");
		if (memoria != NULL)
		{
			fputs(resultadoString, memoria);
			fputc('\n', memoria);
			countMem++;
			fclose(memoria);
		}
	}
	else
	//guarda los ultimos 10 resultado en un archivo temporal
	{
		memoria = fopen("memoria.txt", "r");
		temp = fopen("temp.txt", "w");
		while(TRUE)
		{
			if (fgets(buffer, SIZE*4, memoria) == NULL)
			{
				break;
			}
			fputs(buffer, temp);
		}
		countMem = 0;
		fclose(memoria);
		fclose(temp);
		memoria = fopen("memoria.txt", "w");
		fputs(resultadoString, memoria);
		fputc('\n', memoria);
		fclose(memoria);
	}
	//guarda el contador de memoria actual en un archivo
	indice = fopen("indice.txt", "w");
	if (indice != NULL)
	{
		fprintf (indice, "%d", countMem);
	}
	fclose(indice);
	//busca los resultados del archivo memoria 
	memoria = fopen("memoria.txt", "r");
	for (int i = 9 - countMem; i < 10; i++)
	{
		fgets(dataBase[i], SIZE*4, memoria);
		dataBase[i][strcspn(dataBase[i], "\n")] = 0;
	}
	fclose(memoria);
	//busca los resultados del archivo temporal
	temp = fopen("temp.txt", "r");
	if (temp != NULL)
	{
		for (int i = 0; i < countMem + 1; ++i)
		{
			fgets(buffer, SIZE*4, temp);
		}
		for (int i = 0; i < 9 - countMem; i++)
		{
			fgets(dataBase[i], SIZE*4, temp);
			dataBase[i][strcspn(dataBase[i], "\n")] = 0;
		}
	}
	fclose(temp);
	return;
}
