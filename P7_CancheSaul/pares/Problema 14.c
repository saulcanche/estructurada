/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*14. Pedir una cadena al usuario y luego invertirla. diciendo ademas cuantos 
caracteres tiene.*/

#include<stdio.h>
#include<string.h>

int main(){
	char palabra[30];
	
	/* Entradas*/
	printf("Digite una palabra: "); //Pedimos la cadena al usuario
	gets(palabra);
	/*Proceso*/	
	strrev(palabra);  //invertimos la palabra con la funcion strrev
	/*Salida*/
	printf("Cadena Invertida: %s",palabra); //Imprimimos la cadena invertida
	printf("\nCaracteres totales: %i",strlen(palabra)); //Mostramos la cantidad de 
														//caracteres que tiene.
	return 0;
}
