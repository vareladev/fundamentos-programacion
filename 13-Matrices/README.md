# 13 Matrices

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

### [eje13-1.c](eje13-1.c)

Declaración y asignación de una matriz.

#### Ejecución.

```
#./eje13-1
Mostrando los valores de una matriz version 1:
Posicion (i,j)=0
Posicion (i,j)=1
Posicion (i,j)=2
Posicion (i,j)=3
Posicion (i,j)=4
Posicion (i,j)=5
Posicion (i,j)=6
Posicion (i,j)=7
Posicion (i,j)=8

Mostrando los valores de una matriz version 2:
Posicion (0,0)=0
Posicion (0,1)=1
Posicion (0,2)=2
Posicion (1,0)=3
Posicion (1,1)=4
Posicion (1,2)=5
Posicion (2,0)=6
Posicion (2,1)=7
Posicion (2,2)=8

Mostrando los valores de una matriz version 3:
012
345
678

Mostrando los valores de una matriz version 4:
| 0 | 1 | 2 |
| 3 | 4 | 5 |
| 6 | 7 | 8 |
```

### [eje13-2.c](eje13-2.c)

Programa en lenguaje C que pida al usuario dos matrices A y B de dimensión NxN cada una, y luego muestre una matriz C con el resultado de realizar la suma A+B. N debe ser solicitado al usuario. la suma de dos matrices es la matriz que tiene en la posición fila i y columna j la suma de los elementos  de la misma posición en las matrices que sumamos, estas deben ser de la misma dimensión.

#### Ejecución.

```
#./eje13-2
Ingrese el tamaño de las matrices: 3
Ingrese valores de la matriz A:
Ingrese A[0][0]: 1
Ingrese A[0][1]: 2
Ingrese A[0][2]: 3
Ingrese A[1][0]: 4
Ingrese A[1][1]: 5
Ingrese A[1][2]: 6
Ingrese A[2][0]: 7
Ingrese A[2][1]: 8
Ingrese A[2][2]: 9
Ingrese valores de la matriz B:
Ingrese B[0][0]: 2
Ingrese B[0][1]: 2
Ingrese B[0][2]: 2
Ingrese B[1][0]: 2
Ingrese B[1][1]: 2
Ingrese B[1][2]: 2
Ingrese B[2][0]: 2
Ingrese B[2][1]: 2
Ingrese B[2][2]: 2
Mostrando los valores de una matriz version 1:

Mostrando el resultado de operar A+B::
| 3 | 4 | 5 |
| 6 | 7 | 8 |
| 9 | 10 | 11 |
```

### [eje13-3.c](eje13-3.c)

Programa en lenguaje C que pida al usuario una matriz A de dimensión NxN, y luego, muestre la matriz transpuesta de A. N debe ser solicitado al usuario. se llama matriz traspuesta de A a la matriz que se obtiene cambiando ordenadamente las filas por las columnas.

#### Ejecución.

```
#./eje13-3
Ingrese el tamaño de la matriz: 3
Ingrese valores de la matriz A:
Ingrese A[0][0]: 1
Ingrese A[0][1]: 2
Ingrese A[0][2]: 3
Ingrese A[1][0]: 4
Ingrese A[1][1]: 5
Ingrese A[1][2]: 6
Ingrese A[2][0]: 7
Ingrese A[2][1]: 8
Ingrese A[2][2]: 9

Matriz A transpuesta:
| 1 | 4 | 7 |
| 2 | 5 | 8 |
| 3 | 6 | 9 |
```

### [eje13-4.c](eje13-4.c)

Programa en lenguaje C que pida al usuario una matriz A de dimensión NxN, y luego muestre la suma de los elementos que se encuentran en una pocisión par dentro de la matriz

#### Ejecución.

```
#./eje13-4
Ingrese el tamaño de las matriz: 4
Ingrese valores de la matriz A:
Ingrese A[0][0]: 1
Ingrese A[0][1]: 2
Ingrese A[0][2]: 3
Ingrese A[0][3]: 4
Ingrese A[1][0]: 1
Ingrese A[1][1]: 2
Ingrese A[1][2]: 3
Ingrese A[1][3]: 4
Ingrese A[2][0]: 1
Ingrese A[2][1]: 2
Ingrese A[2][2]: 3
Ingrese A[2][3]: 4
Ingrese A[3][0]: 1
Ingrese A[3][1]: 2
Ingrese A[3][2]: 3
Ingrese A[3][3]: 4

La suma de los elementos en posición par es:20
```

### [eje13-5.c](eje13-5.c)

Programa en lenguaje C que pida al usuario una matriz A de dimensión NxN, y luego muestre cuantos numeros pares y cuantos numeros impares contiene la matriz, N debe ser solicitado al usuario también.

#### Ejecución.

```
#./eje13-5
Ingrese el tamaño de las matriz: 3
Ingrese valores de la matriz A:
Ingrese A[0][0]: 2
Ingrese A[0][1]: 5
Ingrese A[0][2]: 12
Ingrese A[1][0]: 8
Ingrese A[1][1]: 5
Ingrese A[1][2]: 2
Ingrese A[2][0]: 8
Ingrese A[2][1]: 4
Ingrese A[2][2]: 2
Total de pares: 7; Total de impares: 2
```

### [eje13-6.c](eje13-6.c)

Crear un programa en lenguaje C que cree una factura, para ello solicitará al usuario una lista de productos, el precio unitario de cada producto y la cantidad comprada por el cliente, el programa luego mostrará el detalle delos datos ingresados, se pueden ingresar hasta un máximo de 10 productos, es necesario utilizar una matriz de cadenas de texto.

#### Ejecución.

```
#./eje13-6
ingrese nombre del producto: Baterias AA
¿Cuantas unidades lleva?: 4
¿Cuantas vale cada unidad?: $1 
¿Desea ingresar otro producto? (si/no): si
ingrese nombre del producto: Cepillo
¿Cuantas unidades lleva?: 1
¿Cuantas vale cada unidad?: $7.50
¿Desea ingresar otro producto? (si/no): si
ingrese nombre del producto: lapicero
¿Cuantas unidades lleva?: 3
¿Cuantas vale cada unidad?: $0.75
¿Desea ingresar otro producto? (si/no): no


----------------  FACTURA  -----------------
 N | producto		| precio | total
--------------------------------------------
  4  | Baterias		| $1 	| $4.00	
  1  | Cepillo		| $7.50 	| $7.50	
  3  | lapicero		| $0.75 	| $2.25	
--------------------------------------------
 TOTAL				   $13.75
```

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))
