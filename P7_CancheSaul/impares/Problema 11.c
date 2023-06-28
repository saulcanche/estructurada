/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *11. Pedir 2 palabras al usuario y ordenarlas alfabeticamente.*/

#include<stdio.h>
#include<string.h>

int main(){
	/*Entradas*/
	char palabra1[20],palabra2[20];
	
	printf("Digite la primera palabra: ");
	gets(palabra1);
	printf("Digite la segunda palabra: ");
	gets(palabra2);

	
	/* Proceso*/
	//Ordenandolas alfebeticamente
	if(strcmp(palabra1,palabra2)>0){
		/*Salidas dependiendo de cual este mas cerca en el abecedario*/
		printf("\n%s , %s",palabra2,palabra1);
	}
	else{
		printf("\n%s , %s",palabra1,palabra2);
	}
	return 0;
}
