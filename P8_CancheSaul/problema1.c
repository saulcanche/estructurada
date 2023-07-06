/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*1. Hacer una estructura llamada corredor, en la cual se tendran los
siguientes miembros: Nombre, edad, sexo, club, pedir datos al usuario 
para un corredor, y asignarle una categoria de competicion:
	- Juvenil <= 18 años
	- Señor <= 40 años
	- Veterano > 40 años
posteriormente imprimir todos los datos del corredor, incluida su
categoria de competicion*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Corredor {
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
};

void obtenerInformacion(struct Corredor *corredor) {
    printf("Digite su nombre: ");
    fgets(corredor->nombre, sizeof(corredor->nombre), stdin);
    printf("Digite su edad: ");
    scanf("%i", &(corredor->edad));
    fflush(stdin);
    printf("Digite su sexo: ");
    fgets(corredor->sexo, sizeof(corredor->sexo), stdin);
    printf("Digite su club: ");
    fgets(corredor->club, sizeof(corredor->club), stdin);
}

void determinarCategoria(struct Corredor *corredor, char *categoria) {
    if (corredor->edad <= 18) {
        strcpy(categoria, "Juvenil");
    } else if (corredor->edad <= 40) {
        strcpy(categoria, "Senior");
    } else {
        strcpy(categoria, "Veterano");
    }
}

void mostrarInformacion(struct Corredor *corredor, char *categoria) {
    printf("\nSu categoría es: %s", categoria);
    printf("\nSu nombre es: %s", corredor->nombre);
    printf("Su edad es: %i", corredor->edad);
    printf("Su sexo es: %s", corredor->sexo);
    printf("Su club es: %s\n", corredor->club);
}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    struct Corredor corredor1;
    char categoria[20];

    obtenerInformacion(&corredor1);
    determinarCategoria(&corredor1, categoria);
    mostrarInformacion(&corredor1, categoria);

    return 0;
}
