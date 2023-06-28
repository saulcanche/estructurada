/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 19. Determinar si una palabra es capicua o no.

anitalavalatina  reconocer */

#include<stdio.h>
#include<string.h>

int main(){
	char palabra[] = "reconocer";
	char palabra2[20];
	
	//Copiamos el contenido de palabra hacia palabra2
	strcpy(palabra2,palabra); 
	
	strrev(palabra2); //Invertimos a palabra2
	
	if(strcmp(palabra,palabra2)==0){
		printf("Palabra capicua");
	}	
	else{
		printf("No es capicua");
	}
	
	return 0;
}
