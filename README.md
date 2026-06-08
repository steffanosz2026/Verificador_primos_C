# Verificador de Números Primos en C

Este proyecto implementa un validador de primalidad ultra-eficiente en C enfocado en el control de recursos de hardware.

## Optimización Matemática
En lugar de utilizar fuerza bruta ($O(N)$), el algoritmo se detiene en la raíz cuadrada del número aplicando el concepto de factores en espejo. 

Para evitar un **Integer Overflow** (desbordamiento de enteros) en la CPU al evaluar números grandes como el Primo de Mersenne $M_{31}$ (`2147483647`), se reemplazó la condición tradicional de multiplicación:
`contador * contador <= numero`

Por su equivalente algebraico seguro de división:
`contador <= numero / contador`

Esto reduce la complejidad computacional a $O(\sqrt{N})$ de forma segura para los registros de 32 bits de la CPU.

En una futura optimizacion se pretende saltarse los pares después de comprobar que el número no es divisible entre 2, haciendo que el bucle avance de 2 en 2 (i += 2), probando solo los números impares ($3, 5, 7, 9...$). Esto duplicaria la velocidad del código.
