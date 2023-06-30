/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*3. Realizar un programa en C que lea un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado con
mayor y menor salario.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct empleado {
    char nombre[20];
    char sexo[20];
    float salario;
};

void ingresarEmpleados(struct empleado empleados[], int n) {
    int i;
    fflush(stdin);
    
    for (i = 0; i < n; i++) {
        printf("%i. Digite su nombre: ", i + 1);
        fgets(empleados[i].nombre, 20, stdin);
        fflush(stdin);
        printf("%i. Digite su sexo: ", i + 1);
        fgets(empleados[i].sexo, 20, stdin);
        printf("%i. Digite su salario: ", i + 1);
        scanf("%f", &empleados[i].salario);
        printf("\n");
    }
}

void encontrarMayorMenorSalario(struct empleado empleados[], int n, int *pmay, int *pmen) {
    int i;
    float mayor = 0.0, menor = 9999999;

    for (i = 0; i < n; i++) {
        if (empleados[i].salario > mayor) {
            mayor = empleados[i].salario;
            *pmay = i;
        }
        if (empleados[i].salario < menor) {
            menor = empleados[i].salario;
            *pmen = i;
        }
    }
}

void imprimirEmpleado(struct empleado empleado) {
    printf("\nNombre: %s", empleado.nombre);
    printf("Sexo: %s", empleado.sexo);
    printf("Salario: %.2f\n", empleado.salario);
}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    int i, n, pmay, pmen;

    printf("Digite el número de empleados de la empresa: ");
    scanf("%i", &n);
    fflush(stdin);

    struct empleado empleados[100];

    ingresarEmpleados(empleados, n);
    encontrarMayorMenorSalario(empleados, n, &pmay, &pmen);

    printf("\nEl empleado con el mayor salario es: ");
    imprimirEmpleado(empleados[pmay]);

    printf("\nEl empleado con el menor salario es: ");
    imprimirEmpleado(empleados[pmen]);

    return 0;
}