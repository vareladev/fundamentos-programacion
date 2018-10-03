# 1 Sistema decimal, binario y hexadecimal

## Notación de posición

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


## Sistema binario.

En informática, por cuestiones técnicas con respecto al tratamiento de los datos, se optó por un sistema numérico base dos: El sistema binario, este sistema utiliza dos símbolos: {1, 0} y al igual que sistema decimal, utiliza la notación posicional para describir sus secuencias numéricas. la base del sistema binario es: 2^(n-1) siendo "n" la posición que utiliza el número tomando como referencia de derecha a izquierda, ¿Por qué la base es 2? Por la misma razón que en el sistema decimal es 10, en el sistema binario se dispone de 2 dígitos para formar cada secuencia de numeros; Así, 2^0 representa la base de la primera posición relativa, 10^1 la base de la segunda posición relativa, y así sucesivamente... Los residuos generados en cada división sucesiva forman el número binario, el último residuo generado es el dígito menos significativo del número en formato binario, y el primer residuo generado es el bit más significativo.

### Ejemplo 1-4

Descomponer con notación de posición el siguiente número binario: 10011101

| Número | 1 | 0 | 0 | 1 | 1 | 1 | 0 | 1 |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Notación de posición   | 2^7 | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |
| Multiplicando | 1*(2^7) | 0*(2^6) | 0*(2^5) | 1*(2^4) | 1*(2^3) | 1*(2^2) | 0*(2^1) | 1*(2^0) |
| Resultado | 128 | 0 | 0 | 16 | 8 | 4 | 0 | 1 |


### Convirtiendo números en formato decimal a binario:

Un método mecánico para convertir números en sistema decimal a binario es el proceso de la división sucesiva entre dos, Por ejemplo, para convertir a binario el número decimal 13, se comienza a dividir el número objetivo entre 2, luego, cada cociente resultante se divide entre 2 hasta que se obtiene un cociente cuya parte entera es 0.

### Ejemplo 1-5

Convertir el número decimal 100 a binario.

![convertir-decimal-binario](https://user-images.githubusercontent.com/36117314/46428046-2cc78200-c700-11e8-907c-90e3ac2bb3d8.png)




## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))


