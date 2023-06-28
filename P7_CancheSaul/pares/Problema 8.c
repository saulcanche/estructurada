/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
*8. Pedir una cadena al usuario, posteriormente utilizar la funcion strcat() para 
a�adir la frase "Que tengas un buen dia", al final de la cadena.*/

#include<stdio.h>
#include<string.h>

int main(){
	char cad[20];
	
	printf("Digite una Cadena: "); //Pedimos la cadena al usuario
	gets(cad);
	
	strcat(cad," Que tengas un buen dia"); //a�adimos al final de la cadena
	
	printf("%s",cad);
	
	return 0;
}
