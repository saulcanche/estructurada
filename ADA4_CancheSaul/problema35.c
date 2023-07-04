/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
35. E.P. que lea un arreglo de estructuras los datos de N empleados
de una empresa (clave (numérica), nombre, edad, salario (real), sexo
(numérica) y que determine e imprima, los datos de aquellos
empleados cuyo edad y salario, son mayores al promedio de grupo.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLEADOS 100

struct Empleado {
    int clave;
    char nombre[50];
    int edad;
    float salario;
    int sexo;
};

void leer_empleados(struct Empleado empleados[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Empleado %d\n", i + 1);
        printf("Clave: ");
        scanf("%d", &empleados[i].clave);
        printf("Nombre: ");
        scanf("%s", empleados[i].nombre);
        printf("Edad: ");
        scanf("%d", &empleados[i].edad);
        printf("Salario: ");
        scanf("%f", &empleados[i].salario);
        printf("Sexo (1 = Hombre, 2 = Mujer): ");
        scanf("%d", &empleados[i].sexo);
    }
}

void imprimir_empleados(struct Empleado empleados[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Empleado %d\n", i + 1);
        printf("Clave: %d\n", empleados[i].clave);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Edad: %d\n", empleados[i].edad);
        printf("Salario: %.2f\n", empleados[i].salario);
        printf("Sexo: %s\n", empleados[i].sexo == 1 ? "Hombre" : "Mujer");
    }
}

void empleados_mayores_al_promedio(struct Empleado empleados[], int n) {
    float suma_edades = 0;
    float suma_salarios = 0;

    for (int i = 0; i < n; i++) {
        suma_edades += empleados[i].edad;
        suma_salarios += empleados[i].salario;
    }

    float promedio_edades = suma_edades / n;
    float promedio_salarios = suma_salarios / n;

    printf("\nEmpleados cuya edad y salario son mayores al promedio del grupo:\n");

    for (int i = 0; i < n; i++) {
        if (empleados[i].edad > promedio_edades && empleados[i].salario > promedio_salarios) {
            printf("\nEmpleado %d\n", i + 1);
            printf("Clave: %d\n", empleados[i].clave);
            printf("Nombre: %s\n", empleados[i].nombre);
            printf("Edad: %d\n", empleados[i].edad);
            printf("Salario: %.2f\n", empleados[i].salario);
            printf("Sexo: %s\n", empleados[i].sexo == 1 ? "Hombre" : "Mujer");
        }
    }
}

int main() {
    struct Empleado empleados[MAX_EMPLEADOS];
    int n;
    setlocale(LC_ALL, "es_ES");

    do {
        printf("Ingrese el número de empleados (máximo %d): ", MAX_EMPLEADOS);
        scanf("%d", &n);

        if (n <= 0 || n > MAX_EMPLEADOS) {
            printf("\nError: el número de empleados debe ser mayor que cero y menor o igual que %d.\n\n", MAX_EMPLEADOS);
        }
    } while (n <= 0 || n > MAX_EMPLEADOS);

    leer_empleados(empleados, n);

    imprimir_empleados(empleados, n);

    empleados_mayores_al_promedio(empleados, n);

    return 0;
}