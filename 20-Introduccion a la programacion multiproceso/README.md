# 20 Introducción a programación multiproceso

## Compilando y ejecutando ejemplos

Para ejecutar los ejemplos hacer uso de la instrucción:

```
gcc path/to/your/file/ejex-x.c -o path/to/your/file/ejecutablex-x -lpthread
./ejecutablex-x
```

Ejemplo:

```
gcc /home/dei/Escritorio/ejercicios/eje1-1.c -o /home/dei/Escritorio/ejercicios/ejecutable1-1  -lpthread
./ejecutable1-1
```

## Ejercicios

A continuación se muestra la descripción de cada ejercicio:

### [eje20-1a.c](eje20-1a.c)

Hacer un programa en lenguaje C que cree un hilo (pthread), Este hilo estará encargado de contar de 1 a 5 con intervalos de tiempo de 1 segundo.

#### Ejecución.

```
#./eje20-1a
```

Nota: El programa termina demasiado rápido y no da tiempo para que el hilo pueda realizar su trabajo.

### [eje20-1b.c](eje20-1b.c)

Hacer un programa en lenguaje C que cree un hilo (pthread), Este hilo estará encargado de contar de 1 a 5 con intervalos de tiempo de 1 segundo, Utilice pthread_join para esperar a que un hilo finalice su trabajo.

#### Ejecución.

```
#./eje20-1b
Hilo 1: Realizando tarea: 
1
2
3
4
5
El hilo finalizó su tarea.
```

### [eje20-2a.c](eje20-2a.c)

Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo estará encargado de contar de 1 a 5, de 6 a 10 y de 11  15 respectivamente con intervalos de tiempo de 1 segundo entre cada cuenta.

#### Ejecución.

```
#./eje20-2a
Hilo 1: Realizando tarea: 
Hilo 2: Realizando tarea: 
Hilo 3: Realizando tarea: 
1
11
6
12
7
2
3
13
8
14
4
9
15
5
10
Los hilos finalizaron su tarea.
```

### [eje20-2b.c](eje20-2b.c)

Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo estará encargado de contar de 1 a 5, de 6 a 10 y de 11 a 15 respectivamente con intervalos de tiempo de 1 segundo entre cada cuenta. la cuenta debe ser de tal manera que se muestre en pantalla la secuencia ordenadada de 1 a 15.

#### Ejecución.

```
#./eje20-2b
Hilo 1: Realizando tarea: 
1
2
3
4
5
Hilo 2: Realizando tarea: 
6
7
8
9
10
Hilo 3: Realizando tarea: 
11
12
13
14
15
Los hilos finalizaron su tarea.
```

### [eje20-2c.c](eje20-2c.c)
	
Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo estará encargado de contar de 1 a 5, de 6 a 10 y de 11  15 respectivamente con intervalos de tiempo de 1 segundo entre cada cuenta. El programa utilizará una sola función para los hilos con un parámetro de entrada, que representará el inicio de la cuenta que debe realizar el hilo.	

#### Ejecución.

```
#./eje20-2c
Hilo 1: Realizando tarea: 
1
2
3
4
5
Hilo 2: Realizando tarea: 
6
7
8
9
10
Hilo 3: Realizando tarea: 
11
12
13
14
15
Los hilos finalizaron su tarea.
```

### [eje20-3.c](eje20-3.c)

Crear un programa en lenguaje C que genere un número aleatorio entre 1 y 1000, el usuario deberá adivinar cual número es, para ello el programa facilitará pistas e informará al usuario si el número ingresado es menor o mayor al número oculto. Al final del juego se debe indicar al usuario cuanto tiempo tardó en encontrar la respuesta correcta.

#### Ejecución.

```
#./eje20-2
Ingrese numero: 500
el número oculto es menor
Ingrese numero: 250
el número oculto es menor
Ingrese numero: 100
¡Bien! el número oculto es: 100
has tardado: 10.00 segundos en encontrar la respuesta.
```

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))
