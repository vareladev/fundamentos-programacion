# 18 Estructuras de datos

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

### [eje18-1.c](eje18-1.c)

Crear un programa en lenguaje C que reciba por medio de una estructura de datos  la fecha de nacimiento del usuario.

#### Ejecución.

```
#./eje18-1
Ingrese la fecha de su nacimiento: 
Ingrese el dia: 2
Ingrese el mes: 8
Ingrese el año: 1994
```

### [eje18-2.c](eje18-2.c)

Crear un programa en lenguaje C que reciba por medio de una estructura de datos el nombre de una persona, su dui y la fecha de nacimiento del usuario. Para la .fecha de nacimiento del usuario basarse en la estructura creada en el ejercicio anterior.

#### Ejecución.

```
#./eje18-2
Ingrese su DUI: 12345678-9
Ingrese su nombre: Juan Perez
Ingrese la fecha de su nacimiento: 
Ingrese el dia: 23
Ingrese el mes: 11
Ingrese el año: 2000
Los datos ingresados son: 
nombre: Juan Perez
DUI: 12345678-9
Fecha nacimiento: 23/11/2000
```

### [eje18-3.c](eje18-3.c)

Crear un programa en lenguaje C que solicite al usuario dos puntos del plano cartesiano. Luego, el programa procederá a calcular cual punto esta mas cerca del origen (0,0). Para guardar las coordenadas 'x' y 'y' de cada punto utilizar  estructuras de datos.

#### Ejecución.

```
# gcc eje18-3.c -o eje -lm
# ./eje
Punto A: 
Ingrese x: 2
Ingrese y: 3
Punto B: 
Ingrese x: 4
Ingrese y: 5
El punto A(2,3) esta más cerca del origen.
```

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))
