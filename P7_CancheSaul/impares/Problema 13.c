/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: /13. Invertir una cadena con la funci�n strrev().
*/

#include<stdio.h>
#include<string.h>

int main(){
	/* Entradas*/
	char cadena[] = "Hola";
	/*Proceso*/	
	strrev(cadena); //Invertimos la cadena con la funcion strrev
	
	/* Salidas*/
	printf("Cadena Invertida: %s",cadena); //mostramos la cadena invertida
	return 0;
}
