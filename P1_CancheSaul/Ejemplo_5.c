/* Ejemplo 4
Autor: Saul Canche Marcial
Compilador: Zinjai 
Sistema Operativo: Linux Ubuntu
Descripcion: 

*/

#include <stdio.h> 
void bienvenida(char nomb[]);
char nombre[30];
int main(){
	printf("¿Cuál es tu nombre: ?\n)");
	scanf("%s", &nombre);
	bienvenida(nombre); // added semicolon here
}
	void bienvenida(char nomb[]){
		printf("\n hola %s Bienvenido al lenguaje C", nomb);
	}
