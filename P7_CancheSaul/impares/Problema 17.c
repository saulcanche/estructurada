/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *17. Pedir su nombre y apellidos al usuario (en mayuscula), porteriormente utilizar
la funcion strlwr() para convertir las MAYUSCULAS en minusculas e imprimir los datos.*/

#include<stdio.h>
#include<string.h>

struct datos{
	char nombre[20];
	char apellidos[20];
}datos1;

int main(){
	/*Entradas*/
	printf("Digite su nombre (en MAYUSCULAS): ");
	gets(datos1.nombre);
	printf("Digite sus apellidos (en MAYUSCULAS): ");
	gets(datos1.apellidos);
	
	/*Proceso*/
	//Convirtiendo a minusculas

	strlwr(datos1.nombre); //usamos la funcion strlwr para convertir a minusculas
	strlwr(datos1.apellidos);//usamos la funcion strlwr para convertir a minusculas
	
	/* Salidas*/
	//Mostrando datos convertidos
	printf("\nSu nombre: %s",datos1.nombre);
	printf("\nSus apellidos: %s",datos1.apellidos);
	
	return 0;
}
