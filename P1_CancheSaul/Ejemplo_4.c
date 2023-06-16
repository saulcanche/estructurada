/* Ejemplo 3 
Autor: Saul Canche Marcial
Compilador: Zinjai 
Sistema Operativo: Linux Ubuntu
Descripcion: 
Una papeleri­a vende libros a $100, cuadernos a $15.50
y plumas a $2.35. E.P. que determine e imprima el
monto total de una venta, segun el numero de articulos
vendidos."
*/
#include <stdio.h> 
#define LIBROS 100
#define CUADERNOS 15.50
#define PLUMAS 2.35
int numLibros, numCuadernos, numPlumas;
int main(){
	
	float ventaTotal;
	printf("Ingresa el numero de libros: \n");
	scanf("%d", &numLibros);
	printf("Ingresa el numero de cuadernos: \n");
	scanf("%d", &numCuadernos);
	printf("Ingresa el numero de plumas: \n");
	scanf("%d", &numPlumas);
	ventaTotal = LIBROS * numLibros + CUADERNOS * numCuadernos + PLUMAS*numPlumas;
	printf("La venta total es de %2f", ventaTotal);
}
	
