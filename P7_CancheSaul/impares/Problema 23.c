/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *23. Utilizar la funci�n atof() para pasar una cadena (por ejemplo: "123.45"), a 
n�mero flotante.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	/* Entrada*/
	char *cad = "123.45";
	float valor;
	/* Proceso*/
	valor = atof(cad); // usamos la funcion atof para convertir a floatante la cadena
	/* Salida*/
	printf("Numero flotante: %.2f",valor);
	
	
	
	return 0;
}
