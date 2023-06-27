/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
30. E.P. que lea las cinco calificaciones parciales de los 30 alumn@s
del curso de verano de Programación Estructurada y los almacene en
una matriz de 30x5 elementos. Deberá generar un vector, que
contenga la posición de aquell@s alumn@s, cuyo promedio final sea
mayor al promedio de grupo.
*/
#include <stdio.h>
#include <locale.h>
#define N 30
#define M 5

void leerMatriz(int matriz[][M], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("Ingrese las calificaciones del alumno %d:\n", i + 1);
        for (j = 0; j < m; j++) {
            printf("Calificación %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

float promedio(int vector[], int n) {
    int i;
    float suma = 0;
    for (i = 0; i < n; i++) {
        suma += vector[i];
    }
    return suma / n;
}

void promedioGrupo(int matriz[][M], int n, int m) {
    int i, j;
    float promedioAlumno[n], promedioGrupo;
    for (i = 0; i < n; i++) {
        promedioAlumno[i] = promedio(matriz[i], m);
        promedioGrupo += promedioAlumno[i];
    }
    promedioGrupo /= n;

    printf("El promedio del grupo es: %.2f\n", promedioGrupo);

    printf("Los alumnos con un promedio mayor al del grupo son:\n");
    for (i = 0; i < n; i++) {
        if (promedioAlumno[i] > promedioGrupo) {
            printf("Alumno %d\n", i + 1);
        }
    }
}

int main() {
    setlocale(LC_ALL, "es_ES");
    int matriz[N][M];
    leerMatriz(matriz, N, M);
    promedioGrupo(matriz, N, M);
    return 0;
}