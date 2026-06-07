#include <stdio.h>
//#include <inttypes.h>  			  //Se incluyo antiguamente por alerta con el tipo de dato %llu en linea 10 en Windows

//Prototipo
char primo(int numeroIngresado);

int main(int argc, char *argv[]) {
//1.Declaracion de variables locales
int numeroIngresado;

//2.Controles basicos de ingreso
printf("Ingrese un entero positivo");
	scanf("%d", &numeroIngresado);
if(numeroIngresado <= 0) {
	printf("[ERROR] El numero ingresado debe ser entero positivo.\n");
	return 1;
}
//3..Control de primalidad mediante llamado de funcion primo
	if(primo(numeroIngresado)=='s') {
	printf("El numero es PRIMO\n");
	}else {
		printf("NO PRIMO");
	}
	return 0;
}
//4.Lògica de bùsqueda de numeros primos
char primo(int numeroIngresado){
	
if(numeroIngresado == 1){  //Control para excluir el 1 por definicion matematica
		return 'n';
	}

	for(int contador=2; contador <=numeroIngresado / contador; contador++) {   //Optimizacion para numeros grandes usando el espejo en x*x pero representandolo en la condicion logica como x <=N/x para evitar desbordamiento de int
																			  //Eficiencia:en la primera vuelta del ciclo verá que es divisible entre 2 y retornará 'n' instantáneamente, sin tener que calcular nada más.
		if(numeroIngresado % contador == 0) {    						      //La condicion aplica el criterio de divisor usando el operador de modulo
			return 'n';
		}
	}
			return 's';
}
