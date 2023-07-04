/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
40. E.P. que cree un archivo de texto (.txt) llamado "PE_Verano”, para
almacenar los datos de cinco alumnos de Programación Estructurada, que contenga el siguiente menú de opciones:
a. Crear dicho archivo .txt (matricula, nombres, apellidos, Unidad1,
Unidad2, Unidad3, Unidad4, ProyectoFinal), así como calcular y
guardar el Promedio de cada estudiante). 
b. Agregar los datos de cinco alumnos adicionales. 
c. Leer el archivo .txt y visualizar la información de los diez alumnos,
en formato de reporte. 
d. Salir
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUMNOS 10
#define MAX_NOMBRE 50
#define MAX_APELLIDO 50
#define MAX_ARCHIVO 100

struct Alumno {
    int matricula;
    char nombre[MAX_NOMBRE];
    char apellido[MAX_APELLIDO];
    float Unidad1;
    float Unidad2;
    float Unidad3;
    float Unidad4;
    float ProyectoFinal;
    float promedio;
};

void crearArchivo() {
    FILE *archivo;
    archivo = fopen("PE_Verano.txt", "w");

    if (archivo == NULL) {
        printf("Error al crear el archivo.\n");
        return;
    }

    fclose(archivo);
    printf("Archivo creado exitosamente.\n");
}

void agregarAlumnos() {
    FILE *archivo;
    archivo = fopen("PE_Verano.txt", "a");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    struct Alumno alumnos[5];

    for (int i = 0; i < 5; i++) {
        printf("Alumno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alumnos[i].matricula);
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Apellido: ");
        scanf("%s", alumnos[i].apellido);
        printf("Calificación de la Unidad 1: ");
        scanf("%f", &alumnos[i].Unidad1);
        printf("Calificación de la Unidad 2: ");
        scanf("%f", &alumnos[i].Unidad2);
        printf("Calificación de la Unidad 3: ");
        scanf("%f", &alumnos[i].Unidad3);
        printf("Calificación de la Unidad 4: ");
        scanf("%f", &alumnos[i].Unidad4);
        printf("Calificación del Proyecto Final: ");
        scanf("%f", &alumnos[i].ProyectoFinal);

        alumnos[i].promedio = (alumnos[i].Unidad1 + alumnos[i].Unidad2 + alumnos[i].Unidad3 + alumnos[i].Unidad4 + alumnos[i].ProyectoFinal) / 5;

        fprintf(archivo, "%d %s %s %.2f %.2f %.2f %.2f %.2f %.2f\n", alumnos[i].matricula, alumnos[i].nombre, alumnos[i].apellido, alumnos[i].Unidad1, alumnos[i].Unidad2, alumnos[i].Unidad3, alumnos[i].Unidad4, alumnos[i].ProyectoFinal, alumnos[i].promedio);
    }

    fclose(archivo);
    printf("Datos agregados exitosamente.\n");
}

void leerArchivo() {
    FILE *archivo;
    archivo = fopen("PE_Verano.txt", "r");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    struct Alumno alumnos[MAX_ALUMNOS];
    int contador = 0;

    while (fscanf(archivo, "%d %s %s %f %f %f %f %f %f", &alumnos[contador].matricula, alumnos[contador].nombre, alumnos[contador].apellido, &alumnos[contador].Unidad1, &alumnos[contador].Unidad2, &alumnos[contador].Unidad3, &alumnos[contador].Unidad4, &alumnos[contador].ProyectoFinal, &alumnos[contador].promedio) != EOF) {
        contador++;
    }

    fclose(archivo);

    printf("REPORTE DE ALUMNOS\n");
    printf("MATRICULA\tNOMBRE\t\tAPELLIDO\tUNIDAD1\tUNIDAD2\tUNIDAD3\tUNIDAD4\tPROYECTO\tPROMEDIO\n");
    printf("________________________________________________________________________________________\n");
    for (int i = 0; i < contador; i++) {
        printf("%d\t\t%s\t\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t\t%.2f\n", alumnos[i].matricula, alumnos[i].nombre, alumnos[i].apellido, alumnos[i].Unidad1, alumnos[i].Unidad2, alumnos[i].Unidad3, alumnos[i].Unidad4, alumnos[i].ProyectoFinal, alumnos[i].promedio);
    }
    printf("________________________________________________________________________________________\n");
}

int main() {
    setlocale(LC_ALL, "es_ES");
    int opcion;

    do {
        printf("MENU DE OPCIONES\n");
        printf("1. Crear archivo PE_Verano.txt\n");
        printf("2. Agregar datos de 5 alumnos\n");
        printf("3. Leer archivo y visualizar información\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                crearArchivo();
                break;
            case 2:
                agregarAlumnos();
                break;
            case 3:
                leerArchivo();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
                break;
        }

        printf("\n");
    } while (opcion != 4);

    return 0;
}

