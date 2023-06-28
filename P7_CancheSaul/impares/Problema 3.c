/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 22 de junio 2023
Descripcion: *3. Leer un string con getchar() y contabilizar cuantas vocales tiene.*/

#include<stdio.h>

int main(){
	int c,cont=0;
	
	printf("Digite una palabra (y luego contro-z): ");
	
	while(EOF != (c=getchar())){
		
		switch(c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': cont++;
		}
		
		putchar(c);
	}
	
	printf("El total de vocales es: %i",cont);
	
	return 0;
}
