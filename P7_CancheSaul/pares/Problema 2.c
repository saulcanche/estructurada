/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: 
2. Leer una cadena de caracteres con getchar() y contabilizar cuantos espacios ocupa. */

#include<stdio.h>


int main(){
	int c,cont=0;
	/*Proceso*/
	
	while(EOF != (c=getchar())/*Entrada*/){
		cont++; //Contador 
	}
	/*Salida*/
	printf("La cadena tiene %i espacios ocupados",cont-1);
	
	return 0;
}


