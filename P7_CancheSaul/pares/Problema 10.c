/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*10. Pedir 2 nombres al usuario y comprar si son iguales o no.*/

#include<stdio.h>
#include<string.h>

int main(){
	char nombre1[20],nombre2[20];
	
	/* Entrada*/
	printf("Digite el primer nombre: ");
	gets(nombre1);
	printf("Digite el segundo nombre: ");
	gets(nombre2);
	
	/* Proceso*/ /*Salida*/
	if(strcmp(nombre1,nombre2)==0){ //usamos la funcion strcmp para comparar los dos nombres ingresados 
		printf("Ambos nombres son iguales"); //Cuando son iguales
	}
	else{
		printf("Los nombres son distintos");
	}
	
	
	return 0;
}

