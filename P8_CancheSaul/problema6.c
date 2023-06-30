/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N 
alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir sus datos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_ALUMNOS 100
#define MAX_NOMBRE 20
#define MAX_SEXO 20

struct promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct alumno {
    char nombre[MAX_NOMBRE];
    char sexo[MAX_SEXO];
    int edad;
    struct promedio prom;
};

void pausar() {
    printf("Presione enter para continuar...");
    getchar();
    getchar();
}

void ingresarDatosAlumnos(struct alumno alumnos[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%i. Digite su nombre: ", i + 1);
        fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin);

        printf("%i. Digite su sexo: ", i + 1);
        fgets(alumnos[i].sexo, sizeof(alumnos[i].sexo), stdin);

        printf("%i. Digite su edad: ", i + 1);
        scanf("%i", &alumnos[i].edad);
        getchar();  // Consumir el carácter de nueva línea pendiente

        printf("%i. Digite sus notas: ", i + 1);
        scanf("%f %f %f", &alumnos[i].prom.nota1, &alumnos[i].prom.nota2, &alumnos[i].prom.nota3);
        getchar();  // Consumir el carácter de nueva línea pendiente

        printf("\n");
    }
}

int encontrarMejorPromedio(struct alumno alumnos[], int n) {
    int i;
    int pmay = 0;
    float mayor = alumnos[0].prom.nota1 + alumnos[0].prom.nota2 + alumnos[0].prom.nota3;

    for (i = 1; i < n; i++) {
        float promedio = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;

        if (promedio > mayor) {
            mayor = promedio;
            pmay = i;
        }
    }

    return pmay;
}

void imprimirMejorPromedio(struct alumno alumnos[], int indice) {
    printf("\n-Felicidades, Alumno con Mayor Promedio-\n");
    printf("\nNombre: %s", alumnos[indice].nombre);
    printf("\nSexo: %s", alumnos[indice].sexo);
    printf("\nEdad: %i", alumnos[indice].edad);
    printf("\nPromedio: %.2f\n", (alumnos[indice].prom.nota1 + alumnos[indice].prom.nota2 + alumnos[indice].prom.nota3) / 3);
}

int main() {
    setlocale(LC_ALL, "es_ES.utf8");

    int n;

    printf("Digite el total de alumnos: ");
    scanf("%i", &n);
    getchar();  // Consumir el carácter de nueva línea pendiente

    if (n > MAX_ALUMNOS) {
        printf("El número de alumnos excede el límite permitido.\n");
        pausar();
        return 1;
    }

    struct alumno alumnos[MAX_ALUMNOS];

    ingresarDatosAlumnos(alumnos, n);

    int pmay = encontrarMejorPromedio(alumnos, n);

    imprimirMejorPromedio(alumnos, pmay);

    pausar();

    return 0;
}
