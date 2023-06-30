/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*2. Hacer una estructura llamada alumno, en la cual se tendran los
siguientes miembros: Nombre, edad, promedio, pedir datos al usuario 
para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno*/
#include <stdio.h>
#include <locale.h>

struct Alumno {
    char nombre[20];
    int edad;
    float promedio;
};

void obtenerInformacion(struct Alumno *alumnos, int cantidad) {
    int i;

    for (i = 0; i < cantidad; i++) {
        printf("%i. Digite su nombre: ", i + 1);
        fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin);
        printf("%i. Digite su edad: ", i + 1);
        scanf("%i", &(alumnos[i].edad));
        printf("Digite su promedio: ", i + 1);
        scanf("%f", &(alumnos[i].promedio));
        fflush(stdin);
        printf("\n");
    }
}

int obtenerMejorNota(struct Alumno *alumnos, int cantidad) {
    int i;
    float mejorNota = 0.0;
    int pos = 0;

    for (i = 0; i < cantidad; i++) {
        if (alumnos[i].promedio > mejorNota) {
            mejorNota = alumnos[i].promedio;
            pos = i;
        }
    }

    return pos;
}

void mostrarMejorAlumno(struct Alumno *alumnos, int pos) {
    printf("\nEl alumno con la mejor nota es:\n");
    printf("\nNombre: %s", alumnos[pos].nombre);
    printf("Edad: %i", alumnos[pos].edad);
    printf("Promedio: %.2f\n\n", alumnos[pos].promedio);
}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int cantidad = 3;
    struct Alumno alumnos[3];
    int posMejorAlumno;

    obtenerInformacion(alumnos, cantidad);
    posMejorAlumno = obtenerMejorNota(alumnos, cantidad);
    mostrarMejorAlumno(alumnos, posMejorAlumno);

    return 0;
}
