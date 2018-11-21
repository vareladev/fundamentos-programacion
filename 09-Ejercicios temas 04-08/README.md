# 9 Ejercicios temas 04-08

## Ejercicios

A continuación se muestra la descripción de cada ejercicio:

### [eje1.02.c](eje1.02.c)

Hacer un programa en C que solicite al usuario un valor que represente dólares y los convierta a su equivalente en euros. Asuma cambio de móneda: 1 euro equivale a 1.16 dólares estadounidense.

#### Ejecución.

```
#./eje1.02
Ingrese dólares: $35.50
El valor en euros es: €30.60
```

### [eje1.03.c](eje1.03.c)

Escriba un programa en lenguaje C, que pida al usuario un dato que represente una temperatura X expresada en grados Celsius y calcule el equivalente en grados Fahrenheit.

#### Ejecución.

```
#./eje1.03
Ingrese temperatura: 17.5
El valor equivalente en grados Fahrenheit es: 63.50
```

### [eje1.04.c](eje1.04.c)

Hacer un programa en lenguaje C que solicite al usuario la capacidad total (en galones) de una cisterna, también, deberá solicitar cuánta agua (en galones)contiene actualmente la cisterna; El programa deberá calcular cuánta agua hace falta para terminar de llenar la cisterna.

#### Ejecución.

```
#./eje1.04
Ingrese la capacidad de la cisterna: 55
Ingrese cuantos galones tiene la cisterna actualmente: 32.3
hacen falta 22.70 galones para llenar la cisterna
```

### [eje1.05.c](eje1.05.c)

Un elevador tiene una capacidad M de kilogramos. Hacer un programa en lenguaje C que pida al usuario la capacidad M del elevador y el peso de 5 personas en libras, el programa deberá convertir el peso de las personas al equivalente en kilogramos y verificar si se sobrepasa el límite de seguridad permitido.

#### Ejecución.

```
#./eje1.05
Ingrese la capacidad del elevador: 350
Ingrese el peso de la persona 1: 43.4
Ingrese el peso de la persona 2: 55.2
Ingrese el peso de la persona 3: 78.7 
Ingrese el peso de la persona 4: 40.1
Ingrese el peso de la persona 5: 64.8
Es seguro usar el elevador, soporta el peso de las 5 personas
```

### [eje1.06.c](eje1.06.c)

Construir un programa que solicite del teclado un carácter que corresponda con la etapa de vida de una persona y luego muestre un mensaje basándose en la siguiente tabla:

* P:	Primera Infancia (0-5 años).

* I:	Infancia (6 - 11 años).

* A:	Adolescencia (12 - 18 años).

* J:	Juventud (14 - 26 años).

* D:	Adultez (27- 59 años).

* V:	Persona Mayor (60 años o más) envejecimiento y vejez.

* otro:	Error, entrada inválida.

#### Ejecución.

```
#./eje1.06
Ingrese descriptor: D
Adultez (27- 59 años).
```

```
#./eje1.06
Ingrese descriptor: I
Infancia (6 - 11 años).
```

### [eje1.07.c](eje1.07.c)

Escribir un programa que, dado un número real cualquiera, encuentre su valor absoluto. El valor absoluto de un número x es igual a x si x > 0, y a -x si x es menor o igual a 0. 

#### Ejecución.

```
#./eje1.07
Ingrese número: -4
Valor absoluto: 4.00
```

```
#./eje1.07
Ingrese número: 4
Valor absoluto: 4.00
```

### [eje1.08.c](eje1.08.c)

Escribir un programa en lenguaje C que pida por el teclado el radio de un circunferencia, y calcule el área de esta, si el radio ingresado es negativo, mostrará el mensaje: "ERROR: El radio debe ser mayor que cero."

#### Ejecución.

```
#./eje1.08
Ingrese radio: 2.07
El área de la circunferencia es: 13.461441
```

### [eje1.09.c](eje1.09.c)

Escribir un programa que, dado un número real cualquiera, encuentre su valor absoluto. El valor absoluto de un número x es igual a x si x > 0, y a -x si x es menor o igual a 0. El programa preguntará por número hasta que el usuario ingrese 0.

#### Ejecución.

```
#./eje1.09
Ingrese número: 5
Valor absoluto: 5.00
Ingrese número: -8
Valor absoluto: 8.00
Ingrese número: 34
Valor absoluto: 34.00
Ingrese número: -675
Valor absoluto: 675.00
Ingrese número: 0
finalizando programa...
```

### [eje1.10.c](eje1.10.c)

En un videoclub se ofrece la promoción de llevarse tres películas por el precio de las dos más baratas. Haga un programa que, dados los tres precios de las películas, determine la cantidad a pagar. 

