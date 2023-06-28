/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *15. Convertir dos cadena de minusculas a MAYUSCULAS con la funcion strupr(). 
Compararlas, y decir si son iguales.*/

#include<stdio.h>
#include<string.h>

int main(){
	char palabra[] = "hola";
	char palabra2[] = "hola";
	
	strupr(palabra); //Convirtiendo ambas cadenas a MAYUSCULA
	strupr(palabra2);
	
	//Comparandolas
	if(strcmp(palabra,palabra2)==0){
		printf("Ambas cadenas con iguales");
	}
	else{
		printf("Son diferentes");
	}
	
	return 0;
}
