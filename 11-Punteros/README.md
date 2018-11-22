# 11 Punteros

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

Descripción de los ejemplos incluidos:

### [eje11-1.c](eje11-1.c)

Declaración, asignación y forma de acceso al contenido literal de un puntero y al valor al que apunta.

#### Ejecución.

```
#./eje11-1
Contenido de variable:
x = 10
Contenido de variable, luego de manipular puntero:
x = 13
```

### [eje11-2.c](eje11-2.c)

¿Como obtener la dirección de memoria asignada a un puntero? Declaración, asignación y forma de acceso a doble y triple puntero.

#### Ejecución.

```
#./eje11-2
direccion de memoria de var: 0x7fff71172f44
contenido de literal de *p: 0x400440

direccion de memoria de var: 0x7fff71172f44
contenido de *p: 0x7fff71172f44

Contenido de var: 123
contenido de var usando como medio a *p: 123

direccion de memoria de *p: 0x7fff71172f48
contenido de var usando como medio a **pp: 123

direccion de memoria de **pp: 0x7fff71172f50
contenido de var usando como medio a **pp: 123

```

### [eje11-3.c](eje11-3.c)

Funciones y punteros, paso de parámetros por valor y referencia.

#### Ejecución.

```
#./eje11-3
ingrese numero: 12
el numero ingresado elevado al cuadrado es: 144
el numero ingresado elevado al cuadrado es: 144
```

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))


