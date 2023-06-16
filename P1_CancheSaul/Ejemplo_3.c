/* Ejemplo 3 
Autor: Saul Canche Marcial
Compilador: Zinjai 
Sistema Operativo: Linux Ubuntu
Descripcion: Mostrar las diferencias entre las variables, imprimir la suma de 3 numeros proporcionados por el usuario"
*/
#include <stdio.h> 
int a, b, c;
int main(){

	int valor; 
	printf("Tres valores: ");
	scanf("%d %d %d", &a, &b, &c);
	valor = a+b+c;
	printf("La suma de %d + %d + %d = %d \n", a, b, c, valor);
}
