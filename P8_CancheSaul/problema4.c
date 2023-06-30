/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga 
los siguientes miembros: nombre, pais, numero_medallas. y devuelva los datos
(nombre, pais) del atleta que ha ganado el mayor numero de medallas.*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

struct atleta {
	char nombre[18];
	char pais[18];
	int numero_medallas;
};

void ingresarAtletas(struct atleta atletas[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d. Digite su nombre: ", i + 1);
		fgets(atletas[i].nombre, sizeof(atletas[i].nombre), stdin);
		printf("%d. Digite su país: ", i + 1);
		fgets(atletas[i].pais, sizeof(atletas[i].pais), stdin);
		printf("%d. Digite el número de medallas: ", i + 1);
		scanf("%d", &atletas[i].numero_medallas);
		getchar(); // Limpiar el búfer de entrada después de scanf
		printf("\n");
	}
}

int encontrarAtletaMasMedallas(struct atleta atletas[], int n) {
	int i, mayor = -1, pos = 0;
	for (i = 0; i < n; i++) {
		if (atletas[i].numero_medallas > mayor) {
			mayor = atletas[i].numero_medallas;
			pos = i;
		}
	}
	return pos;
}

void imprimirAtletaMasMedallas(struct atleta atletas[], int pos) {
	printf("\n-- El atleta con más medallas es: --\n");
	printf("\nNombre: %s", atletas[pos].nombre);
	printf("País: %s\n\n", atletas[pos].pais);
}

int main() {
	setlocale(LC_ALL, "es_ES");

	int n, pos;
	printf("Digite el número de atletas: ");
	scanf("%d", &n);

	struct atleta atletas[98];

	ingresarAtletas(atletas, n);
	pos = encontrarAtletaMasMedallas(atletas, n);
	imprimirAtletaMasMedallas(atletas, pos);

	getchar(); // Esperar entrada del usuario antes de finalizar el programa
	return 0;
}