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

![eje16-1](https://user-images.githubusercontent.com/36117314/49172258-27547580-f306-11e8-84e2-ef92bb15f1a0.png)


### [eje16-2.c](eje16-2.c)

LLevantando una ventana grafica utilizando la libreria SDL 1.2: configurando lienzo de trabajo.

#### Ejecución.

![eje16-2](https://user-images.githubusercontent.com/36117314/49172260-27547580-f306-11e8-9eeb-1d25b49f6dbe.png)


### [eje16-3.c](eje16-3.c)

Levantando una ventana grafica utilizando la libreria SDL 1.2: cargando y mostrando imagenes.

#### Ejecución.

![eje16-3](https://user-images.githubusercontent.com/36117314/49172262-27ed0c00-f306-11e8-9b3d-0e08661dc1d6.png)


### [eje16-4.c](eje16-4.c)

Levantando una ventana grafica utilizando la libreria SDL 1.2: escribiendo texto en una ventana gráfica.

#### Ejecución.

![eje16-4](https://user-images.githubusercontent.com/36117314/49172263-2885a280-f306-11e8-9c31-f45294d35efd.png)


### [eje16-5.c](eje16-5.c)

Levantando una ventana grafica utilizando la libreria SDL 1.2: interactuando  con el mouse.

#### Ejecución.

![eje16-5](https://user-images.githubusercontent.com/36117314/49172264-2885a280-f306-11e8-913a-0c6d06be2082.png)


## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))
