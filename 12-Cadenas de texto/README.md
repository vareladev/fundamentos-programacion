# 12 Cadenas de texto (strings)

## Compilando y ejecutando ejemplos

Para ejecutar los ejemplos hacer uso de la instrucción:

```
gcc path/to/your/file/ejex-x.c -o path/to/your/file/ejecutablex-x
./ejecutablex-x
```

Ejemplo:

```
gcc /home/dei/Escritorio/ejercicios/eje1-1.c -o /home/dei/Escritorio/ejercicios/ejecutable1-1
./ejecutable1-1
```

## Ejercicios

A continuación se muestra la descripción de cada ejercicio:

### [eje12-1.c](eje12-1.c)

Declaración y asignación de una cadena de texto.

#### Ejecución.

```
#./eje12-1
palabra1: fundamentos
palabra2: fundamentos
palabra3: fundamentos
ingrese su nombre: Carlos Perez
Su nombre es: Carlos
ingrese su nombre nuevamente: Carlos Perez
Su nombre es: Carlos Perez
```

### [eje12-2.c](eje12-2.c)

Funciones útiles de la libreria string.h para el tratamiento de cadenas.

#### Ejecución.

```
#./eje12-2
La longitud de la cadena es: 11
La cadena copiada es: Un cronopio
La cadena concatenada es: Un cronopio  encuentra una flor
Las cadenas NO son iguales y  cadena1 es menor
La cadena aparece y esta en la posicion : 0x7fff7bcdf633
```

### [eje12-3.c](eje12-3.c)

Programa en lenguaje C, que solicite al usuario una cadena texto, el programa sumará las vocales de la frase ingresada y mostrará el resultado al usuario.

#### Ejecución.

```
#./eje12-3
Ingrese cadena: algoritmo   
la cantidad de vocales contenidas en la palabra son: 4
```

### [eje12-4.c](eje12-4.c)

Programa en lenguaje C, que invierta una cadena ingresada por el usuario.

#### Ejecución.

```
#./eje12-4
Ingrese cadena: programacion
la cadena invertida es: noicamargorp
```

### [eje12-5.c](eje12-5.c)

Programa en lenguaje C, que solicite al usuario una cadena texto, y se  verifique si la palabra es palindroma; Una palabra palindroma es aquella  que se lee igual de izquierda a derecha y de izquierda a derecha.

#### Ejecución.

```
#./eje12-5
Ingrese cadena: aabbcbbaa
la cadena invertida es: aabbcbbaa
La cadena es palindroma
```

### [eje12-6.c](eje12-6.c)

Hacer un programa en C, que solicite al usuario una cadena texto y dos numeros enteros y positivos A y B. Diseñar una función que reciba los datos ingresados y retorne una subcadena que inicia desde A y tiene una longitud B.

#### Ejecución.

```
#./eje12-6
Ingrese cadena: programacion
inicio de subcadena: 2
tamaño de subcadena: 5
La subcadena es: ogram
```

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))



