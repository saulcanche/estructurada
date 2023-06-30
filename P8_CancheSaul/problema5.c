/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 30  de junio 2023
Descripcion:
*/
/*5. Hacer 2 estructuras una llamada promedio que tendra los siguientes miembros: 
nota1,nota2,nota3; y otro llamada alumno que tendra los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura
alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por
ultimo imprimir todos sus datos incluidos el promedio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct alumno {
    char nombre[20];
    char sexo[20];
    int edad;
    struct promedio prom;
};

void pausar() {
    printf("Presione enter para continuar...");
    getchar();
    getchar();
}

void ingresarDatosAlumno(struct alumno *alumno) {
    printf("Digite su nombre: ");
    fgets(alumno->nombre, sizeof(alumno->nombre), stdin);

    printf("Digite su sexo: ");
    fgets(alumno->sexo, sizeof(alumno->sexo), stdin);

    printf("Digite su edad: ");
    scanf("%i", &alumno->edad);

    printf("Digite las 3 notas: ");
    scanf("%f %f %f", &alumno->prom.nota1, &alumno->prom.nota2, &alumno->prom.nota3);
}

float calcularPromedio(struct alumno *alumno) {
    return (alumno->prom.nota1 + alumno->prom.nota2 + alumno->prom.nota3) / 3;
}

void imprimirDatosAlumno(struct alumno *alumno, float promedio) {
    printf("\n\n-Datos del Alumno-\n");
    printf("\nNombre: %s", alumno->nombre);
    printf("\nSexo: %s", alumno->sexo);
    printf("\nEdad: %i", alumno->edad);
    printf("\nPromedio: %.2f\n", promedio);
}

int main() {
    setlocale(LC_ALL, "es_ES.utf8");

    struct alumno alumno1;

    ingresarDatosAlumno(&alumno1);

    float promedio = calcularPromedio(&alumno1);

    imprimirDatosAlumno(&alumno1, promedio);

    pausar();

    return 0;
}
