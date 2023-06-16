/* Ejemplo 1 
Autor: Saul Canche Marcial
Compilador: Zinjai 
Sistema Operativo: Linux Ubuntu
Descripcion: imprime el tamaño de los valores de coma flotante y doble
*/
#define f 5.1f
#define d 6.21
#include <stdio.h>
int main() {
	
	printf("el tamaño de variables de coma flotante es %d \n", sizeof(f));
	printf("El tamaño de variables de doble precision es %d \n", sizeof(d));
	return 0;
}
