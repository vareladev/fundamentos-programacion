# 1 Sistema decimal, binario y hexadecimal

## 1.1 Notación de posición

La notación de posición es un modo de escritura numérica, donde cada símbolo posee un valor diferente (aunque sea el mismo símbolo), con símbolo se hace referencia a los caracteres utilizados para describir el sistema numérico utilizado; En el caso del sistema decimal se utilizan 10 símbolos: 1, 2, 3, 4, 5, 6, 7, 8, 9, 0. Cada símbolo (de ahora en adelante dígito) posee un valor diferente que depende de su posición relativa. Por ejemplo, en el número "555", cada dígito a pesar que es el mismo, no vale igual, el primer cinco vale quinientos, el segundo cincuenta y el tercer cinco respectivamente.

### ¿Cómo saber cuánto vale cada número?

En la notación de posición se considera una base, esta base depende del sistema en el que se esté trabajando, para el caso del sistema decimal, la base es: 10^(n-1) siendo "n" la posición que utiliza el número tomando como referencia de derecha a izquierda, ¿Por qué la base es 10? Por qué son 10 dígitos los disponibles para formar cada secuencia de números; Así, 10^0 representa la base de la primera posición relativa, 10^1 la base de la segunda posición relativa, y así sucesivamente... 
Ahora, basta con multiplicar cada dígito con su base para poder saber cuánto vale cada número según su posición relativa.

### Ejemplo 1-1

Descomponer con notación de posición el siguiente número: 1234

| Número | 1 | 2 | 3 | 4 |
|:---:|:---:|:---:|:---:|:---:|
| Notación de posición   | 10^3 | 10^2 | 10^1 | 10^0 |
| Multiplicando | 1*(10^3) | 2*(10^2) | 3*(10^1) | 4*(10^0) |
| Resultado | 1000 | 200 | 30 | 4 |

### Ejemplo 1-2

Descomponer con notación de posición el siguiente número: 10240

| Número | 1 | 0 | 2 | 4 | 0 |
|:---:|:---:|:---:|:---:|:---:|:---:|
| Notación de posición   | 10^4 | 10^3 | 10^2 | 10^1 | 10^0 |
| Multiplicando | 1*(10^4) | 0*(10^3) | 2*(10^2) | 4*(10^1) | 0*(10^0) |
| Resultado | 10000 | 0 | 200 | 40 | 0 |

### Ejemplo 1-3

Describir los números decimales en notación de posición tiene la misma lógica, solo que en lugar de ir aumentando el exponente de la base, se va disminuyendo; Descomponer con notación de posición el siguiente número: 0.3572

| Número | 0 | 3 | 5 | 7 | 2 |
|:---:|:---:|:---:|:---:|:---:|:---:|
| Notación de posición   | 10^0 | 10^-1 | 10^-2 | 10^-3 | 10^-4 |
| Multiplicando | 0*(10^0) | 3*(10^-1) | 5*(10^-2) | 7*(10^-3) | 2*(10^-4) |
| Resultado | 0 | 0.3 | 0.05 | 0.007 | 0.0002 |


## 1.2 Sistema binario.

En informática, por cuestiones técnicas con respecto al tratamiento de los datos, se optó por un sistema numérico base dos: El sistema binario, este sistema utiliza dos símbolos: {1, 0} y al igual que sistema decimal, utiliza la notación posicional para describir sus secuencias numéricas. la base del sistema binario es: 2^(n-1) siendo "n" la posición que utiliza el número tomando como referencia de derecha a izquierda, ¿Por qué la base es 2? Por la misma razón que en el sistema decimal es 10, en el sistema binario se dispone de 2 dígitos para formar cada secuencia de numeros; Así, 2^0 representa la base de la primera posición relativa, 10^1 la base de la segunda posición relativa, y así sucesivamente... Los residuos generados en cada división sucesiva forman el número binario, el último residuo generado es el dígito menos significativo del número en formato binario, y el primer residuo generado es el bit más significativo.

### Ejemplo 1-4

Descomponer con notación de posición el siguiente número binario: 10011101

| Número | 1 | 0 | 0 | 1 | 1 | 1 | 0 | 1 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Notación de posición   | 2^7 | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |
| Multiplicando | 1*(2^7) | 0*(2^6) | 0*(2^5) | 1*(2^4) | 1*(2^3) | 1*(2^2) | 0*(2^1) | 1*(2^0) |
| Resultado | 128 | 0 | 0 | 16 | 8 | 4 | 0 | 1 |


### Convirtiendo números en formato decimal a binario:

Un método mecánico para convertir números en sistema decimal a binario es el proceso de la división sucesiva entre dos, Por ejemplo, para convertir a binario el número decimal 100, se comienza a dividir el número objetivo entre 2, luego, cada cociente resultante se divide entre 2 hasta que se obtiene un cociente cuya parte entera es 1. Luego, el último residuo calculado es el dígito más significativo del número convertido al binario, y el primer residuo calculado, el dígito menos significativo.

### Ejemplo 1-5

Convertir el número decimal 100 a binario.

