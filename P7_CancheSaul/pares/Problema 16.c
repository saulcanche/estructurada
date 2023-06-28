/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*16. Pedir al usuario su nombre,apellido, y ciudad en la que vive, posteriormente
convertir todo a MAYUSCULAS e imprimir los datos.(Utilizar una estructura)*/

#include<stdio.h>
#include<string.h>

struct datos{
	char nombre[20];
	char apellidos[20];
	char ciudad[20];
}datos1;

int main(){
	/*Entradas*/
	printf("Digite su nombre: ");
	gets(datos1.nombre); //usamos gets para guardar el nombre en la estructura
	printf("Digite sus apellidos: ");
	gets(datos1.apellidos);
	printf("Digite su ciudad: ");
	gets(datos1.ciudad);
	
	/*Proceso*/
	//Convirtiendo a MAYUSCULAS
	strupr(datos1.nombre);  //usamos la funcion strupr para convertir en mayusculas
	strupr(datos1.apellidos);//usamos la funcion strupr para convertir en mayusculas
	strupr(datos1.ciudad);//usamos la funcion strupr para convertir en mayusculas
	
	//Salidas
	//Mostrando datos convertidos
	printf("\nSu nombre: %s",datos1.nombre);
	printf("\nSus apellidos: %s",datos1.apellidos);
	printf("\nSu ciudad: %s",datos1.ciudad);
	
	return 0;
}