#### Ejecución.

```
#./eje1.10
Ingrese precio de la pelicula 1: 34.2
Ingrese precio de la pelicula 2: 22.50
Ingrese precio de la pelicula 3: 15.99
Total a pagar: $38.49
```

### [eje1.11.c](eje1.11.c)

Crear un programa en C, que pida al usuario 3 números que representen los coeficientes reales A, B y C, de una ecuación cuadrática, y calcule si ésta ecuación tiene 1 raíz, dos raíces o raíz indefinida.

#### Ejecución.

```
#./eje1.11
Ingrese A: 1
Ingrese B: 4
Ingrese C: 1
la ecuación cuadrática tiene dos soluciónes reales
```

```
#./eje1.11
Ingrese A: 2
Ingrese B: 0
Ingrese C: 2
la ecuación cuadrática tiene dos soluciónes compĺejas
```

```
#./eje1.11
Ingrese A: 1
Ingrese B: 2
Ingrese C: 1
la ecuación cuadrática tiene una solución
```

### [eje1.12.c](eje1.12.c)

Hacer un programa en C que solicite al usuario el valor de dos resistencias eléctricas (valor dado en ohms), la tarea del programa es calcular la resistencia equivalente. 

#### Ejecución.

```
#./eje1.12
Ingrese R1: 50
Ingrese R2: 110
La resistencia equivalente es: 34.38 ohms
```

### [eje1.13.c](eje1.13.c)

Escribir un programa en C que solicite al usuario la cantidad de energía eléctrica consumida en un periodo de tiempo y a continuación el programa debe calcular el valor de la factura a pagar bajo el siguiente criterio:
* entre 0 y 50 unidades = unidades * 0.50
* entre 50 y 100 unidades = unidades * 0.75
* entre 100 y 150 unidades = unidades * 1.25
* arriba de 150 unidades = unidades * 1.50
Además, es necesario agregar a la factura un cargo del 20% al resultado de la operación anterior.

#### Ejecución.

```
#./eje1.13
Ingrese la cantidad de energía eléctrica consumida: 75.3
El total a pagar es: 67.77
```

### [eje1.14.c](eje1.14.c)

Crear un programa en lenguaje C que solicite al usuario un número mayor que 9 y calcule cual es el primer y el último dígito. 

#### Ejecución.

```
#./eje1.14
Ingrese número: 12345
Primer dígito: 1, Último dígito: 5
```

### [eje2.1.c](eje2.1.c)

Hacer un programa en C que dado un número N impar y positivo (validar que el dato ingresado cumpla con las características solicitadas), Muestre al usuario la siguiente forma:

#### Ejecución.

```
#./eje2.1
Ingrese N: 3
++++++
++__++
+____+
+____+
++__++
++++++
```

```
#./eje2.1
Ingrese N: 7
++++++++++++++
++++++__++++++
+++++____+++++
++++______++++
+++________+++
++__________++
+____________+
+____________+
++__________++
+++________+++
++++______++++
+++++____+++++
++++++__++++++
++++++++++++++
```

### [eje2.2.c](eje2.2.c)

Considere siguiente proceso repetitivo para un número entero dado: Si el número es 1, el proceso termina. De lo contrario, si es par se divide entre 2, y si es impar se multiplica por 3 y se le suma 1. El proceso termina hasta llegar a 1. A esta sucesión se le llama conjetura de Collatz. Desarrolle un programa en C que calcule la conjetura de Collatz.

#### Ejecución.

```
#./eje2.2
Ingrese N: 10
Conjetura de Collatz:
10, 5, 16, 8, 4, 2, 1, r
```

```
#./eje2.2
Ingrese N: 17
Conjetura de Collatz:
17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1, 
```

### [eje2.3.c](eje2.3.c)

Cree un programa en C que dada la cantidad de dinero S, el interés I y el número en años N que han pasado desde que el cliente puso su dinero a plazo fijo en intervalos de un año, calcule y muestre el saldo de la cuenta, además, si la cuenta fue cerrada se deberá indicar.

#### Ejecución.

```
#./eje2.3
Ingrese la cantidad S: $5000
Ingrese interés I: 10
Ingrese el tiempo en años: 5
	Año 1: $5500.00
	Año 2: $6050.00
	Año 3: $6655.00
	Año 4: $7320.50
	Año 5: $8052.55
```

### [eje2.4.c](eje2.4.c)

Crear un programa que dado un número N, calcule N elementos de la serie de fibonacci.

#### Ejecución.

```
#./eje2.4
Ingrese la cantidad N: 9
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
```

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

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))

