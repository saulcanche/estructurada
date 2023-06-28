/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 1. Utilizar las funciones getchar() y putchar() para para leer e imprimir un string.


 getchar():
La funci�n getchar( ) se utiliza para leer car�cter a car�cter. La llamada a getchar()
devuelve el car�cter siguiente del flujo de entrada stdin. En caso de error, 
o de encontrar el fin de archivo, devuelve EOF (macro definida en stdio. h).	
 
   putchar():
La funci�n putchar() se utiliza para escribir en la salida (stdout) car�cter a car�cter.
El car�cter que se escribe es el transmitido como argumento.
*/

#include<stdio.h>

int main(){
	int c; 
/* Proceso*/	
	while(EOF != (c=getchar() /* Entrada*/)){ //mientras c sea diferente del final de la cadena
	 /* Salida*/
		putchar(c); // Imprime la cadena ingressada 
	}
	
	//La salido del bucle es con control-z.
	
	return 0;
}
