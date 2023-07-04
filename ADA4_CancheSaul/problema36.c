/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
E.P. que utilice dos estructuras una llamada promedio que tendrá
los siguientes miembros: Unidad1, Unidad2, Unidad3, Unidad4 y
ProyectoFinal y otra estructura llamada alumno, que tendrá los
siguientes miembros: matricula, nombre, edad, sexo y nombre de
equipo; se debe anidar dicha estructura promedio, en la estructura
alumno, así como leer los datos para los 30 alumnos de Programación
Estructurada; se pide determinar e imprimir los datos (matricula,
nombre y NombreEquipo) y el promedio individual, de aquellas
alumnas que sean mujeres y cuyo promedio, sea mayor al promedio
de grupo. Además, debe imprimir los resultados con el siguiente
formato de reporte, indicando el promedio de dichas alumnas.
        REPORTE DE MAYORES
MATRICULA NOMBRE EQUIPO PROMEDIO
____________________________________________________ 
XXXXXXXX XXXXXXXXXXX XXXXXX 99.99
XXXXXXXX XXXXXXXXXXX XXXXXX 99.99
____________________________________________________ 
PROMEDIO MAYORES 99.99

*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUMNOS 30

struct Promedio {
    float Unidad1;
    float Unidad2;
    float Unidad3;
    float Unidad4;
    float ProyectoFinal;
};

struct Alumno {
    int matricula;
    char nombre[50];
    int edad;
    int sexo; // 1 = Hombre, 2 = Mujer
    char nombre_equipo[50];
    struct Promedio promedio;
};

void leer_alumnos(struct Alumno alumnos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Alumno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alumnos[i].matricula);
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("Sexo (1 = Hombre, 2 = Mujer): ");
        scanf("%d", &alumnos[i].sexo);
        printf("Nombre de equipo: ");
        scanf("%s", alumnos[i].nombre_equipo);
        printf("Calificación de la Unidad 1: ");
        scanf("%f", &alumnos[i].promedio.Unidad1);
        printf("Calificación de la Unidad 2: ");
        scanf("%f", &alumnos[i].promedio.Unidad2);
        printf("Calificación de la Unidad 3: ");
        scanf("%f", &alumnos[i].promedio.Unidad3);
        printf("Calificación de la Unidad 4: ");
        scanf("%f", &alumnos[i].promedio.Unidad4);
        printf("Calificación del Proyecto Final: ");
        scanf("%f", &alumnos[i].promedio.ProyectoFinal);
    }
}

void imprimir_alumnos(struct Alumno alumnos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nAlumno %d\n", i + 1);
        printf("Matrícula: %d\n", alumnos[i].matricula);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Sexo: %s\n", alumnos[i].sexo == 1 ? "Hombre" : "Mujer");
        printf("Nombre de equipo: %s\n", alumnos[i].nombre_equipo);
        printf("Calificación de la Unidad 1: %.2f\n", alumnos[i].promedio.Unidad1);
        printf("Calificación de la Unidad 2: %.2f\n", alumnos[i].promedio.Unidad2);
        printf("Calificación de la Unidad 3: %.2f\n", alumnos[i].promedio.Unidad3);
        printf("Calificación de la Unidad 4: %.2f\n", alumnos[i].promedio.Unidad4);
        printf("Calificación del Proyecto Final: %.2f\n", alumnos[i].promedio.ProyectoFinal);
    }
}

void imprimir_reporte_mayores(struct Alumno alumnos[], int n) {
    float suma_promedios_mujeres = 0;
    int contador_mujeres = 0;
    float promedio_grupo = 0;

    for (int i = 0; i < n; i++) {
        if (alumnos[i].sexo == 2) { // Mujer
            float promedio_individual = (alumnos[i].promedio.Unidad1 + alumnos[i].promedio.Unidad2 + alumnos[i].promedio.Unidad3 + alumnos[i].promedio.Unidad4 + alumnos[i].promedio.ProyectoFinal) / 5;

            suma_promedios_mujeres += promedio_individual;
            contador_mujeres++;

            if (promedio_individual > promedio_grupo) {
                promedio_grupo = promedio_individual;
            }
        }
    }

    float promedio_general = suma_promedios_mujeres / contador_mujeres;

    printf("\nREPORTE DE MAYORES\n");
    printf("MATRICULA\tNOMBRE\t\tEQUIPO\t\tPROMEDIO\n");
    printf("____________________________________________________\n");

    for (int i = 0; i < n; i++) {
        if (alumnos[i].sexo == 2) { // Mujer
            float promedio_individual = (alumnos[i].promedio.Unidad1 + alumnos[i].promedio.Unidad2 + alumnos[i].promedio.Unidad3 + alumnos[i].promedio.Unidad4 + alumnos[i].promedio.ProyectoFinal) / 5;

            if (promedio_individual > promedio_grupo) {
                printf("%d\t\t%s\t\t%s\t\t%.2f\n", alumnos[i].matricula, alumnos[i].nombre, alumnos[i].nombre_equipo, promedio_individual);
            }
        }
    }

    printf("____________________________________________________\n");
    printf("PROMEDIO MAYORES %.2f\n", promedio_grupo);
}

int main() {
    setlocale(LC_ALL, "es_ES");
    struct Alumno alumnos[MAX_ALUMNOS];
    int num_alumnos;

    printf("Ingrese la cantidad de alumnos (max. %d): ", MAX_ALUMNOS);
    scanf("%d", &num_alumnos);

    if (num_alumnos > MAX_ALUMNOS) {
        printf("Error: La cantidad de alumnos supera el límite.\n");
        return 1;
    }

    leer_alumnos(alumnos, num_alumnos);
    imprimir_reporte_mayores(alumnos, num_alumnos);

    return 0;
}