![convertir-decimal-binario](https://user-images.githubusercontent.com/36117314/46428425-2a195c80-c701-11e8-9857-375eba917a9b.png)

Ahora, tomando como dígito más significativo el último residuo calculado y dígito menos significativo el primer residuo calculado, se obtiene que el número 100 convertido a binario es: **1100100**


### Ejemplo 1-6

Convertir el número decimal 142 a binario.

![convertir-decimal-binario-2](https://user-images.githubusercontent.com/36117314/46429239-2981c580-c703-11e8-926c-b4103b29f0d9.png)

el resultado de la conversión: **10001110**

### Convirtiendo números en formato binario a decimal:

La conversión de números expresados en sistema binario a decimal exige la comprensión de la notación por posición, característica de ambos sistemas numéricos. Los pasos a considerar para convertir un número en sistema binario a decimal son los siguientes:
- Obtener la posición relativa de cada dígito.
- Obtener el valor de la base, en este caso al ser sistema binario, la base es 2^(n-1)
- Multiplicar el valor de base obtenida en el paso anterior por el dígito de la posición relativa.
- Sumar cada uno de los resultados.

### Ejemplo 1-7 

Convertir el número binario 110101 a decimal.

| Número | 1 | 1 | 0 | 1 | 0 | 1 | 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Posición   | 6 | 5 | 4 | 3 | 2 | 1 |
| Notación de posición   | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |
| Multiplicando | 1*(2^5) | 1*(2^4) | 0*(2^3) | 1*(2^2) | 0*(2^1) | 1*(2^0) |
| Resultado | 32 | 16 | 0 | 4 | 0 | 1 |

el resultado de la conversión: **53**

### Ejemplo 1-8

Tomando como base el resultado obtenido en el ejemplo 1-6; Convertir el número binario 10001110 a decimal.

| Número | 1 | 0 | 0 | 0 | 1 | 1 | 1 | 0 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Posición   | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 |
| Notación de posición   | 2^7 | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |
| Multiplicando | 1*(2^7) | 0*(2^6) | 0*(2^5) | 0*(2^4) | 1*(2^3) | 1*(2^2) | 1*(2^1) | 0*(2^0) |
| Resultado | 128 | 0 | 0 | 0 | 8 | 4 | 2 | 0 |

el resultado de la conversión: **142**

## 1.3 Sistema hexadecimal.

Se sabe que en informática se utiliza el sistema binario para poder desarrollar todo tipo de operaciones numéricas, trabajar con este sistema de numeración puede resultar trabajoso, ya que como se ha visto convertir un número definido sistema decimal a binario hace que la cantidad de dígitos necesario para representarlo aumente; para dar solución a este problema, se ha establecido el uso del sistema hexadecimal como opción, este sistema utiliza dieciséis símbolos: {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}. Actualmente el sistema hexadecimal es muy utilizado en el procesamiento de datos, y sus dos ventajas principales son: 
- Simplificación de la representación de números decimales y binarios.
- La conversión del sistema binario a hexadecimal es muy sencilla.
Para realizar la conversión de binario a hexadecimal, se utilizan los siguientes pasos:
- Hacer grupos de 4 dígitos tomando como base el número binario a convertir, este proceso se inicia desde la derecha; Si al final hacen falta dígitos para formar grupo, se agregan ceros a la izquierda hasta tener suficientes dígitos para formar un grupo de 4 dígitos.
- Buscar cada grupo en la siguiente tabla y verificar el equivalente hexadecimal:

| grupo binario | Dígito hexadecimal |
|:---:|:---:|
| 0000 | 0 |
| 0001 | 1 |
| 0010 | 2 |
| 0011 | 3 |
| 0100 | 4 |
| 0101 | 5 |
| 0110 | 6 |
| 0111 | 7 |
| 1000 | 8 |
| 1001 | 9 |
| 1010 | A |
| 1011 | B |
| 1100 | C |
| 1101 | D |
| 1110 | E |
| 1111 | F |

### Ejemplo 1-9

Convertir el número binario 110111010 a hexadecimal. 

| grupos | 1 | 1011 | 1010 |
|:---:|:---:|:---:|:---:|
| completando grupo | 0001 | 1011 | 1010 |
| Resultado | 1 | B | A |

el resultado de la conversión: **1BA**

### Ejemplo 1-10

Convertir el número binario 1101111010111011110101 a hexadecimal. 

| grupos | 11 | 0111 | 1010 | 1110 | 1111 | 0101 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| completando grupo | 0011 | 0111 | 1010 | 1110 | 1111 | 0101 |
| Resultado | 3 | 7 | A | E | F | 5 |

el resultado de la conversión: **37AEF5**

## 1.4 Aplicación del hexadecimal.

Las aplicaciones del sistema hexadecimal en informática son muchas, uno de los ejemplos más gráficos que muestran las bondades del uso de este sistema se encuentra en la definición de las direcciones de red IPv6.  ([Leer más sobre IPv6…]( http://www.ipv6.es/es-ES/introduccion/Paginas/QueesIPv6.aspx)). Las direcciones IPv6 se expresan como un número binario de 128 dígitos, agrupados en bloques de 16 dígitos, cada bloque se separa por un dos puntos (:); La siguiente secuencia representa una dirección IPv6 en sistema binario:

```
0010000000000001 : 0000110110111000 : 
1010110000010000 : 1111111000000001 : 
0000000000000000 : 0000000000000000 : 
0000000000000000 : 0000000000000001
```

Es evidente que intentar expresar esta secuencia de dígitos, resultaría extenuante; Por esta razón, se decidió tomar como medida, representar las direcciones IPv6 en formato hexadecimal, realizando la conversión con el método antes visto, se obtiene la siguiente expresión:

```
2001:0DB8:AC10:FE01:0000:0000:0000:0001
```

El resultado anterior, aunque sigue siendo una expresión bastante larga, facilita en gran medida la lectura de una dirección IPv6.


## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))


