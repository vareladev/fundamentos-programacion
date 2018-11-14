# 20 Introducción a programación multiproceso

## Ejercicios

A continuación se muestra la descripción de cada ejercicio:

### [eje20-1a.c](eje20-1a.c)

Hacer un programa en lenguaje C que cree un hilo (pthread), Este hilo estará encargado de contar de 1 a 5 con intervalos de tiempo de 1 segundo.

### [eje20-1b.c](eje20-1b.c)

Hacer un programa en lenguaje C que cree un hilo (pthread), Este hilo estará encargado de contar de 1 a 5 con intervalos de tiempo de 1 segundo, Utilice pthread_join para esperar a que un hilo finalice su trabajo.

### [eje20-2a.c](eje20-2a.c)

Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo estará encargado de contar de 1 a 5, de 6 a 10 y de 11  15 respectivamente con intervalos de tiempo de 1 segundo entre cada cuenta.

### [eje20-2b.c](eje20-2b.c)

Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo estará encargado de contar de 1 a 5, de 6 a 10 y de 11 a 15 respectivamente con intervalos de tiempo de 1 segundo entre cada cuenta. la cuenta debe ser de tal manera que se muestre en pantalla la secuencia ordenadada de 1 a 15.

### [eje20-2c.c](eje20-2c.c)
	
Hacer un programa en lenguaje C que cree 3 hilos (pthread), cada hilo estará encargado de contar de 1 a 5, de 6 a 10 y de 11  15 respectivamente con intervalos de tiempo de 1 segundo entre cada cuenta. El programa utilizará una sola función para los hilos con un parámetro de entrada, que representará el inicio de la cuenta que debe realizar el hilo.	

### [eje20-3.c](eje20-3.c)

Crear un programa en lenguaje C que genere un número aleatorio entre 1 y 1000, el usuario deberá adivinar cual número es, para ello el programa facilitará pistas e informará al usuario si el número ingresado es menor o mayor al número oculto. Al final del juego se debe indicar al usuario cuanto tiempo tardó en encontrar la respuesta correcta.

## Ejecutando ejemplos

Para ejecutar los ejemplos hacer uso de la instrucción:

```
gcc path/to/your/file/ejex-x.c -o path/to/your/file/ejecutablex-x -lpthread
./ejecutablex-x
```

Ejemplo:

```
gcc /home/dei/Escritorio/ejercicios/eje1-1.c -o /home/dei/Escritorio/ejercicios/ejecutable1-1 -lpthread
./ejecutable1-1
```

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))
