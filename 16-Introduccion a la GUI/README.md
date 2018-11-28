# 16 Introducción a GUI

## Instalando SDL 1.3

Para instalar SDL 1.3 se hace uso de las siguientes instrucciones:

```
sudo apt-get update
sudo apt-get install libsdl1.2-dev
sudo apt-get install libsdl-image1.2
sudo apt-get install libsdl-image1.2-dev
sudo apt-get install libsdl-ttf2.0-dev
```

## Compilando y ejecutando ejemplos

Para ejecutar los ejemplos hacer uso de la instrucción:

```
gcc path/to/your/file/ejex-x.c -o path/to/your/file/ejecutablex-x -lSDL -lSDL_image -lSDL_ttf
./ejecutablex-x
```

Ejemplo:

```
gcc /home/dei/Escritorio/ejercicios/eje1-1.c -o /home/dei/Escritorio/ejercicios/ejecutable1-1  -lSDL -lSDL_image -lSDL_ttf
./ejecutable1-1
```

## Ejercicios

Descripción de los ejemplos incluidos:

### [eje16-1.c](eje16-1.c)

Levantando una ventana grafica utilizando la libreria SDL 1.2.

#### Ejecución.



### [eje16-2.c](eje16-2.c)

LLevantando una ventana grafica utilizando la libreria SDL 1.2: configurando lienzo de trabajo.

#### Ejecución.



### [eje16-3.c](eje16-3.c)

Levantando una ventana grafica utilizando la libreria SDL 1.2: cargando y mostrando imagenes.

#### Ejecución.



### [eje16-4.c](eje16-4.c)

Levantando una ventana grafica utilizando la libreria SDL 1.2: escribiendo texto en una ventana gráfica.

#### Ejecución.



### [eje16-5.c](eje16-5.c)

Levantando una ventana grafica utilizando la libreria SDL 1.2: interactuando  con el mouse.

#### Ejecución.



## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))
