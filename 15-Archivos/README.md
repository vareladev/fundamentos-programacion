# 15 Archivos

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

### [eje15-1.c](eje15-1.c)

Programa en lenguaje C que abra un archivo y lea su contenido caráter por carácter para mostrarlo en la salida estándar.

#### Contenido del archivo Lacrimosa.txt:

```
Lacrimosa dies illa
Qua resurget ex favilla
Judicandus homo reus.
Huic ergo parce, Deus:
Pie Jesu Domine,
Dona eis requiem. Amen.
```

#### Ejecución.

```
#./eje15-1
Lacrimosa dies illa
Qua resurget ex favilla
Judicandus homo reus.
Huic ergo parce, Deus:
Pie Jesu Domine,
Dona eis requiem. Amen.
```

### [eje15-2.c](eje15-2.c)

Programa en lenguaje C que abra un archivo y lea su contenido linea por linea para mostrarlo en la salida estándar.

#### Contenido del archivo Lacrimosa.txt:

```
Lacrimosa dies illa
Qua resurget ex favilla
Judicandus homo reus.
Huic ergo parce, Deus:
Pie Jesu Domine,
Dona eis requiem. Amen.
```

#### Ejecución.

```
#./eje15-1
Lacrimosa dies illa
Qua resurget ex favilla
Judicandus homo reus.
Huic ergo parce, Deus:
Pie Jesu Domine,
Dona eis requiem. Amen.
```

### [eje15-3.c](eje15-3.c)

Programa en lenguaje C que pida al usuario palabras o frases para guardar en un archivo, el programa dejará de pedir hasta que el usuario ingrese "terminar"; Abrir el archivo en modo de escritura.

#### Ejecución.

```
#./eje15-3
Ingrese frase o palabra a guardar en archivo: O freunde, nicht diese tone!
Ingrese frase o palabra a guardar en archivo: Sondern last uns angenehmere
Ingrese frase o palabra a guardar en archivo: anstimmen und freudenvollere
Ingrese frase o palabra a guardar en archivo: freude! freude!
Ingrese frase o palabra a guardar en archivo: terminar
Finalizando programa...
```

#### Contenido de archivo15-3.txt:

```
O freunde, nicht diese tone!
Sondern lasst uns angenehmere
anstimmen und freudenvollere
freude! freude!
```

### [eje15-4.c](eje15-4.c)

Programa en lenguaje C que pida al usuario palabras o frases para guardar en un archivo, el programa dejará de pedir hasta que el usuario ingrese "terminar"; Abrir el archivo en modo de concatenación.

#### Ejecución.

```
#./eje15-4
Ingrese frase o palabra a guardar en archivo: O freunde, nicht diese tone!
Ingrese frase o palabra a guardar en archivo: Sondern last uns angenehmere
Ingrese frase o palabra a guardar en archivo: terminar
Finalizando programa...
```

#### Contenido de archivo15-4.txt:

```
O freunde, nicht diese tone!
Sondern last uns angenehmere
```

#### Ejecución.

```
#./eje15-4
Ingrese frase o palabra a guardar en archivo: anstimmen und freudenvollere
Ingrese frase o palabra a guardar en archivo: freude! freude!
Ingrese frase o palabra a guardar en archivo: terminar
Finalizando programa...
```

#### Contenido de archivo15-4.txt:

```
O freunde, nicht diese tone!
Sondern last uns angenehmere
anstimmen und freudenvollere
freude! freude!
```

### [eje15-5.c](eje15-5.c)

Hacer un programa en lenguaje C, que pida al usuario el nombre de un archivo de texto, lo abra, y cuente cuantas vocales tiene.

#### Ejecución.

```
#./eje15-5
archivo a abrir: Lacrimosa.txt
El archivo contiene 85 vocales.
```

### [eje15-6.c](eje15-6.c)

Hacer un programa en lenguaje C, que solicite al usuario un nùmero N, luego el programa pedirà N parejas de datos enteros para sumar, mostrar el resultado de cada operaciòn y guardar cada operaciòn en un archivo llamado "operaciones.txt" con el siguiente formato:
* A+B=C
* D+E=F
* G+H=I
* J+K=L

#### Ejecución.

```
#./eje15-6
Ingrese la cantidad de operaciones: 4
Ingrese A: 2
Ingrese B: 4
El resultado es: 6
Ingrese A: 7
Ingrese B: 8
El resultado es: 15
Ingrese A: 1
Ingrese B: 20
El resultado es: 21
Ingrese A: 6
Ingrese B: 23
El resultado es: 29
```

#### Contenido del archivo operaciones.txt:

```
2+4=6
7+8=15
1+20=21
6+23=29
```

## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))
