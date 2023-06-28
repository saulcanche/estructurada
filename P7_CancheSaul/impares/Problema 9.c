/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *9. Utilizar la funcion strcmp() para comparar dos palabras.*/

#include<stdio.h>
#include<string.h>

int main(){
	/*Entradas*/
	char cad1[] = "Hola";
	char cad2[] = "Hola que tal";
	
	/* Proceso*/
	if(strcmp(cad1,cad2)==0){
		/*Salidas*/
		printf("Ambas cadenas son iguales");	
	}
	else{
		printf("Las cadenas son distintas");
	}
	
	
	return 0;
}
