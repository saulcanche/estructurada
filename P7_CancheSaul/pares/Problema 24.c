/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*24. Pedir dos cadenas(con numero flotante) al usuario, posteriormente multiplicar
dichos n�meros y mostrar su resultado.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char cad1[5],cad2[5];
	float n1,n2,mult=0;
	/* Entradas*/
	
	printf("Digite la primera cadena(numero flotante): ");
	gets(cad1);
	printf("Digite la segunda cadena(numero flotante): ");
	gets(cad2);
	/* Proceso*/
	//Convirtiendo las cadenas a numeros flotantes
	n1 = atof(cad1); //usamos la funcion atof() para convertir a flotante y asi poder hacer la multiplicacion
	n2 = atof(cad2);//usamos la funcion atof() para convertir a flotante y asi poder hacer la multiplicacion
	
	mult = n1*n2;
	/*Salidas*/
	printf("\nEl resultado de la multiplicacion es: %.2f",mult);	
	
	
	return 0;
}
