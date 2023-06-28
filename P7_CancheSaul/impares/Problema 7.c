/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *7. Utilizar la funcion strcat() para a�adir un texto a un string.*/

#include<stdio.h>
#include<string.h>

int main(){
	/* Entrada*/
	char cad[] = "Hola que tal? ";
	/* Proceso*/	
	strcat(cad,"Mi nombre es alejandro");
	
	//cad = Hola que tal? Mi nombre es alejandro
	/* Salida*/	
	printf("%s",cad);
	
	return 0;
}

