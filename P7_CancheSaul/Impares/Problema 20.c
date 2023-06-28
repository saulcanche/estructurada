/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*20. Pedir al usuario que digite una palabra. luego mostrar la palabra invertida y
comprobar si es capicua.*/

#include<stdio.h>
#include<string.h>

int main(){
	char palabra[20];
	char palabra2[20];
	
	printf("Digite una palabra: ");
	gets(palabra);
	
	strcpy(palabra2,palabra); //copiamos el contenido de palabra hacia palabra2
	strrev(palabra2); //invertimos la palabra
	
	printf("\nPalabra: %s",palabra);
	printf("\nPalabra Invertida: %s",palabra2);
	
	if(strcmp(palabra,palabra2)==0){
		printf("\nEs una palabra capicua");
	}
	else{
		printf("\nNo es capicua");
	}
	
	
	return 0;
}

