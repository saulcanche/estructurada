/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *21. Convertir una cadena (por ejemplo: "1234"), a un n�mero entero.
Con la funci�n atoi().*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char *cad = "1234";
	int valor;
	
	valor = atoi(cad);
	
	printf("Valor numerico: %i",valor);
	
	
	
	return 0;
}


