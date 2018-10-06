# 3 Ejercicios sistema binario, decimal y hexadecimal.

###  1.0 Conversión sistema decimal a sistema binario:
#### 1.1 Convertir 31 (sistema decimal) a su equivalencia en sistema binario.

Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|31/2|15|1|
|15/2|7|1|
|7/2|7|1|
|3/2|1|1|

Respuesta: **11111** 

#### 1.2 Convertir 512 (sistema decimal) a su equivalencia en sistema binario.

Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|512/2|256|0|
|256/2|128|0|
|128/2|64|0|
|64/2|32|0|
|32/2|16|0|
|16/2|8|0|
|8/2|4|0|
|4/2|2|0|
|2/2|1|0|

Respuesta: **1000000000** 

#### 1.3 Convertir 10245 (sistema decimal) a su equivalencia en sistema binario. 

Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|10245/2|5122|1|
|5122/2|2561|0|
|2561/2|1280|1|
|1280/2|640|0|
|640/2|320|0|
|320/2|160|0|
|160/2|80|0|
|80/2|40|0|
|40/2|20|0|
|20/2|10|0|
|10/2|5|0|
|5/2|2|1|
|2/2|1|0|

Respuesta: **10100000000101** 

#### 1.4 Convertir 1021235 (sistema decimal) a su equivalencia en sistema binario. 
 
Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|1021235/2|510617|1|
|510617/2|255308|1|
|255308/2|127654|0|
|127654/2|63827|0|
|63827/2|31913|1|
|31913/2|15956|1|
|15956/2|7978|0|
|7978/2|3989|0|
|3989/2|1994|1|
|1994/2|997|0|
|997/2|498|1|
|498/2|249|0|
|249/2|124|1|
|124/2|62|0|
|62/2|31|0|
|31/2|15|1|
|15/2|7|1|
|7/2|3|1|
|3/2|1|1|

Respuesta: **11111001010100110011** 

### 2.0 Conversión sistema decimal a sistema hexadecimal:
#### 2.1 Convertir 512 (sistema decimal) a su equivalencia en sistema hexadecimal. 

Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|512/16|32|0|
|32/16|2|0|

Respuesta: **200** 

#### 2.2 Convertir 10245 (sistema decimal) a su equivalencia en sistema hexadecimal.  

Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|10245/16|640|5|
|640/16|40|0|
|40/16|2|8|

Respuesta: **2805**  

#### 2.3 Convertir 1021235 (sistema decimal) a su equivalencia en sistema hexadecimal. 

Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|1021235/16|63827|3|
|63827/16|3989|3|
|3989/16|249|5|
|249/16|15|9|

Respuesta: **F9533**   

#### 2.4 Convertir 7512465987 (sistema decimal) a su equivalencia en sistema hexadecimal. 

Solución:

|Dividiendo|Cociente|Residuo|
|:---:|:---:|:---:|
|7512465987/16|469529124|3|
|469529124/16|29345570|4|
|29345570/16|1834098|2|
|1834098/16|114631|2|
|114631/16|7164|7|
|7164/16|447|12|
|447/16|27|15|
|27/16|1|11|

Respuesta: **1BFC72243**   

### 3.0 Conversión sistema hexadecimal a sistema binario:
#### 3.1 Convertir AB (sistema hexadecimal) a su equivalencia en sistema binario. 

Solución:

|Número hexadecimal|A|B|
|:---:|:---:|:---:|
|Número binario|1010|1011|

Respuesta: **10101011**

#### 3.2 Convertir FF (sistema hexadecimal) a su equivalencia en sistema binario.  

Solución:

|Número hexadecimal|F|F|
|:---:|:---:|:---:|
|Número binario|1111|1111|

Respuesta: **11111111**

#### 3.3 Convertir AF85E98 (sistema hexadecimal) a su equivalencia en sistema binario.  

Solución:

|Número hexadecimal|A|F|8|5|E|9|8|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|Número binario|1010|1111|1000|0101|1110|1001|1000|

Respuesta: **1010111110000101111010011000**

### 4.0 : Aplicaciones del sistema binario.
#### 4.1 Convertir la dirección IP 192.168.10.115 a su equivalente binario.

Solución:
Cada bloque están separados por puntos  y utilizan el sistema numérico decimal, cada bloque se debe convertir a su equivalente en sistema numérico binario por separado con el método utilizado en el punto 1.0 de este documento; Luego de convertir, cada bloque se debe utilizar 8 dígitos binarios por lo que si el resultado no cumple esta condición, este  se completa con ceros a la izquierda.

Respuesta: **11000000.10101000.00001010.01110011**

#### 4.2 Convertir la dirección IP 10.158.12.3 a su equivalente binario. 

Cada bloque están separados por puntos  y utilizan el sistema numérico decimal, cada bloque se debe convertir a su equivalente en sistema numérico binario por separado con el método utilizado en el punto 1.0 de este documento; Luego de convertir, cada bloque se debe utilizar 8 dígitos binarios por lo que si el resultado no cumple esta condición, este  se completa con ceros a la izquierda.

Respuesta: **00001010.10011110.00001100.00000011**

### 5.0 : Aplicaciones del sistema hexadecimal.
#### 5.1 Convertir la dirección IPv6 2001:0db8:85a3:0000:0000:8a2e:0370:7334 a su equivalente binario.

Cada bloque está separado por dos puntos y utilizan el sistema numérico hexadecimal, estos se deben convertir a su equivalente en sistema binario por separado con el método utilizado en el punto 3.0 de este documento.

Respuesta: 

