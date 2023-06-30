/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*1. Hacer una estructura llamada corredor, en la cual se tendran los
siguientes miembros: Nombre, edad, sexo, club, pedir datos al usuario 
para un corredor, y asignarle una categoria de competicion:
	- Juvenil <= 18 años
	- Señor <= 40 años
	- Veterano > 40 años
posteriormente imprimir todos los datos del corredor, incluida su
categoria de competicion*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}corredor1;

int main(){
    setlocale(LC_ALL, "es_ES");
    char categoria[20];
	/* Entrada */
	printf("Digite su nombre: ");
	gets(corredor1.nombre);
	printf("Digite su edad: ");
	scanf("%i",&corredor1.edad);
	fflush(stdin);
	printf("Digite su sexo: ");
	gets(corredor1.sexo);
	printf("Digite su club: ");
	gets(corredor1.club);
	/* Proceso*/
	if(corredor1.edad<=18){
		strcpy(categoria,"Juvenil"); //categoria = Juvenil
	}
	else if(corredor1.edad<=40){
		strcpy(categoria,"Senior"); //categoria = Señor
	}
	else{
		strcpy(categoria,"Veterano");
	}
    /*Salida*/
	
	printf("\n\nSu categoria es: %s",categoria);
	printf("\nSu nombre es: %s",corredor1.nombre);
	printf("\nSu edad es: %i",corredor1.edad);
	printf("\nSu sexo es: %s",corredor1.sexo);
	printf("\nSu club es: %s\n",corredor1.club);
	
	
	return 0;
}