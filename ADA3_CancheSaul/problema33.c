/* Author: Saul Canche Marcial 
Copilador: Zinjai
Version: 1.0
Sistema operativo: Linux ubuntu
Fecha de cracion: 20  de junio 2023
Descripcion:
33. E.P. que lea una matriz de 4 X 4 elementos y que calcule e
imprima lo siguiente:
a) El elemento menor y el elemento mayor del arreglo (se supone que
no se pueden repetir).
b) El total de elementos negativos de la fila 2 y, el total de elementos
positivos de la columna 2.
*/
#include <stdio.h>
#include <locale.h>
#define N 4

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

int encontrarMayor(int matriz[][N], int n) {
    int i, j, mayor = matriz[0][0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
    }
    return mayor;
}

int encontrarMenor(int matriz[][N], int n) {
    int i, j, menor = matriz[0][0];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

int contarNegativosFila(int matriz[][N], int n, int fila) {
    int i, contador = 0;
    for (i = 0; i < n; i++) {
        if (matriz[fila][i] < 0) {
            contador++;
        }
    }
    return contador;
}

int contarPositivosColumna(int matriz[][N], int n, int columna) {
    int i, contador = 0;
    for (i = 0; i < n; i++) {
        if (matriz[i][columna] > 0) {
            contador++;
        }
    }
    return contador;
}

int main() {
    setlocale(LC_ALL, "es_ES");
    int matriz[N][N];
    leerMatriz(matriz, N);
    printf("El elemento mayor de la matriz es: %d\n", encontrarMayor(matriz, N));
    printf("El elemento menor de la matriz es: %d\n", encontrarMenor(matriz, N));
    printf("El total de elementos negativos en la fila 2 es: %d\n", contarNegativosFila(matriz, N, 1));
    printf("El total de elementos positivos en la columna 2 es: %d\n", contarPositivosColumna(matriz, N, 1));
    return 0;
}