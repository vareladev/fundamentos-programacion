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

Paso 1: 1 + 0 = 1

| Carry ||||||||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial ||||||| 1 |

Paso 2: 1 + 1 = 10 (se coloca el 0 y se acarrea 1.

| Carry ||||| 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial |||||| 0 | 1 |

Paso 3: Es necesario realizar una suma de 3 dígitos debido al acarreo: 1 + 0 + 1; Realizando sumas parciales: 1 + 0 = 1, luego: 1 + 1 = 10, nuevamente se coloca el 0 y se lleva acarreo

| Carry |||| 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial ||||| 0 | 0 | 1 |

Paso 4: 1 + 1 = 10

| Carry ||| 1 | 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial |||| 0 | 0 | 0 | 1 |

Paso 5: 1 + 1 = 10

| Carry || 1 | 1 | 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado parcial ||| 0 | 0 | 0 | 0 | 1 |

Paso 6: 1 + 1 = 10, En este caso, ya no hay mas dígitos con los que seguir sumando por lo que el acarreo simplemente baja a la respuesta

| Carry | 1 | 1 | 1 | 1 | 1 |||
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Sumando 1 || 1 | 1 | 1 | 0 | 1 | 1 |
| Sumando 2 | + |||| 1 | 1 | 0 |
| Resultado final | 1 | 0 | 0 | 0 | 0 | 0 | 1 |


## Autores

* **Erick Varela** ([vareladev](https://github.com/vareladev/))