´´´
0010000000000001:0000110110111000:
1000010110100011:0000000000000000:
0000000000000000:1000101000101110:
0000001101110000:0111001100110100
´´´

#### 5.2 Convertir la dirección IPv6 2001:0db8:1234:0000:0000:0000:0000:0001 a su equivalente binario.

Cada bloque está separado por dos puntos y utilizan el sistema numérico hexadecimal, estos se deben convertir a su equivalente en sistema binario por separado con el método utilizado en el punto 3.0 de este documento.

Respuesta: 

´´´
0010000000000001:0000110110111000:
0001001000110100:0000000000000000:
0000000000000000:0000000000000000:
0000000000000000:0000000000000001
´´´

### 6.0 : Suma binaria.
#### 6.1 Realizar la siguiente suma binaria: 1010 + 1010

|	Carry	|	1	|		|	1	|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Sumando 1	|		|	1	|	0	|	1	|	0	|	+	|
|	Sumando 2	|		|	1	|	0	|	1	|	0	|		|
|	Resultado	|	1	|	0	|	1	|	0	|	0	|		|

Respuesta: **El resultado de la operación 1010 + 1010 = 10100**

#### 6.2 Realizar la siguiente suma binaria: 11101 + 1010

|	Carry	|	1	|	1	|		|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Sumando 1	|		|	1	|	1	|	1	|	0	|	1	|	+	|
|	Sumando 2	|		|		|	1	|	0	|	1	|	0	|		|
|	Resultado	|	1	|	0	|	0	|	1	|	1	|	1	|		|

Respuesta: **El resultado de la operación 11101 + 1010 = 100111**

#### 6.3 Realizar la siguiente suma binaria: 11111 + 11111

|	Carry	|	1	|	1	|	1	|	1	|	1	|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Sumando 1	|		|	1	|	1	|	1	|	1	|	1	|	+	|
|	Sumando 2	|		|	1	|	1	|	1	|	1	|	1	|		|
|	Resultado	|	1	|	1	|	1	|	1	|	1	|	0	|		|

Respuesta: **El resultado de la operación 11111 + 11111 = 111110**

### 7.0 : Resta binaria.
#### 7.1 Realizar la siguiente resta binaria: 1001 - 11

Calculando complemento a 2 del sustraendo:

|	Descripción	|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Carry	|		|		|		|		|
|	Sustraendo	|	0	|	0	|	1	|	1	|
|	Complemento1	|	1	|	1	|	0	|	0	|
|	Suma1	|		|		|		|	1	|
|	Complemento2	|	1	|	1	|	0	|	1	|

Realizando la suma equivalente utilizando el complemento a 2 de sustraendo:

|	Descripción	|	Signo	|		|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Carry	|	1	|		|		|	1	|		|		|
|	Minuendo	|	0	|	1	|	0	|	0	|	1	|	+	|
|	Complemento 2	|	1	|	1	|	1	|	0	|	1	|		|
|	Resultado	|	0	|	0	|	1	|	1	|	0	|		|

Respuesta: **El resultado de la operación 1101 - 11 = 110**

#### 7.2 Realizar la siguiente resta binaria: 1101 - 1010

Calculando complemento a 2 del sustraendo:

|	Descripción	|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Carry	|		|		|	1	|		|
|	Sustraendo	|	1	|	0	|	1	|	0	|
|	Complemento1	|	0	|	1	|	0	|	1	|
|	Suma1	|		|		|		|	1	|
|	Complemento2	|	0	|	1	|	1	|	0	|

Realizando la suma equivalente utilizando el complemento a 2 de sustraendo:

|	Descripción	|	Signo	|		|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Carry	|	1	|	1	|		|		|		|		|
|	Minuendo	|	0	|	1	|	1	|	0	|	1	|	+	|
|	Complemento 2	|	1	|	0	|	1	|	1	|	0	|		|
|	Resultado	|	0	|	0	|	0	|	1	|	1	|		|

Respuesta: **El resultado de la operación 1101 - 1010 = 11**

#### 7.3 Realizar la siguiente resta binaria:  100 - 10001

Calculando complemento a 2 del sustraendo:

|	Descripción	|		|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Carry	|		|		|		|		|		|
|	Sustraendo	|	1	|	0	|	0	|	0	|	1	|
|	Complemento1	|	0	|	1	|	1	|	1	|	0	|
|	Suma1	|		|		|		|		|	1	|
|	Complemento2	|	0	|	1	|	1	|	1	|	1	|

Realizando la suma equivalente utilizando el complemento a 2 de sustraendo:

|	Descripción	|	Signo	|		|		|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Carry	|		|	1	|	1	|		|		|		|		|
|	Minuendo	|	0	|	0	|	0	|	1	|	0	|	0	|	+	|
|	Complemento 2	|	1	|	0	|	1	|	1	|	1	|	1	|		|
|	Resultado	|	1	|	1	|	0	|	0	|	1	|	1	|		|

El resultado es negativo porque el bit de signo del resultado es 1, por lo tanto, se debe volver a calcular el complemento a 2 sobre el resultado para saber que número es:

|	Descripción	|		|		|		|		|		|
|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|	:---:	|
|	Carry	|	1	|	1	|	1	|	1	|		|
|	Resultado	|	1	|	0	|	0	|	1	|	1	|
|	Complemento1	|	0	|	1	|	1	|	0	|	0	|
|	Suma1	|		|		|		|		|	1	|
|	Complemento2	|	0	|	1	|	1	|	0	|	1	|

Respuesta: **El resultado de la operación 100 - 10001 = 1101 (tomando en cuenta bit de signo: 11101, lo que significa que es negativo)**



