/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
32. E.P. que lea una matriz de 6X6 elementos y que cuente e imprima
cuantos elementos igual a cero, se encuentran en las filas 3 y 4.
*/
#include <stdio.h>
#include <locale.h>
#define N 6

void leerMatriz(int matriz[][N], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("Ingrese los elementos de la fila %d:\n", i + 1);
        for (j = 0; j < n; j++) {
            printf("Elemento %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int contarCeros(int matriz[][N], int n) {
    int i, j, contador = 0;
    for (i = 2; i <= 3; i++) {
        for (j = 0; j < n; j++) {
            if (matriz[i][j] == 0) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    setlocale(LC_ALL, "es_ES");
    int matriz[N][N];
    leerMatriz(matriz, N);
    printf("Hay %d elementos iguales a cero en las filas 3 y 4.\n", contarCeros(matriz, N));
    return 0;
}