/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*6. Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro
array de caracteres. y por ultimo modificar su mensaje poniendo a partir de la posicion
10 "Buena broma".*/

#include<stdio.h>
#include<string.h>

int main(){
	char cad1[20],cad2[20];
	/*Entrada*/
	printf("Digite un String: ");
	gets(cad1);
	/*Proceso*/
	strcpy(cad2,cad1); //Copiamos cad1 hacia cad2
	
	strcpy(cad2+10,"Buena Broma"); //añadimos al inicio Buena broma
	/*Salida*/
	printf("%s",cad2); //imprimimos el nuevo mensaje
	
	return 0;
}
