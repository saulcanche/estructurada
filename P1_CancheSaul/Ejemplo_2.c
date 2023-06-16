/* Ejemplo 2 
Autor: Saul Canche Marcial
Compilador: Zinjai 
Sistema Operativo: Linux Ubuntu
Descripcion: Mostrar las diferencias entre las variables globales y locales y los diferentes subniveles"
*/
#include <stdio.h> 
int Q;
int main() {
	int A;
	A = 124; Q = 1;
	printf("A = %d, Q= %d \n", A, Q);

		{ 
		int B; 
		B = 124;
		A = 457;
		Q = 2;
		printf("B = %d, A= %d, Q=%d \n", B, A, Q);
			{int C; 
			C = 124;
			B = 457;
			A = 788;
			Q = 3;
			printf("C = %d, B= %d, A= %d, Q = %d", C, B, A, Q);
			
			}
		}
	return 0;
}
