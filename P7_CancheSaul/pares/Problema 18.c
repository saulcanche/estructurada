/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*18. Pedir el nombre de 3 familiares al usuario (en MAYUSCULAS), y posteriormente
convertir los datos a minusculas.*/

#include<stdio.h>
#include<string.h>

struct familia{
	char nombre[50];
}familiares[3];

int main(){
	int i;
	/* Entradas*/
	//Pedimos el nombre para 3 familiares
	for(i=0;i<3;i++){
		printf("Nombre del familiar[%i] (en MAYUSCULA): ",i+1);
		gets(familiares[i].nombre);
	}
	/* Proceso*/
	//Convertimos a minusculas los datos
	for(i=0;i<3;i++){
		strlwr(familiares[i].nombre);
	}
	/* Salidas*/
	
	//Por ultimo imprimimos los datos en minuscula
	for(i=0;i<3;i++){
		printf("\nNombre de familiar[%i]: %s",i+1,familiares[i].nombre);
	}
	
	
	return 0;
}


