# 2 Aritmética binaria

## 2.1 Suma binaria

La suma binaria es parecida a la forma de sumar números decimales. La diferencia radica en que en la suma decimal, cuando una suma excede de nueve se produce un acarreo y esto es porque nueve es el último dígito disponible en el sistema decimal; En la suma binaria sucede lo mismo pero es en el caso 1 + 1, ¿porque? porqué el resultado de esa suma es 2 y esto sobrepasa el último dígito disponible en el sistema binario que es el 1.

Estas son las reglas que rigen la suma binaria:

| + | 0 | 1 |
|:---:|:---:|:---:|
| 0 | 0 | 1 |
| 1 | 1 | 10|

Las sumas 0 + 0, 0 + 1 y 1 + 0 son evidentes:

- 0 + 0 = 0
- 0 + 1 = 1
- 1 + 0 = 1

Pero la suma de 1+1, requiere un poco más de análisis, pues el resultado es 10, se puede explicar fácil si se parte del sistema decimal, donde 1+1 es igual a 2, al convertir esta respuesta a sistema binario, el número resultante es 10.

### Ejemplo 2-1

Realizar la siguiente suma binaria: 111011 + 110

**Paso 1:** 1 + 0 = 1

| Carry ||||||||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial ||||||| 1 |

**Paso 2:** 1 + 1 = 10 (se coloca el 0 y se acarrea 1.

| Carry ||||| 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial |||||| 0 | 1 |

**Paso 3:** Es necesario realizar una suma de 3 dígitos debido al acarreo, es posible seguir las seguientes reglas:

| Acarreo | Sumando 1 | Sumando 1 | Resultado |
|:---:|:---:|:---:|:---:|
|1|0|0|01 (Suma 1 con acarreo 0)|
|1|1|0|10 (Suma 0 con acarreo 1)|
|1|0|1|10 (Suma 0 con acarreo 1)|
|1|1|1|11 (Suma 1 con acarreo 1)|

Por lo tanto: 

| Carry |||| 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial ||||| 0 | 0 | 1 |

**Paso 4:** 1 + 1 = 10

| Carry ||| 1 | 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial |||| 0 | 0 | 0 | 1 |

**Paso 5:** 1 + 1 = 10

| Carry || 1 | 1 | 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial ||| 0 | 0 | 0 | 0 | 1 |

**Paso 6:** 1 + 1 = 10, En este caso, ya no hay mas dígitos con los que seguir sumando por lo que el acarreo simplemente baja a la respuesta:

| Carry | 1 | 1 | 1 | 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado final | 1 | 0 | 0 | 0 | 0 | 0 | 1 |

El resultado de la operanción 111011 + 110 = 1000001; Es posible verificar el resultado de la respuesta convirtiendo cada elemento de la suma a sistema decimal: 59 + 6 = 65. 

## 2.2 Resta binaria.

La unidad aritmético-lógica de un procesador es incapaz de realizar operaciones de resta tal como se realizan con los métodos matemáticos, por lo que para efectuar una resta es conveniente realizar una suma equivalente, para ello, el sustraendo pasa por dos conversiones: complemento a uno y complemento a dos.

Los pasos a seguir para efectuar una resta en sistema binario son los siguientes:

-	Escribir los números a operar en formato de pila, si la longitud de uno es mayor, rellenar el número mas pequeño con ceros para facilitar los calculos, además, tomar en cuenta que el bit más significativo representa el signo del número: 0 si es positivo y 1 si es negativo. Si un número no llena por completo el buffer, simplemente se rellena el espacio restante con 0.
-	Calcular el complemento a 1 del sustraendo. Esto es, intercambiar cada dígito por su complemento, en binario, solo se tienen 2 dígitos: 0 y 1, por lo que el complemento de 0 es 1 y viceversa; El único dígito que permanece sin ser cambiado es el más significativo, pues es el que pertenece al signo, una vez hecha esta operación se obtiene el complemento a 1.
-	Calcular el complemento a 2. Con el resultado de obtener el complemento a 1 del sustraendo se procede a obtener su respectivo complemento a 2: Sumar 1 al complemento1.
-	Operar. Se procede a sumar el minuendo con el complemento a 2 del sustraendo, en esta operación se toma en cuenta el bit de signo.
-	Observar acarreo. Pueden existir dos casos: 
  - Si al final de operar hay acarreo: El resultado es un número positivo y se desprecia el acarreo.
  - Si al final de operar no existe acarreo: El resultado es un número negativo. Se deberá recalcular el complemento a 2 del resultado para saber qué número es realmente.
  
### Ejemplo 2-2

Realizar la siguiente suma binaria: 100001 - 11100 (33-28 en sistema decimal, el resultado es 5).

**Paso 1:** Colocando los números en formato de pila, notar que cada uno se le ha asignado su respectivo signo, 0 al positivo y 1 al negativo, ademas el sustraendo se complementado con 0 ya que longitud es menor a la del minuendo.

|descrición|Signo |||||||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|Minuendo|0|1|0|0|0|0|1|
|Sustraendo|1|0|1|1|1|0|0|

**Pase 2:** Calcular complemento a 1 del sustraendo, notar que el bit del signo, no se toma en cuenta.

|Sustraendo|1|0|1|1|1|0|0|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|Complemento a 1|1|1|0|0|0|1|1|

**Pase 3:** Calcular complemento a 2 

|descrición|Signo |||||||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|Sustraendo|1|0|1|1|1|0|0|
|Carry|||||1|1||
|Complemento a 1|1|1|0|0|0|1|1|
|sumando 1|||||||1|
|Complemento a 2||1|0|0|1|0|0|





## Autores

**Erick Varela** ([vareladev](https://github.com/vareladev/))


